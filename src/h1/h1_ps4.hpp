// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#pragma once
#include "stdinc.hpp"
#include "gsc/context.hpp"
namespace xsk::gsc::h1_ps4
{
    //H1 PS4 1.15
    constexpr usize code_count = 154;
    constexpr usize func_count = 0x308;
    constexpr usize meth_count = 864;
    constexpr usize token_count = 42947;
    constexpr u32 max_string_id = 42989;

    class context : public gsc::context
    {
    public:
        context();
    };
}