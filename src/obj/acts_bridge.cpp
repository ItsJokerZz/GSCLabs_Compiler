// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// Bridges gsc-tool's obj backend onto Atian's cod-tools
// (https://github.com/ate47/atian-cod-tools), Copyright (c) Antoine Willerval,
// which provides the compiler and decompiler for the GSC OBJ family
// (T7 / T8 / T9 / T10 / JUP).
//
// This links the acts SDK (acts-common.lib + include/acts_api) rather than
// building acts from source. That matters beyond convenience: T7/BO3 support
// only exists from acts 3.2.x onward, so a pinned older source tree silently
// lacks it. The SDK also streams both directions through callbacks, so no
// temporary files are needed.
//
// gsc-tool's own tables still choose the VM and platform; acts does codegen.

#include "stdinc.hpp"
#include "obj/obj.hpp"

#include <acts_api/api.h>
#include <acts_api/gsc.h>
#include <acts_api/gsc_compiler.h>
#include <acts_api/gsc_decompiler.h>

namespace fs = std::filesystem;

namespace xsk::obj
{

namespace
{

auto to_acts_platform(obj::platform plt) -> ActsAPIGsc_Platform
{
    switch (plt)
    {
    case platform::pc:          return PLATFORM_PC;
    case platform::playstation: return PLATFORM_PLAYSTATION;
    case platform::xbox:        return PLATFORM_XBOX;
    case platform::pc_alpha:    return PLATFORM_PC_ALPHA;
    case platform::bo6_v1:      return PLATFORM_BO6_V1;
    case platform::bo6:         return PLATFORM_BO6;
    case platform::bo7:         return PLATFORM_BO7;
    default:                    return PLATFORM_PC;
    }
}

// obj::vm values are the script magics themselves, which is exactly what the
// SDK wants for ActsAPIGsc_VmMagic.
auto to_acts_vm(obj::vm vm) -> ActsAPIGsc_VmMagic
{
    return static_cast<ActsAPIGsc_VmMagic>(vm);
}

auto last_error(char const* what) -> std::runtime_error
{
    auto const* msg = ActsGetAPILastMessage();
    return std::runtime_error(fmt::format("acts {}: {}", what, msg ? msg : "unknown error"));
}

// Collects the callback output into a buffer.
void append_cb(char const* str, usize len, void* ud)
{
    static_cast<std::string*>(ud)->append(str, len);
}

void append_bytes_cb(void* ud, u8 const* data, usize len)
{
    auto* out = static_cast<std::vector<u8>*>(ud);
    out->insert(out->end(), data, data + len);
}

} // namespace

auto decompile(context& ctx, std::vector<u8> const& data) -> std::vector<u8>
{
    auto text = std::string{};

    auto cfg = ActsAPIGscDecompiler_OptionalConfig{};
    cfg.WriteAsmFunction = append_cb;
    cfg.WriteAsmFunctionUserData = &text;
    cfg.writeDecompilation = true;
    cfg.writeAsm = false;
    cfg.vm = to_acts_vm(ctx.vm());

    auto handle = ActsAPIGscDecompiler_CreateDecompilerContext(to_acts_platform(ctx.platform()), &cfg);

    if (handle == INVALID_ACTS_HANDLE_VALUE)
        throw last_error("decompiler context");

    // acts mutates the buffer in place while decrypting strings.
    auto buffer = data;

    auto const status = ActsAPIGscDecompiler_DecompileObject(handle, buffer.data(), buffer.size(), nullptr, 0);

    if (ACTS_NOT_OK(status))
        throw last_error("decompile");

    return std::vector<u8>{ text.begin(), text.end() };
}

auto compile(context& ctx, std::string const& file, std::vector<u8> const&) -> std::vector<u8>
{
    auto const path = fs::path{ file };

    // .csc compiles as a client script; .gsc as a server script.
    auto const client = path.extension() == ".csc" || path.extension() == ".cscc";

    // T7's handler reports no default checksum, so acts computes one, and what
    // it computes varies per run. Every BO3 script produced by the C# injector
    // instead carries this one fixed constant, so match it rather than shipping
    // a different identity on every build. Other VMs have real defaults and are
    // left alone.
    auto cfg = ActsAPIGscCompiler_OptionalConfig{};
    auto const t7 = ctx.vm() == obj::vm::t7_ps4;

    if (t7)
        cfg.checksum = 0x4C492053;

    // Empty name, as acts' own CLI passes unless -n is given: acts then fills in
    // the VM's default, which for T7/BO3 is "scripts/shared/duplicaterender_mgr.gsc",
    // the script loaders expect to replace. Never put a filesystem path here —
    // the game hashes this to find the script, so a path yields something that
    // loads but never runs.
    auto handle = ActsAPIGscCompiler_CreateCompilerContext(
        to_acts_vm(ctx.vm()), to_acts_platform(ctx.platform()), "", client, t7 ? &cfg : nullptr);

    if (handle == INVALID_ACTS_HANDLE_VALUE)
        throw last_error("compiler context");

    // A directory input compiles the whole project into one script: acts walks
    // it for .gsc/.csc and links them together, so sources do not need to
    // #include each other. Errors keep their originating file and line.
    auto const recurse = fs::is_directory(path);

    ActsAPIGscCompiler_AddInput(handle, file.c_str(), recurse);

    auto out = std::vector<u8>{};

    auto const status = ActsAPIGscCompiler_Compile(handle, append_bytes_cb, &out);

    if (ACTS_NOT_OK(status))
        throw last_error("compile");

    return out;
}

} // namespace xsk::obj
