// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#pragma once
#include "stdinc.hpp"
#include "gsc/context.hpp"

namespace xsk::gsc::s1_ps4
{
    //S1 PS4 1.24
    constexpr usize code_count = 154;
    constexpr usize func_count = 733;
    constexpr usize meth_count = 1385;
    constexpr usize token_count = 0xA7BE;
    constexpr u32 max_string_id = 0xA7DC;

    class context : public gsc::context
    {
    public:
        context();
    };
}