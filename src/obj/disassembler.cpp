// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "stdinc.hpp"
#include "obj/disassembler.hpp"

namespace xsk::obj
{

extern std::array<std::pair<opcode, operand>, opcode_operand_count> const opcode_operand_list;

namespace
{

auto operand_table() -> std::unordered_map<opcode, operand> const&
{
    static auto const table = []
    {
        auto map = std::unordered_map<opcode, operand>{};
        map.reserve(opcode_operand_list.size());

        for (auto const& entry : opcode_operand_list)
            map.insert({ entry.first, entry.second });

        return map;
    }();

    return table;
}

// Cursor over the code segment. Alignment is applied against the file offset,
// which is what the games do — the code segment is mapped contiguously.
class cursor
{
public:
    cursor(std::vector<u8> const& data, usize pos) : data_{ data }, pos_{ pos } {}

    auto pos() const -> usize { return pos_; }

    auto align(usize size) -> void
    {
        if (size > 1)
            pos_ = (pos_ + size - 1) & ~(size - 1);
    }

    template <typename T>
    auto read(bool aligned) -> T
    {
        if (aligned)
            align(sizeof(T));

        if (pos_ + sizeof(T) > data_.size())
            throw std::runtime_error(fmt::format("code offset 0x{:x} out of bounds", pos_));

        T value{};
        std::memcpy(&value, data_.data() + pos_, sizeof(T));
        pos_ += sizeof(T);
        return value;
    }

private:
    std::vector<u8> const& data_;
    usize pos_;
};

} // namespace

auto operand_of(opcode op) -> operand
{
    auto const& table = operand_table();
    auto const it = table.find(op);
    return it != table.end() ? it->second : operand::unknown;
}

auto disassemble_function(context& ctx, script const& script, script_export const& exp)
    -> function::ptr
{
    auto func = make_function();

    func->index = exp.address;
    func->name = exp.name;
    func->name_space = exp.name_space;
    func->file_name_space = exp.file_name_space;
    func->checksum = exp.checksum;
    func->param_count = exp.param_count;
    func->flags = exp.flags;

    auto const aligned = ctx.has_flag(vm_flags::align);
    auto const wide_op = ctx.has_flag(vm_flags::opcode_u16);
    auto const hash64 = ctx.has_flag(vm_flags::hash64);

    auto const code_end = static_cast<usize>(script.code_offset()) + script.code_size();

    auto cur = cursor{ script.data(), exp.address };

    while (cur.pos() < code_end)
    {
        auto inst = make_instruction();
        inst->index = static_cast<u32>(cur.pos());

        auto const raw = wide_op
            ? cur.read<u16>(aligned)
            : static_cast<u16>(cur.read<u8>(false));

        inst->value = raw;
        inst->opcode = ctx.opcode_enum(raw);

        auto const kind = operand_of(inst->opcode);

        // An opcode this VM does not map, or one whose operand encoding is not
        // established, would desynchronise the stream if we guessed a width.
        if (inst->opcode == opcode::Undefined || kind == operand::unknown)
        {
            inst->data.push_back(fmt::format("<unmapped op 0x{:x}>", raw));
            inst->size = static_cast<u32>(cur.pos()) - inst->index;
            func->instructions.push_back(std::move(inst));
            break;
        }

        switch (kind)
        {
        case operand::none:
            break;

        case operand::u8:
        case operand::local_var:
        case operand::count:
        case operand::call_ptr:
            inst->data.push_back(fmt::format("{}", cur.read<u8>(false)));
            break;

        case operand::i8:
            inst->data.push_back(fmt::format("{}", cur.read<i8>(false)));
            break;

        case operand::u16:
        case operand::global:
            inst->data.push_back(fmt::format("{}", cur.read<u16>(aligned)));
            break;

        case operand::i16:
        case operand::jump_expr:
            inst->data.push_back(fmt::format("{}", cur.read<i16>(aligned)));
            break;

        case operand::u32:
            inst->data.push_back(fmt::format("{}", cur.read<u32>(aligned)));
            break;

        case operand::i32:
            inst->data.push_back(fmt::format("{}", cur.read<i32>(aligned)));
            break;

        case operand::u64:
            inst->data.push_back(fmt::format("{}", cur.read<u64>(aligned)));
            break;

        case operand::i64:
            inst->data.push_back(fmt::format("{}", cur.read<i64>(aligned)));
            break;

        case operand::f32:
            inst->data.push_back(fmt::format("{}", cur.read<float>(aligned)));
            break;

        case operand::uptr:
            inst->data.push_back(fmt::format("{}", cur.read<u64>(aligned)));
            break;

        case operand::jump:
        {
            // T8/T9 branch with a 16 bit delta; the IW-linked VMs use 32 bit.
            auto const delta = ctx.has_flag(vm_flags::iw_like)
                ? static_cast<i64>(cur.read<i32>(aligned))
                : static_cast<i64>(cur.read<i16>(aligned));

            auto const target = static_cast<u32>(static_cast<i64>(cur.pos()) + delta);
            inst->data.push_back(fmt::format("loc_{:x}", target));
            func->labels.insert({ target, fmt::format("loc_{:x}", target) });
            break;
        }

        case operand::hash:
        case operand::field:
            if (hash64)
                inst->data.push_back(ctx.hash_name(cur.read<u64>(aligned), "hash"));
            else
                inst->data.push_back(ctx.hash_name(cur.read<u32>(aligned), "hash"));
            break;

        case operand::global_field:
        {
            inst->data.push_back(fmt::format("{}", cur.read<u16>(aligned)));

            if (hash64)
                inst->data.push_back(ctx.hash_name(cur.read<u64>(aligned), "hash"));
            else
                inst->data.push_back(ctx.hash_name(cur.read<u32>(aligned), "hash"));
            break;
        }

        case operand::local_vars:
        {
            // Function prologue. Declares the parameters and locals: a count,
            // then one name hash each, optionally followed by a flags byte.
            auto const count = cur.read<u8>(false);
            inst->data.push_back(fmt::format("{}", count));

            auto const var_flags = !ctx.has_flag(vm_flags::no_param_flags);

            for (u8 i = 0; i < count; i++)
            {
                if (ctx.has_flag(vm_flags::var_id))
                    inst->data.push_back(fmt::format("var{}", cur.read<u8>(false)));
                else if (hash64)
                    inst->data.push_back(ctx.hash_name(cur.read<u64>(aligned), "var"));
                else
                    inst->data.push_back(ctx.hash_name(cur.read<u32>(aligned), "var"));

                if (var_flags)
                    cur.read<u8>(false);
            }
            break;
        }

        case operand::local_vars_iw:
        {
            // IW-side prologue. Always 64 bit names, never a flags byte, and
            // not aligned even on VMs that align elsewhere.
            auto const count = cur.read<u8>(false);
            inst->data.push_back(fmt::format("{}", count));

            for (u8 i = 0; i < count; i++)
                inst->data.push_back(ctx.hash_name(cur.read<u64>(false), "var"));
            break;
        }

        case operand::vector_literal:
            for (auto i = 0; i < 3; i++)
                inst->data.push_back(fmt::format("{}", cur.read<float>(aligned)));
            break;

        case operand::string:
        case operand::name:
        case operand::animation:
        case operand::gscbin_token:
            if (hash64)
                inst->data.push_back(ctx.hash_name(cur.read<u64>(aligned), "hash"));
            else
                inst->data.push_back(ctx.hash_name(cur.read<u32>(aligned), "hash"));
            break;

        case operand::call:
        case operand::func_ref:
        case operand::class_call:
        case operand::iw_event:
        {
            // Import references are patched in place by the loader, so the
            // encoded width follows the VM's pointer/hash size.
            if (aligned)
                cur.align(sizeof(u64));

            if (kind == operand::class_call)
                inst->data.push_back(fmt::format("{}", cur.read<u32>(false)));

            inst->data.push_back(fmt::format("import_{}", cur.read<u32>(false)));

            if (kind == operand::call || kind == operand::class_call)
                inst->data.push_back(fmt::format("{}", cur.read<u8>(false)));
            break;
        }

        default:
            break;
        }

        inst->size = static_cast<u32>(cur.pos()) - inst->index;
        auto const done = inst->opcode == opcode::End || inst->opcode == opcode::Return;
        func->instructions.push_back(std::move(inst));

        if (done)
            break;
    }

    func->size = static_cast<u32>(cur.pos()) - func->index;

    return func;
}

} // namespace xsk::obj
