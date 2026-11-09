#pragma once
#include "stdinc.hpp"
#include "gsc/context.hpp"

namespace xsk::gsc::iw6_ps4
{
    //IW6 PS4 1.21
    constexpr usize code_count = 153;
    constexpr usize func_count = 605;
    constexpr usize meth_count = 715;
    constexpr usize token_count = 38306;
    constexpr u32 max_string_id = 38305;

    class context : public gsc::context
    {
    public:
        context();
    };
}