// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// Opcode table for VM revision 0x35.
//
// Generated from Atian's cod-tools
// (https://github.com/ate47/atian-cod-tools) opcode registry
// src/core/acts/tools/gsc/opcodes/gsc_opcodes_t8_35.hpp,
// Copyright (c) Antoine Willerval, GPL-3 / MIT dual licensed.
// Do not edit by hand — regenerate instead.

#include "t8.hpp"

namespace xsk::obj::t8
{

extern std::array<std::pair<u16, opcode>, 18> const code_list_35_pc
{{
    { 0x0, opcode::Abort },
    { 0x1, opcode::Nop },
    { 0x2, opcode::Breakpoint },
    { 0x3, opcode::AutoBreakpoint },
    { 0x4, opcode::ErrorBreakpoint },
    { 0x5, opcode::WatchBreakpoint },
    { 0x6, opcode::NotifyBreakpoint },
    { 0x7, opcode::ThreadEndBreakpoint },
    { 0x8, opcode::EvalLocalVariableCachedDebug },
    { 0x9, opcode::EvalLocalVariableRefCachedDebug },
    { 0xa, opcode::PushVar },
    { 0xb, opcode::PushEntityVar },
    { 0xc, opcode::ClearParams },
    { 0xd, opcode::CheckClearParams },
    { 0xe, opcode::PreScriptCall },
    { 0xf, opcode::CallBuiltinFunction },
    { 0x10, opcode::CallBuiltinMethod },
    { 0x11, opcode::End },
}};

} // namespace xsk::obj::t8
