// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// PS3 and Xbox 360 merged: the union of both dumps, PS winning any
// id conflict. Do not edit by hand - regenerate instead.

#include "s1_leg.hpp"

namespace xsk::gsc::s1_leg
{

extern std::array<std::pair<u16, char const*>, func_count> const func_list
{{
    { 0x12, "isdefined" },
    { 0x20, "gettime" },
    { 0x34, "physicstrace" },
    { 0x35, "playerphysicstrace" },
    { 0x36, "getgroundposition" },
    { 0x37, "getmovedelta" },
    { 0x38, "getangledelta" },
    { 0x3D, "randomfloat" },
    { 0x3E, "randomintrange" },
    { 0x3F, "randomfloatrange" },
    { 0x41, "cos" },
    { 0x46, "int" },
    { 0x49, "min" },
    { 0x50, "squared" },
    { 0x51, "clamp" },
    { 0x59, "length" },
    { 0x5B, "lengthsquared" },
    { 0x5C, "length2dsquared" },
    { 0x5E, "vectordot" },
    { 0x60, "vectornormalize" },
    { 0x62, "vectortoyaw" },
    { 0x66, "anglestoright" },
    { 0x67, "anglestoforward" },
    { 0x6B, "rotatevector" },
    { 0x6D, "issubstr" },
    { 0x71, "strtok" },
    { 0x79, "precachestring" },
    { 0x80, "playfxontag" },
    { 0x93, "isexplosivedamagemod" },
    { 0xA2, "weaponclass" },
    { 0xC0, "getfirstarraykey" },
    { 0xC1, "getnextarraykey" },
    { 0xC3, "tablelookup" },
    { 0xC4, "tablelookupbyrow" },
    { 0xC7, "tablelookuprownum" },
    { 0xE6, "iprintln" },
    { 0xE7, "iprintlnbold" },
    { 0xE9, "getent" },
    { 0xED, "spawnstruct" },
    { 0xEF, "isalive" },
    { 0xF7, "newhudelem" },
    { 0xF8, "newclienthudelem" },
    { 0xF9, "newteamhudelem" },
    { 0xFB, "isplayer" },
    { 0x13C, "visionsetnaked" },
    { 0x161, "getnodesinradiussorted" },
    { 0x162, "getclosestnodeinsight" },
    { 0x169, "isai" },
    { 0x16B, "issentient" },
    { 0x1AB, "precachedigitaldistortcodeassets" },
    { 0x1F8, "isagent" },
    { 0x1FD, "nodesvisible" },
    { 0x20E, "getlinkednodes" },
    { 0x21E, "distance2dsquared" },
    { 0x233, "isusinghdr" },
    { 0x2A9, "capsuletracepassed" },
    { 0x2B8, "isnumber" },
    { 0x2CF, "nodegetsplitgroup" },
}};

} // namespace xsk::gsc::s1_leg
