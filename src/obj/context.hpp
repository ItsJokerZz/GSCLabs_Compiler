// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// Shared context for the Treyarch/IW "GSC OBJ" script family
// (T7 / T8 / T9 / T10 / JUP).
//
// Mirrors the role of xsk::gsc::context, but the T7+ VMs identify everything by
// hash rather than by plaintext id, so the name maps here are hash -> name and
// are expected to be populated from a hash dictionary at init time. Anything
// that cannot be resolved is rendered in the canonical `function_<hex>` /
// `namespace_<hex>` / `hash_<hex>` form the games' own tooling uses.

#pragma once

#include "misc/opcode.hpp"
#include "misc/asset.hpp"
#include "misc/assembly.hpp"
#include "misc/hash.hpp"

namespace xsk::obj
{

// Which hash algorithm a VM uses for a given kind of name.
enum class hash_kind : u8
{
    field,      // variable / field names
    path,       // namespace and function names
    file_path,  // script paths
};

// Kept local to this backend rather than reusing xsk::gsc::endian, so the obj
// family does not pull in the IW-side context headers.
enum class endian : u8
{
    little,
    big,
};

constexpr usize vm_flag_entry_count = 8;

// Capability flags this VM registers. Sourced from the generated table rather
// than assumed per family — T8/T9 use 2 byte aligned opcodes while T10 and JUP
// use 1 byte unaligned ones, so getting these wrong desynchronises decoding.
auto flags_for_vm(obj::vm vm) -> u64;

class context
{
public:
    using ptr = std::unique_ptr<context>;
    using fs_callback = std::function<std::vector<u8>(std::string const&)>;

    context(obj::vm vm, obj::platform platform, u64 flags);
    virtual ~context();

    auto vm() const -> obj::vm { return vm_; }
    auto platform() const -> obj::platform { return platform_; }
    auto flags() const -> u64 { return flags_; }
    auto has_flag(u64 flag) const -> bool { return (flags_ & flag) == flag; }

    auto endian() const -> obj::endian;

    auto init(fs_callback callback) -> void;
    auto cleanup() -> void;

    // opcode translation ------------------------------------------------------

    auto opcode_enum(u16 value) const -> obj::opcode;
    auto opcode_value(obj::opcode op) const -> u16;
    auto opcode_name(obj::opcode op) const -> std::string;
    auto opcode_size(obj::opcode op) const -> u32;

    // hashing -----------------------------------------------------------------

    auto hash_field(std::string const& name) const -> u64;
    auto hash_path(std::string const& name) const -> u64;
    auto hash_file_path(std::string const& name) const -> u64;

    // Resolve a hash back to a name. Falls back to the canonical
    // `<prefix>_<hex>` form when the hash is not in the dictionary.
    auto hash_name(u64 id, std::string_view prefix = "hash") const -> std::string;

    // Load a newline separated dictionary of plaintext names, hashing each with
    // this VM's algorithms so hashes seen in scripts can be reversed.
    auto load_hashes(std::vector<std::string> const& names) -> void;
    auto add_hash(u64 id, std::string name) -> void;

protected:
    obj::vm vm_;
    obj::platform platform_;
    u64 flags_;
    fs_callback fs_callback_;
    std::unordered_map<u16, obj::opcode> code_map_;
    std::unordered_map<obj::opcode, u16> code_map_rev_;
    std::unordered_map<obj::opcode, std::string_view> opcode_map_;
    std::unordered_map<u64, std::string> hash_map_;
};

} // namespace xsk::obj
