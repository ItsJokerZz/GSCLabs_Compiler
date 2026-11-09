// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "jup.hpp"

namespace xsk::obj::jup
{

extern std::array<std::pair<u16, opcode>, 135> const code_list_8a_pc;
extern std::array<std::pair<u16, opcode>, 134> const code_list_8b_pc;

namespace
{


auto table_for(obj::vm vm, obj::platform plt)
    -> std::span<std::pair<u16, opcode> const>
{
    switch (vm)
    {
    case obj::vm::jup_8a: if (plt == platform::pc) return code_list_8a_pc; break;
    case obj::vm::jup_8b: if (plt == platform::pc) return code_list_8b_pc; break;
    default:
        throw std::runtime_error("jup: unsupported VM revision");
    }

    throw std::runtime_error(fmt::format("jup: VM revision has no table for platform '{}'",
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

} // namespace xsk::obj::jup
