// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "stdinc.hpp"
#include "obj/obj.hpp"
#include "t7/t7.hpp"
#include "t8/t8.hpp"
#include "t9/t9.hpp"
#include "t10/t10.hpp"
#include "jup/jup.hpp"

namespace xsk::obj
{

namespace
{

auto family_of(obj::vm vm) -> family
{
    switch (vm)
    {
    case vm::t7_ps4:
        return family::t7;
    case vm::t8_31: case vm::t8_34: case vm::t8_35: case vm::t8_36:
        return family::t8;
    case vm::t9_38:
        return family::t9;
    case vm::jup_8a: case vm::jup_8b:
        return family::jup;
    default:
        return family::t10;
    }
}

} // namespace

auto family_name(family family) -> std::string_view
{
    switch (family)
    {
    case family::t7:  return "t7";
    case family::t8:  return "t8";
    case family::t9:  return "t9";
    case family::t10: return "t10";
    case family::jup: return "jup";
    default:          return "unknown";
    }
}

auto detect_vm(std::vector<u8> const& data) -> obj::vm
{
    auto const magic = read_magic(data.data(), data.size());
    auto const vm = vm_from_magic(magic);

    if (vm == vm::invalid)
        throw std::runtime_error(fmt::format("unknown GSC OBJ magic 0x{:016x}", magic));

    return vm;
}

auto create_context(family family, obj::platform platform, obj::vm vm) -> context::ptr
{
    auto const actual = family_of(vm);

    if (actual != family)
    {
        throw std::runtime_error(fmt::format(
            "script is a {} file but {} was selected", family_name(actual), family_name(family)));
    }

    switch (family)
    {
    case family::t7:  return std::make_unique<t7::context>(vm, platform);
    case family::t8:  return std::make_unique<t8::context>(vm, platform);
    case family::t9:  return std::make_unique<t9::context>(vm, platform);
    case family::t10: return std::make_unique<t10::context>(vm, platform);
    case family::jup: return std::make_unique<jup::context>(vm, platform);
    default:
        throw std::runtime_error("unsupported game family");
    }
}

} // namespace xsk::obj
