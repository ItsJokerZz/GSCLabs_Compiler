// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// Per-VM capability flags, as registered by RegisterVM in Atian's cod-tools
// (https://github.com/ate47/atian-cod-tools), Copyright (c) Antoine Willerval,
// GPL-3 / MIT dual licensed. Do not edit by hand — regenerate instead.
//
// These are load-bearing: T8/T9 use 2 byte aligned opcodes, while T10 and JUP
// use 1 byte unaligned ones. Guessing them desynchronises decoding entirely.

#include "stdinc.hpp"
#include "obj/context.hpp"

namespace xsk::obj
{

extern std::array<std::pair<vm, u64>, vm_flag_entry_count> const vm_flag_list
{{
    { vm::jup_8a, vm_flags::foreach_iw | vm_flags::hash64 | vm_flags::no_param_flags | vm_flags::full_file_ns | vm_flags::hash_iw | vm_flags::hash_path_iw | vm_flags::call_no_params | vm_flags::iw_calls | vm_flags::iw_like | vm_flags::istring },
    { vm::jup_8b, vm_flags::crc_dump | vm_flags::foreach_iw | vm_flags::hash64 | vm_flags::no_param_flags | vm_flags::full_file_ns | vm_flags::hash_iw | vm_flags::hash_path_iw | vm_flags::call_no_params | vm_flags::iw_calls | vm_flags::iw_like | vm_flags::istring },
    { vm::t10_06, vm_flags::export_nocheck | vm_flags::crc_dump | vm_flags::foreach_iw | vm_flags::hash64 | vm_flags::hash_cer | vm_flags::hash_path_iw | vm_flags::call_no_params | vm_flags::iw_like | vm_flags::istring_hashed },
    { vm::t8_31, vm_flags::opcode_u16 | vm_flags::align | vm_flags::inv_add_to_obj | vm_flags::client_vm | vm_flags::hash_t7 | vm_flags::animtree_t7 | vm_flags::unique_hash },
    { vm::t8_34, vm_flags::opcode_u16 | vm_flags::align | vm_flags::inv_add_to_obj | vm_flags::client_vm },
    { vm::t8_35, vm_flags::opcode_u16 | vm_flags::align | vm_flags::inv_add_to_obj | vm_flags::client_vm },
    { vm::t8_36, vm_flags::opcode_u16 | vm_flags::align | vm_flags::inv_add_to_obj | vm_flags::client_vm },
    { vm::t9_38, vm_flags::crc_dump | vm_flags::opcode_u16 | vm_flags::align | vm_flags::inv_add_to_obj | vm_flags::client_vm },
}};

} // namespace xsk::obj
