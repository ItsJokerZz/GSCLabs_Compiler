// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "stdinc.hpp"
#include "obj/context.hpp"

namespace xsk::obj
{

extern std::array<std::pair<opcode, char const*>, static_cast<usize>(opcode::COUNT)> const opcode_name_list;
extern std::array<std::pair<vm, u64>, vm_flag_entry_count> const vm_flag_list;

auto flags_for_vm(obj::vm vm) -> u64
{
    for (auto const& entry : vm_flag_list)
    {
        if (entry.first == vm)
            return entry.second;
    }

    throw std::runtime_error("no registered flags for this VM revision");
}

context::context(obj::vm vm, obj::platform platform, u64 flags)
    : vm_{ vm }, platform_{ platform }, flags_{ flags }
{
    opcode_map_.reserve(opcode_name_list.size());

    for (auto const& entry : opcode_name_list)
        opcode_map_.insert({ entry.first, entry.second });
}

context::~context() = default;

auto context::endian() const -> obj::endian
{
    // Every VM in this family that carries an opcode table is little endian in
    // the ported registry. Big endian builds would set this per platform.
    return obj::endian::little;
}

auto context::init(fs_callback callback) -> void
{
    fs_callback_ = std::move(callback);
}

auto context::cleanup() -> void
{
    hash_map_.clear();
}

auto context::opcode_enum(u16 value) const -> obj::opcode
{
    auto const it = code_map_.find(value);
    return it != code_map_.end() ? it->second : opcode::Undefined;
}

auto context::opcode_value(obj::opcode op) const -> u16
{
    auto const it = code_map_rev_.find(op);

    if (it == code_map_rev_.end())
        throw std::runtime_error(fmt::format("opcode {} not present in this VM", opcode_name(op)));

    return it->second;
}

auto context::opcode_name(obj::opcode op) const -> std::string
{
    auto const it = opcode_map_.find(op);

    if (it == opcode_map_.end())
        return fmt::format("op_{:X}", static_cast<u16>(op));

    return std::string{ it->second };
}

auto context::opcode_size(obj::opcode) const -> u32
{
    // Opcodes in this family are 2 bytes when VMF_OPCODE_U16 is set, 1 byte
    // otherwise. Operand sizes are handled by the disassembler, which knows the
    // encoding of each instruction.
    return has_flag(vm_flags::opcode_u16) ? 2u : 1u;
}

auto context::hash_field(std::string const& name) const -> u64
{
    if (has_flag(vm_flags::hash_t7))
        return hash::t7(name);

    if (has_flag(vm_flags::hash_iw))
        return hash::jup_scr(name);

    return hash::t10_scr(name);
}

auto context::hash_path(std::string const& name) const -> u64
{
    if (has_flag(vm_flags::hash_t7))
        return hash::t89_scr(name);

    if (has_flag(vm_flags::hash_iw))
        return hash::jup_scr(name);

    return hash::t10_scr(name);
}

auto context::hash_file_path(std::string const& name) const -> u64
{
    if (has_flag(vm_flags::hash_path_iw))
        return hash::iw_asset(name.data());

    return hash_path(name);
}

auto context::hash_name(u64 id, std::string_view prefix) const -> std::string
{
    auto const it = hash_map_.find(id);

    if (it != hash_map_.end())
        return it->second;

    // Canonical unresolved form, matching what the games' own tooling emits.
    return fmt::format("{}_{:x}", prefix, id);
}

auto context::add_hash(u64 id, std::string name) -> void
{
    hash_map_.insert_or_assign(id, std::move(name));
}

auto context::load_hashes(std::vector<std::string> const& names) -> void
{
    // A plaintext name can be referenced by any of this VM's hash algorithms,
    // so register it under each. Collisions across algorithms are vanishingly
    // unlikely and first-write-wins is fine.
    for (auto const& name : names)
    {
        if (name.empty())
            continue;

        hash_map_.emplace(hash_field(name), name);
        hash_map_.emplace(hash_path(name), name);
        hash_map_.emplace(hash_file_path(name), name);
    }
}

} // namespace xsk::obj
