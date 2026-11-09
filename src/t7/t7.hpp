// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// Call of Duty: Black Ops 3 (T7), PlayStation 4 build 1.33.
//
// T7 predates the VMs acts supports, so unlike T8/T9/T10/JUP there is no
// vendored back end for it — only the opcode table is available. Codegen has
// to be implemented natively before comp/decomp can work here.

#pragma once

#include "stdinc.hpp"
#include "obj/context.hpp"

namespace xsk::obj::t7
{

class context : public obj::context
{
public:
    context(obj::vm vm, obj::platform platform);
};

} // namespace xsk::obj::t7
