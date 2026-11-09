// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// IW5 on PS3 / Xbox 360. One target for both: identical opcodes and
// builtin ids, so the tables are merged rather than duplicated.

#pragma once

#include "stdinc.hpp"
#include "gsc/context.hpp"

namespace xsk::gsc::iw5_leg
{

constexpr usize code_count = 153;
constexpr usize func_count = 455;
constexpr usize meth_count = 781;
constexpr usize token_count = 33387;
constexpr u32 max_string_id = 0x826A;

class context : public gsc::context
{
public:
    context();
};

} // namespace xsk::gsc::iw5_leg
