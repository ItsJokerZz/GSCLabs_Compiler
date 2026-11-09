// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// Call of Duty: Modern Warfare III 2023 (JUP).
//
// IW-linked like T10, but on the older GscObj23 layout. Revisions 0x8a and
// 0x8b, both PC only in the ported registry.

#pragma once

#include "stdinc.hpp"
#include "obj/context.hpp"

namespace xsk::obj::jup
{

class context : public obj::context
{
public:
    context(obj::vm vm, obj::platform platform);
};

} // namespace xsk::obj::jup
