// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// Normalizes the four GSC OBJ container layouts (T8, T9, JUP/GscObj23,
// T10/GscObj24) behind one accessor, so the disassembler does not branch on
// the VM revision for every field.

#pragma once

#include "obj/context.hpp"

namespace xsk::obj
{

struct script_export
{
    u64 name;
    u64 name_space;
    u64 file_name_space;
    u64 checksum;
    u32 address;
    u8  param_count;
    u8  flags;
};

struct script_import
{
    u64 name;
    u64 name_space;
    u16 num_address;
    u8  param_count;
    u8  flags;
};

class script
{
public:
    script(context& ctx, std::vector<u8> const& data);

    auto name() const -> u64 { return name_; }
    auto checksum() const -> u64 { return checksum_; }
    auto includes() const -> std::vector<u64> const& { return includes_; }
    auto exports() const -> std::vector<script_export> const& { return exports_; }
    auto imports() const -> std::vector<script_import> const& { return imports_; }

    auto code_offset() const -> u32 { return code_offset_; }
    auto code_size() const -> u32 { return code_size_; }
    auto data() const -> std::vector<u8> const& { return data_; }

private:
    auto read_t8() -> void;
    auto read_t9() -> void;
    auto read_jup() -> void;
    auto read_t10() -> void;

    // Bounds-checked view over the file. Every table walk goes through this so
    // a truncated or hostile script raises rather than reading past the end.
    template <typename T>
    auto at(usize offset) const -> T const*
    {
        if (offset + sizeof(T) > data_.size())
            throw std::runtime_error(fmt::format("script offset 0x{:x} out of bounds", offset));

        return reinterpret_cast<T const*>(data_.data() + offset);
    }

    template <typename T>
    auto table(usize offset, usize count) const -> T const*
    {
        if (!count)
            return nullptr;

        if (offset + sizeof(T) * count > data_.size())
            throw std::runtime_error(fmt::format("script table at 0x{:x} out of bounds", offset));

        return reinterpret_cast<T const*>(data_.data() + offset);
    }

    context& ctx_;
    std::vector<u8> const& data_;
    u64 name_{};
    u64 checksum_{};
    u32 code_offset_{};
    u32 code_size_{};
    std::vector<u64> includes_;
    std::vector<script_export> exports_;
    std::vector<script_import> imports_;
};

} // namespace xsk::obj
