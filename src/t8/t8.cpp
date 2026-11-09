// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "t8.hpp"

namespace xsk::obj::t8
{

extern std::array<std::pair<u16, opcode>, 147> const code_list_31_playstation;
extern std::array<std::pair<u16, opcode>, 179> const code_list_34_pc;
extern std::array<std::pair<u16, opcode>, 163> const code_list_34_playstation;
extern std::array<std::pair<u16, opcode>, 18>  const code_list_35_pc;
extern std::array<std::pair<u16, opcode>, 337> const code_list_36_pc;
extern std::array<std::pair<u16, opcode>, 205> const code_list_36_playstation;

namespace
{

auto table_for(obj::vm vm, obj::platform plt)
    -> std::span<std::pair<u16, opcode> const>
{
    switch (vm)
    {
    case obj::vm::t8_31:
        if (plt == platform::playstation) return code_list_31_playstation;
        break;
    case obj::vm::t8_34:
        if (plt == platform::pc)          return code_list_34_pc;
        if (plt == platform::playstation) return code_list_34_playstation;
        break;
    case obj::vm::t8_35:
        if (plt == platform::pc)          return code_list_35_pc;
        break;
    case obj::vm::t8_36:
        if (plt == platform::pc)          return code_list_36_pc;
        if (plt == platform::playstation) return code_list_36_playstation;
        break;
    default:
        throw std::runtime_error("t8: unsupported VM revision");
    }

    throw std::runtime_error(fmt::format("t8: VM revision has no table for platform '{}'",
        platform_name(plt)));
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

} // namespace xsk::obj::t8
