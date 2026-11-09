// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// Call of Duty 4: Modern Warfare (IW3), PS3 / Xbox 360.

#pragma once

#include "stdinc.hpp"
#include "gsc/context.hpp"

namespace xsk::gsc::iw3
{

constexpr usize code_count = 134;
constexpr usize func_count = 0;
constexpr usize meth_count = 0;
constexpr usize token_count = 0;
constexpr u32 max_string_id = 0;

class context : public gsc::context
{
public:
    context();
};

} // namespace xsk::gsc::iw3
