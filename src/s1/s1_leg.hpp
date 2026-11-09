// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// S1 on PS3 / Xbox 360. One target for both: identical opcodes and
// builtin ids, so the tables are merged rather than duplicated.

#pragma once

#include "stdinc.hpp"
#include "gsc/context.hpp"

namespace xsk::gsc::s1_leg
{

constexpr usize code_count = 154;
constexpr usize func_count = 58;
constexpr usize meth_count = 92;
constexpr usize token_count = 470;
constexpr u32 max_string_id = 0xA7DC;

class context : public gsc::context
{
public:
    context();
};

} // namespace xsk::gsc::s1_leg
