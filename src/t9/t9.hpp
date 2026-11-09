// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// Call of Duty: Black Ops Cold War (T9).
//
// Two VM revisions, 0x37 and 0x38. 0x37 additionally carries a `pc_alpha`
// table for the pre-release build, which uses a different opcode ordering to
// retail PC.

#pragma once

#include "stdinc.hpp"
#include "obj/context.hpp"

namespace xsk::obj::t9
{

class context : public obj::context
{
public:
    context(obj::vm vm, obj::platform platform);
};

} // namespace xsk::obj::t9
