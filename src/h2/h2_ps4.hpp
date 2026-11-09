// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#pragma once
#include "stdinc.hpp"
#include "gsc/context.hpp"

namespace xsk::gsc::h2_ps4
{
    //H2 PS4 1.00
    constexpr usize code_count = 154;
    constexpr usize func_count = 71;
    constexpr usize meth_count = 486;
    constexpr usize token_count = 42524;
    constexpr u32 max_string_id = 0xD5D7;
    
    class context : public gsc::context
    {
    public:
        context();
    };
}