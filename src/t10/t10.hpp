// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// Call of Duty: Black Ops 6 (T10).
//
// T10 is IW-linked: the magic follows the 0x00000a0d435347?? form and the
// object layout is GscObj24 rather than the Treyarch T8/T9 header. Revisions
// 0x06..0x14 are known; 0x0f and 0x13 are listed in acts but carry no opcode
// table, so no context is offered for them.
//
// Later revisions select their table by build rather than by console, hence
// the bo6_v1 / bo6 / bo7 platform values.

#pragma once

#include "stdinc.hpp"
#include "obj/context.hpp"

namespace xsk::obj::t10
{

class context : public obj::context
{
public:
    context(obj::vm vm, obj::platform platform);
};

} // namespace xsk::obj::t10
