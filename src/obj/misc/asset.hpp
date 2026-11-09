// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// On-disk layouts for the Treyarch/IW "GSC OBJ" script family
// (T7 / T8 / T9 / T10 / JUP).
//
// Struct layouts are ported from Atian's cod-tools
// (https://github.com/ate47/atian-cod-tools), Copyright (c) Antoine Willerval,
// distributed under the GPL-3 / MIT dual license. Field names are preserved so
// the layouts can be cross-checked against that project; unknown padding fields
// keep their original `unkNN` names rather than being invented.

#pragma once

namespace xsk::obj
{

// Every VM in this family starts with an 8 byte magic. The low bytes encode the
// VM revision, which is what selects the opcode table:
//
//   0x??000a0d43534780  Treyarch  (T8 revisions 0x31..0x36, T9 0x37/0x38)
//   0x00000a0d435347??  IW-linked (T10 0x06..0x14, JUP 0x8a/0x8b)
//
constexpr u64 magic_treyarch_base = 0x00000a0d43534780ull;
constexpr u64 magic_iw_base       = 0x00000a0d43534700ull;

enum class vm : u64
{
    invalid = 0,

    // Treyarch — Black Ops 3 (PS4 build 1.33)
    t7_ps4 = 0x1C000A0D43534780ull,

    // Treyarch — Black Ops 4
    t8_31 = 0x31000a0d43534780ull,
    t8_34 = 0x34000a0d43534780ull,
    t8_35 = 0x35000a0d43534780ull,
    t8_36 = 0x36000a0d43534780ull,

    // Treyarch — Black Ops Cold War (retail only; the 0x37 alpha is unsupported)
    t9_38 = 0x38000a0d43534780ull,

    // IW-linked — Modern Warfare III (2023)
    jup_8a = 0x00000a0d4353478aull,
    jup_8b = 0x00000a0d4353478bull,

    // IW-linked — Black Ops 6 (alpha only; retail revisions are not supported)
    t10_06 = 0x00000a0d43534706ull,
};

// Platform here selects an opcode table, not a console target: Treyarch ship
// different opcode orderings per build. `xbox` exists in acts' enum but no VM
// in the ported registry registers opcodes for it, so nothing maps to it yet.
enum class platform : u8
{
    pc,
    playstation,
    xbox,
    pc_alpha,
    bo6_v1,
    bo6,
    bo7,
    count,
};

inline auto platform_name(platform plt) -> std::string_view
{
    switch (plt)
    {
    case platform::pc:          return "pc";
    case platform::playstation: return "playstation";
    case platform::xbox:        return "xbox";
    case platform::pc_alpha:    return "pc_alpha";
    case platform::bo6_v1:      return "bo6_v1";
    case platform::bo6:         return "bo6";
    case platform::bo7:         return "bo7";
    default:                    return "unknown";
    }
}

// VM capability bits. These drive the shared disassembler/decompiler rather
// than being branched on per game, matching how acts models them.
struct vm_flags
{
    enum values : u64
    {
        none            = 0,
        align           = 1ull << 0,  // code is aligned to operand size
        hash64          = 1ull << 1,  // 64 bit name hashes
        no_version      = 1ull << 2,
        no_param_flags  = 1ull << 3,
        full_file_ns    = 1ull << 4,
        inv_add_to_obj  = 1ull << 5,
        hash_iw         = 1ull << 6,
        client_vm       = 1ull << 7,
        no_file_ns      = 1ull << 8,
        opcode_u16      = 1ull << 9,  // 16 bit opcodes (T8+)
        call_no_params  = 1ull << 10,
        iw_calls        = 1ull << 11,
        export_nocheck  = 1ull << 12,
        hash_cer        = 1ull << 13,
        animtree_t7     = 1ull << 14,
        hash_t7         = 1ull << 15,
        foreach_iw      = 1ull << 16,
        crc_dump        = 1ull << 17,
        export_crc32    = 1ull << 18,
        hash_cer_sp     = 1ull << 19,
        hash_path_iw    = 1ull << 20,
        gscbin          = 1ull << 21,
        no_magic        = 1ull << 22,
        var_id          = 1ull << 23,
        iw_like         = 1ull << 24,
        foreach_iw_keys = 1ull << 25,
        istring         = 1ull << 26,
        istring_hashed  = 1ull << 27,
        func_ref_24     = 1ull << 28,
        switch_32       = 1ull << 29,
        unique_hash     = 1ull << 30,
        hash_acts       = 1ull << 31,
        no_platform     = 1ull << 32,
        waittill_return = 1ull << 33,
    };
};

enum class export_flags : u8
{
    linked           = 0x01,
    autoexec         = 0x02,
    private_         = 0x04,
    class_member     = 0x08,
    class_destructor = 0x10,
    ve               = 0x20,
    event            = 0x40,
};

// These records are laid out with the compiler's natural alignment, matching
// the structs the games and acts use — they are NOT byte packed. It matters:
// iw24_export is 32 bytes, not 30, and iw23_import is 24, not 20. Packing them
// desynchronises every table walk. The T10 sample verifies it — 39 exports at
// 0x88 end exactly at the code segment start, 0x568 = 0x88 + 39 * 32.

// --- T8 (Black Ops 4) --------------------------------------------------------

struct t8_header
{
    u8  magic[8];
    i32 crc;
    i32 pad;
    u64 name;
    i32 include_offset;
    u16 string_count;
    u16 exports_count;
    i32 cseg_offset;
    i32 string_offset;
    i16 imports_count;
    u16 fixup_count;
    i32 devblock_string_offset;
    i32 export_table_offset;
    i32 ukn34;
    i32 imports_offset;
    u16 globalvar_count;
    i32 fixup_offset;
    i32 globalvar_offset;
    i32 script_size;
    i32 requires_implements_offset;
    i16 ukn50;
    i16 devblock_string_count;
    i32 cseg_size;
    u16 include_count;
    u8  flags;
    u8  requires_implements_count;
};

struct t8_fixup
{
    u64 offset;
    u64 address;
};

struct t8_import
{
    u32 name;
    u32 import_namespace;
    u16 num_address;
    u8  param_count;
    u8  flags;
};

struct t8_export
{
    u32 checksum;
    u32 address;
    u32 name;
    u32 name_space;
    u32 callback_event;
    u8  param_count;
    u8  flags;
    u16 padding;
};

struct t8_global_var
{
    u32 name;
    u32 num_address;
};

struct t8_string
{
    u32 string;
    u8  num_address;
    u8  type;
    u16 pad;
};

// --- T9 (Black Ops Cold War) -------------------------------------------------

struct t9_header
{
    u8  magic[8];
    i32 crc;
    i32 pad0c;
    u64 name;
    u16 string_count;
    u16 exports_count;
    u16 imports_count;
    u16 unk1e;
    u16 globalvar_count;
    u16 unk22;
    u16 includes_count;
    u16 devblock_string_count;
    u32 devblock_string_offset;
    u32 cseg_offset;
    u32 string_offset;
    u32 includes_table;
    u32 exports_tables;
    u32 import_tables;
    u32 unk40;
    u32 globalvar_offset;
    u32 file_size;
    u32 unk4c;
    u32 cseg_size;
    u32 unk54;
};

// --- JUP (Modern Warfare III 2023) — "GscObj23" ------------------------------

struct jup_header
{
    u8  magic[8];
    u64 name;
    u16 unk10;
    u16 animtree_use_count;
    u16 animtree_count;
    u16 devblock_string_count;
    u16 export_count;
    u16 fixup_count;
    u16 unk1C;
    u16 imports_count;
    u16 includes_count;
    u16 unk22;
    u16 string_count;
    u16 unk26;
    u32 checksum;
    u32 animtree_use_offset;
    u32 animtree_offset;
    u32 cseg_offset;
    u32 cseg_size;
    u32 devblock_string_offset;
    u32 export_offset;
    u32 fixup_offset;
    u32 size1;
    u32 import_table;
    u32 include_table;
    u32 size2;
    u32 string_table;
    u32 unk5C;
};

struct iw23_import
{
    u64 name;
    u64 name_space;
    u16 num_address;
    u8  param_count;
    u8  flags;
};

struct iw23_export
{
    u64 name;
    u64 name_space;
    u64 file_name_space;
    u64 checksum;
    u32 address;
    u8  param_count;
    u8  flags;
};

// --- T10 (Black Ops 6) — "GscObj24" ------------------------------------------

struct t10_header
{
    u8  magic[8];
    u64 name;
    u16 unk10;
    u16 animtree_use_count;
    u16 animtree_count;
    u16 devblock_string_count;
    u16 export_count;
    u16 fixup_count;
    u16 unk1C;
    u16 imports_count;
    u16 includes_count;
    u16 string_count;
    u32 checksum;
    u32 unk28;
    u32 animtree_use_offset;
    u32 animtree_offset;
    u32 cseg_offset;
    u32 cseg_size;
    u32 devblock_string_offset;
    u32 export_offset;
    u32 fixup_offset;
    u32 size1;
    u32 import_table;
    u32 include_table;
    u32 string_table;
};

// T10 ships two export layouts; revisions from 0x0b on carry a checksum.
struct iw24_export
{
    u64 name;
    u64 name_space;
    u64 file_name_space;
    u32 address;
    u8  param_count;
    u8  flags;
};

struct iw24_export2
{
    u64 name;
    u64 name_space;
    u64 file_name_space;
    u32 checksum;
    u32 address;
    u8  param_count;
    u8  flags;
};

static_assert(sizeof(iw24_export) == 32, "iw24_export must keep natural alignment");
static_assert(sizeof(iw23_import) == 24, "iw23_import must keep natural alignment");
static_assert(sizeof(t10_header) == 0x58, "t10_header layout drifted");

// Reads the leading magic without committing to a header layout, so the caller
// can pick the right VM before casting.
inline auto read_magic(u8 const* data, usize size) -> u64
{
    if (!data || size < sizeof(u64))
        return 0;

    u64 value = 0;
    std::memcpy(&value, data, sizeof(value));
    return value;
}

inline auto vm_from_magic(u64 magic) -> vm
{
    switch (static_cast<vm>(magic))
    {
    case vm::t7_ps4:
    case vm::t8_31: case vm::t8_34: case vm::t8_35: case vm::t8_36:
    case vm::t9_38:
    case vm::jup_8a: case vm::jup_8b:
    case vm::t10_06:
        return static_cast<vm>(magic);
    default:
        return vm::invalid;
    }
}

} // namespace xsk::obj
