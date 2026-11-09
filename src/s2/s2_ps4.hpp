// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#pragma once
#include "stdinc.hpp"
#include "gsc/context.hpp"
namespace xsk::gsc::s2_ps4
{
    //S2 PS4 1.25
    constexpr usize code_count = 155;
    constexpr usize func_count = 308;
    constexpr usize meth_count = 23;
    constexpr usize token_count = 391;
    constexpr u32 max_string_id = 0xACEE;

    class context : public gsc::context
    {
    public:
        context();
    };
}