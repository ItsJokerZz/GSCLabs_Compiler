// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "t7.hpp"

namespace xsk::obj::t7
{

extern std::array<std::pair<u16, opcode>, 10664> const code_list_ps4;

namespace
{

// T7 shares the Treyarch shape that T8 revision 0x31 inherited: 16 bit aligned
// opcodes, the 32 bit T7 name hash, and the T7 animtree encoding.
constexpr u64 base_flags = vm_flags::opcode_u16 | vm_flags::align
    | vm_flags::inv_add_to_obj | vm_flags::client_vm
    | vm_flags::hash_t7 | vm_flags::animtree_t7;

auto table_for(obj::vm vm, obj::platform plt)
    -> std::span<std::pair<u16, opcode> const>
{
    if (vm == obj::vm::t7_ps4 && plt == platform::playstation)
        return code_list_ps4;

    throw std::runtime_error(fmt::format("t7: no opcode table for platform '{}'",
        platform_name(plt)));
}

} // namespace

context::context(obj::vm vm, obj::platform platform)
    : obj::context(vm, platform, base_flags)
{
    auto const table = table_for(vm, platform);

    code_map_.reserve(table.size());
    code_map_rev_.reserve(table.size());

    for (auto const& entry : table)
    {
        // T7's opcode space is aliased: many encoded values decode to the same
        // operation. Decoding needs every alias, so insert them all; encoding
        // needs one canonical value, so keep the first seen.
        code_map_.insert({ entry.first, entry.second });
        code_map_rev_.emplace(entry.second, entry.first);
    }
}

} // namespace xsk::obj::t7
