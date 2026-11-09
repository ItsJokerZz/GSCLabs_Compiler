// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// In-memory assembly representation for the Treyarch/IW "GSC OBJ" script
// family. Modelled on xsk::gsc::assembly, but widened for what T7+ needs:
// 16 bit opcodes, 64 bit name hashes, per-export namespaces and flags.

#pragma once

#include "opcode.hpp"
#include "asset.hpp"

namespace xsk::obj
{

struct instruction
{
    using ptr = std::unique_ptr<instruction>;

    u32 index;
    u32 size;
    obj::opcode opcode;
    u16 value;  // raw encoded opcode, kept for round-tripping unknown ops
    std::vector<std::string> data;
};

struct function
{
    using ptr = std::unique_ptr<function>;

    u32 index;
    u32 size;
    u64 name;
    u64 name_space;
    u64 file_name_space;
    u64 checksum;
    u8  param_count;
    u8  flags;
    std::vector<instruction::ptr> instructions;
    std::unordered_map<u32, std::string> labels;
};

// An import is a call target resolved by the VM at load time.
struct import_ref
{
    using ptr = std::unique_ptr<import_ref>;

    u64 name;
    u64 name_space;
    u8  param_count;
    u8  flags;
    std::vector<u32> references;
};

struct string_ref
{
    using ptr = std::unique_ptr<string_ref>;

    std::string value;
    u8  type;
    std::vector<u32> references;
};

struct global_ref
{
    using ptr = std::unique_ptr<global_ref>;

    u64 name;
    std::vector<u32> references;
};

struct animtree_ref
{
    using ptr = std::unique_ptr<animtree_ref>;

    std::string name;
    std::vector<u32> references;
};

struct assembly
{
    using ptr = std::unique_ptr<assembly>;

    obj::vm vm;
    u64 name;
    u64 checksum;
    std::vector<u64> includes;
    std::vector<function::ptr> functions;
    std::vector<import_ref::ptr> imports;
    std::vector<string_ref::ptr> strings;
    std::vector<global_ref::ptr> globals;
    std::vector<animtree_ref::ptr> animtrees;
};

inline auto make_instruction() -> instruction::ptr
{
    return instruction::ptr(new instruction);
}

inline auto make_function() -> function::ptr
{
    return function::ptr(new function);
}

inline auto make_assembly() -> assembly::ptr
{
    return assembly::ptr(new assembly);
}

} // namespace xsk::obj
