// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// Entry points for the Treyarch/IW "GSC OBJ" script family.
//
// The VM revision is encoded in the script's own magic, so callers select a
// game family and platform and the revision is resolved per file.

#pragma once

#include "stdinc.hpp"
#include "obj/context.hpp"

namespace xsk::obj
{

enum class family : u8
{
    t7,
    t8,
    t9,
    t10,
    jup,
};

// Builds the context for a script's actual VM revision. Throws if the magic is
// not a known revision, or if the revision has no table for `platform`.
auto create_context(family family, obj::platform platform, obj::vm vm) -> context::ptr;

// Reads the magic from `data` and resolves it to a VM revision.
auto detect_vm(std::vector<u8> const& data) -> obj::vm;

auto family_name(family family) -> std::string_view;

// Decompiles a GSC OBJ script to source. `data` must be a whole script file;
// its magic must match the context's VM revision.
auto decompile(context& ctx, std::vector<u8> const& data) -> std::vector<u8>;

// Compiles GSC source to a GSC OBJ script for the context's VM revision.
auto compile(context& ctx, std::string const& file, std::vector<u8> const& data) -> std::vector<u8>;

} // namespace xsk::obj
