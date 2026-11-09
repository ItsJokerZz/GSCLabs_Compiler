// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// Call of Duty: Black Ops 4 (T8).
//
// T8 ships four VM revisions. 0x31 is PlayStation only; 0x34 and 0x36 carry
// both PC and PlayStation tables; 0x35 is a small PC-only delta. The revision
// is read from the script's magic, so a caller picks the game and platform and
// the context resolves the rest.

#pragma once

#include "stdinc.hpp"
#include "obj/context.hpp"

namespace xsk::obj::t8
{

class context : public obj::context
{
public:
    context(obj::vm vm, obj::platform platform);
};

} // namespace xsk::obj::t8
