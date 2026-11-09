// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "stdinc.hpp"
#include "obj/script.hpp"

namespace xsk::obj
{

script::script(context& ctx, std::vector<u8> const& data)
    : ctx_{ ctx }, data_{ data }
{
    switch (ctx.vm())
    {
    case vm::t8_31: case vm::t8_34: case vm::t8_35: case vm::t8_36:
        read_t8();
        break;
    case vm::t9_38:
        read_t9();
        break;
    case vm::jup_8a: case vm::jup_8b:
        read_jup();
        break;
    default:
        read_t10();
        break;
    }
}

auto script::read_t8() -> void
{
    auto const* hdr = at<t8_header>(0);

    name_ = hdr->name;
    checksum_ = static_cast<u64>(static_cast<u32>(hdr->crc));
    code_offset_ = static_cast<u32>(hdr->cseg_offset);
    code_size_ = static_cast<u32>(hdr->cseg_size);

    // T8 include entries are 32 bit script-path hashes.
    if (auto const* inc = table<u32>(static_cast<usize>(hdr->include_offset), hdr->include_count))
    {
        includes_.reserve(hdr->include_count);
        for (usize i = 0; i < hdr->include_count; i++)
            includes_.push_back(inc[i]);
    }

    if (auto const* exp = table<t8_export>(static_cast<usize>(hdr->export_table_offset), hdr->exports_count))
    {
        exports_.reserve(hdr->exports_count);
        for (usize i = 0; i < hdr->exports_count; i++)
        {
            exports_.push_back({
                exp[i].name,
                exp[i].name_space,
                0,
                exp[i].checksum,
                exp[i].address,
                exp[i].param_count,
                exp[i].flags,
            });
        }
    }

    auto const import_count = static_cast<usize>(hdr->imports_count < 0 ? 0 : hdr->imports_count);

    // Import entries are variable length: each is followed by its reference
    // address list, so the table cannot be indexed directly.
    usize pos = static_cast<usize>(hdr->imports_offset);

    imports_.reserve(import_count);

    for (usize i = 0; i < import_count; i++)
    {
        auto const* imp = at<t8_import>(pos);

        imports_.push_back({ imp->name, imp->import_namespace, imp->num_address, imp->param_count, imp->flags });

        pos += sizeof(t8_import) + sizeof(u32) * imp->num_address;
    }
}

auto script::read_t9() -> void
{
    auto const* hdr = at<t9_header>(0);

    name_ = hdr->name;
    checksum_ = static_cast<u64>(static_cast<u32>(hdr->crc));
    code_offset_ = hdr->cseg_offset;
    code_size_ = hdr->cseg_size;

    if (auto const* inc = table<u64>(hdr->includes_table, hdr->includes_count))
    {
        includes_.reserve(hdr->includes_count);
        for (usize i = 0; i < hdr->includes_count; i++)
            includes_.push_back(inc[i]);
    }

    // T9 reuses the T8 export record shape.
    if (auto const* exp = table<t8_export>(hdr->exports_tables, hdr->exports_count))
    {
        exports_.reserve(hdr->exports_count);
        for (usize i = 0; i < hdr->exports_count; i++)
        {
            exports_.push_back({
                exp[i].name,
                exp[i].name_space,
                0,
                exp[i].checksum,
                exp[i].address,
                exp[i].param_count,
                exp[i].flags,
            });
        }
    }

    usize pos = hdr->import_tables;

    imports_.reserve(hdr->imports_count);

    for (usize i = 0; i < hdr->imports_count; i++)
    {
        auto const* imp = at<t8_import>(pos);

        imports_.push_back({ imp->name, imp->import_namespace, imp->num_address, imp->param_count, imp->flags });

        pos += sizeof(t8_import) + sizeof(u32) * imp->num_address;
    }
}

auto script::read_jup() -> void
{
    auto const* hdr = at<jup_header>(0);

    name_ = hdr->name;
    checksum_ = hdr->checksum;
    code_offset_ = hdr->cseg_offset;
    code_size_ = hdr->cseg_size;

    if (auto const* inc = table<u64>(hdr->include_table, hdr->includes_count))
    {
        includes_.reserve(hdr->includes_count);
        for (usize i = 0; i < hdr->includes_count; i++)
            includes_.push_back(inc[i]);
    }

    if (auto const* exp = table<iw23_export>(hdr->export_offset, hdr->export_count))
    {
        exports_.reserve(hdr->export_count);
        for (usize i = 0; i < hdr->export_count; i++)
        {
            exports_.push_back({
                exp[i].name,
                exp[i].name_space,
                exp[i].file_name_space,
                exp[i].checksum,
                exp[i].address,
                exp[i].param_count,
                exp[i].flags,
            });
        }
    }

    usize pos = hdr->import_table;

    imports_.reserve(hdr->imports_count);

    for (usize i = 0; i < hdr->imports_count; i++)
    {
        auto const* imp = at<iw23_import>(pos);

        imports_.push_back({ imp->name, imp->name_space, imp->num_address, imp->param_count, imp->flags });

        pos += sizeof(iw23_import) + sizeof(u32) * imp->num_address;
    }
}

auto script::read_t10() -> void
{
    auto const* hdr = at<t10_header>(0);

    name_ = hdr->name;
    checksum_ = hdr->checksum;
    code_offset_ = hdr->cseg_offset;
    code_size_ = hdr->cseg_size;

    if (auto const* inc = table<u64>(hdr->include_table, hdr->includes_count))
    {
        includes_.reserve(hdr->includes_count);
        for (usize i = 0; i < hdr->includes_count; i++)
            includes_.push_back(inc[i]);
    }

    // Revisions from 0x0b carry a checksum in the export record and use the
    // longer layout. Only the 0x06 alpha is supported, so this is always the
    // short one; the branch stays for when retail revisions are added back.
    auto const with_checksum = ctx_.vm() != vm::t10_06;

    exports_.reserve(hdr->export_count);

    if (with_checksum)
    {
        if (auto const* exp = table<iw24_export2>(hdr->export_offset, hdr->export_count))
        {
            for (usize i = 0; i < hdr->export_count; i++)
            {
                exports_.push_back({
                    exp[i].name, exp[i].name_space, exp[i].file_name_space,
                    exp[i].checksum, exp[i].address, exp[i].param_count, exp[i].flags,
                });
            }
        }
    }
    else
    {
        if (auto const* exp = table<iw24_export>(hdr->export_offset, hdr->export_count))
        {
            for (usize i = 0; i < hdr->export_count; i++)
            {
                exports_.push_back({
                    exp[i].name, exp[i].name_space, exp[i].file_name_space,
                    0, exp[i].address, exp[i].param_count, exp[i].flags,
                });
            }
        }
    }

    usize pos = hdr->import_table;

    imports_.reserve(hdr->imports_count);

    for (usize i = 0; i < hdr->imports_count; i++)
    {
        auto const* imp = at<iw23_import>(pos);

        imports_.push_back({ imp->name, imp->name_space, imp->num_address, imp->param_count, imp->flags });

        pos += sizeof(iw23_import) + sizeof(u32) * imp->num_address;
    }
}

} // namespace xsk::obj
