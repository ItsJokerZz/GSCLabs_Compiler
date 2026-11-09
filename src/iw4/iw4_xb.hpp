// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#pragma once

#include "stdinc.hpp"
#include "gsc/context.hpp"

namespace xsk::gsc::iw4_xb
{
    // IW4 XB 1.8.388110
    constexpr usize code_count = 140;
    constexpr usize func_count = 0;
    constexpr usize meth_count = 0;
    constexpr usize token_count = 0;
    constexpr u32 max_string_id = 33386;
    
    class context : public gsc::context
    {
    public:
        context();
    };
}