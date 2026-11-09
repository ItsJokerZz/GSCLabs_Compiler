// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "t10.hpp"

namespace xsk::obj::t10
{

extern std::array<std::pair<u16, opcode>, 139> const code_list_06_pc;

namespace
{

// T10 is IW-linked: 64 bit hashes, IW call encoding, IW foreach lowering.

auto table_for(obj::vm vm, obj::platform plt)
    -> std::span<std::pair<u16, opcode> const>
{
    // Only the BO6 alpha is supported. acts registers its opcode table
    // under PC, but the build that exists publicly is the PS4 alpha, so
    // the CLI exposes it as ps4 and selects PLATFORM_PC_ALPHA.
    if (vm == obj::vm::t10_06 && plt == platform::pc_alpha)
        return code_list_06_pc;

    throw std::runtime_error(fmt::format(
        "t10: only the BO6 alpha is supported (no table for platform '{}')",
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

} // namespace xsk::obj::t10
