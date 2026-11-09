// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "t9.hpp"

namespace xsk::obj::t9
{

extern std::array<std::pair<u16, opcode>, 345> const code_list_38_pc;
extern std::array<std::pair<u16, opcode>, 166> const code_list_38_playstation;

namespace
{


auto table_for(obj::vm vm, obj::platform plt)
    -> std::span<std::pair<u16, opcode> const>
{
    // Retail (0x38) only. The 0x37 pre-release alpha is not supported.
    if (vm == obj::vm::t9_38)
    {
        if (plt == platform::pc)          return code_list_38_pc;
        if (plt == platform::playstation) return code_list_38_playstation;
    }

    throw std::runtime_error(fmt::format(
        "t9: retail build has no table for platform '{}'", platform_name(plt)));
}

} // namespace

context::context(obj::vm vm, obj::platform platform)
    : obj::context(vm, platform, flags_for_vm(vm))
{
    auto const table = table_for(vm, platform);

    code_map_.reserve(table.size());
    code_map_rev_.reserve(table.size());

    for (auto const& entry : table)
    {
        code_map_.insert({ entry.first, entry.second });
        code_map_rev_.insert({ entry.second, entry.first });
    }
}

} // namespace xsk::obj::t9
