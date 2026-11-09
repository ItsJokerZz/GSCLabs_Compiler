// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "s2_ps4.hpp"
namespace xsk::gsc::s2_ps4
{
    extern std::array<std::pair<u16, char const*>, meth_count> const meth_list
    {{
        { 0x8000, "attach" },
        { 0x8024, "delete" },
        { 0x80B4, "getrankedplayerdata" },
        { 0x80C3, "iprintln" },
        { 0x80C4, "iprintlnbold" },
        { 0x80F4, "giveweapon" },
        { 0x80F5, "takeweapon" },
        { 0x80F6, "takeallweapons" },
        { 0x80F7, "getcurrentweapon" },
        { 0x80FB, "switchtoweapon" },
        { 0x8131, "setclientomnvar" },
        { 0x8154, "notifyonplayercommand" },
        { 0x817B, "notsolid" },
        { 0x82B7, "settext" },
        { 0x82B8, "clearalltextafterhudelem" },
        { 0x82B9, "setshader" },
        { 0x82BA, "settargetent" },
        { 0x82C5, "setwaypoint" },
        { 0x82C9, "fadeovertime" },
        { 0x82CD, "destroy" },
        { 0x82E7, "kill" },
        { 0x82E9, "hide" },
        { 0x8445, "getclientomnvar" },
    }};
}