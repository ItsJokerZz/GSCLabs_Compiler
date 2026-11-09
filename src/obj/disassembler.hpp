// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// Code segment decoding for the GSC OBJ family.
//
// Encoding rule, uniform across these VMs: when the VM sets vm_flags::align,
// the cursor is first aligned up to the operand's own size; the operand is then
// read and the cursor advanced by that size. Opcodes themselves are 2 bytes
// when vm_flags::opcode_u16 is set.

#pragma once

#include "obj/context.hpp"
#include "obj/script.hpp"

namespace xsk::obj
{

constexpr usize opcode_operand_count = 314;

// What an opcode reads after itself. Kinds above `u8` are VM-conditional: the
// width depends on context flags, so the decoder resolves them at decode time.
enum class operand : u8
{
    none,

    // fixed width
    u8, i8, u16, i16, u32, i32, u64, i64, f32, uptr,

    // VM-conditional
    local_var,      // u8 local slot index
    local_vars,     // function prologue: u8 count, then count x (name hash [+ u8 flags])
    local_vars_iw,  // IW prologue: u8 count, then count x u64 name, no flags, unaligned
    count,          // u8 operand count
    jump,           // i16 or i32 relative branch
    jump_expr,      // i16 relative branch
    hash,           // u32 or u64 name hash
    global,         // u16 global index
    global_field,   // u16 global index + field hash
    field,          // u32 or u64 field hash
    string,         // string table reference
    name,           // name reference
    animation,      // animtree reference
    vector_literal, // three floats
    call,           // import reference + param count
    call_ptr,       // u8 param count
    class_call,     // u32 class id + u8 param count
    func_ref,       // import reference
    iw_event,       // IW event handler reference
    gscbin_token,   // gscbin string token

    unknown,        // encoding not established — decoding stops
};

auto operand_of(opcode op) -> operand;

// Decodes one export's code range into instructions. Stops and reports if it
// meets an opcode whose encoding is not established, rather than guessing a
// width and desynchronising the stream.
auto disassemble_function(context& ctx, script const& script, script_export const& exp)
    -> function::ptr;

} // namespace xsk::obj
