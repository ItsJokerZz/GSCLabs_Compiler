dependencies = { base = path.getrelative(os.getcwd(), path.getabsolute("deps")) }

function dependencies.load()
    dir = path.join(dependencies.base, "*.lua")
    deps = os.matchfiles(dir)

    for i, dep in pairs(deps) do
        dep = dep:gsub(".lua", "")
        require(dep)
    end
end

dependencies.load()

-- Atian's cod-tools (https://github.com/ate47/atian-cod-tools) provides the
-- compiler and decompiler for the GSC OBJ family (T7 / T8 / T9 / T10 / JUP).
--
-- The source lives in deps/acts and is built by tools/windows/build-acts.bat,
-- which prebuild-windows.bat runs before generating this workspace. It carries
-- local fixes to T7/BO3 codegen, so an upstream SDK is not a drop-in
-- replacement -- see deps/acts/PATCHES.md.
--
-- Set ACTS_SDK to fall back to a prebuilt SDK laid out as
-- include/acts_api + lib/acts-common.lib + bin/acts-common.dll.
acts_sdk = os.getenv("ACTS_SDK")
acts_libs = nil
acts_dll = nil

if acts_sdk then
    acts_libs = path.join(acts_sdk, "lib")
    acts_dll = path.join(acts_sdk, "bin/acts-common.dll")
else
    -- in-tree build: cmake puts the import lib and the dll side by side
    acts_sdk = "./deps/acts"
    acts_libs = "./deps/acts/build/bin/Release"
    acts_dll = "./deps/acts/build/bin/Release/acts-common.dll"
end
-------------------------------------------------
workspace "gsc-tool"
    startproject "xsk-tool"
    location "./build"
    objdir "%{wks.location}/obj/%{cfg.buildcfg}/%{prj.name}"
    targetdir "%{wks.location}/bin/%{cfg.platform}/%{cfg.buildcfg}"
    targetname "%{prj.name}"

    configurations { "debug", "release" }

    -- Windows x64 only: the acts SDK ships a 64-bit Windows import library
    -- and DLL, so no other target can link.
    platforms { "x64" }
    architecture "x86_64"

    filter "toolset:msc*"
        buildoptions "/bigobj"
        buildoptions "/Zc:__cplusplus"
        buildoptions "/std:c++20"
    filter {}

    filter { "system:windows" }
	    systemversion "latest"
    filter {}

    symbols "On"
    -- Dynamic CRT to match acts' prebuilt antlr4-runtime/lz4/zstd, which are
    -- built /MD. Mixing CRTs is a hard link error. The trade-off is that the
    -- binary now needs the VC++ redistributable; rebuild acts' deps with /MT
    -- if you want a fully static gsc-tool back.
    staticruntime "Off"
    warnings "Extra"

    filter "configurations:release"
        optimize "Full"
        defines { "NDEBUG" }
        flags { "FatalCompileWarnings" }
    filter {}

    filter "configurations:debug"
        optimize "Debug"
        defines { "DEBUG", "_DEBUG" }
    filter {}

project "xsk-tool"
    kind "ConsoleApp"
    language "C++"
    targetname "gsc-tool"

    dependson "xsk-utils"
    dependson "xsk-gsc"
    dependson "xsk-iw3"
    dependson "xsk-iw4_xb"
    dependson "xsk-iw5_pc"
    dependson "xsk-iw5_leg"
    dependson "xsk-iw6_pc"
    dependson "xsk-iw6_leg"
    dependson "xsk-iw6_ps4"
    dependson "xsk-s1_pc"
    dependson "xsk-s1_leg"
    dependson "xsk-s1_ps4"
    dependson "xsk-iw7"
    dependson "xsk-iw8"
    dependson "xsk-iw9"
    dependson "xsk-h1"
    dependson "xsk-h2"
    dependson "xsk-s2"
    dependson "xsk-s4"
    dependson "xsk-t6"
    dependson "xsk-obj"
    dependson "xsk-t7"
    dependson "xsk-t8"
    dependson "xsk-t9"
    dependson "xsk-t10"
    dependson "xsk-jup"

    files {
        "./src/tool/**.h",
        "./src/tool/**.hpp",
        "./src/tool/**.cpp"
    }

    links {
        "xsk-utils",
        "xsk-gsc",
        "xsk-iw3",
        "xsk-iw4_xb",
        "xsk-iw5_pc",
        "xsk-iw5_leg",
        "xsk-iw6_pc",
        "xsk-iw6_leg",
        "xsk-iw6_ps4",
        "xsk-s1_pc",
        "xsk-s1_leg",
        "xsk-s1_ps4",
        "xsk-iw7",
        "xsk-iw8",
        "xsk-iw9",
        "xsk-h1",
        "xsk-h2",
        "xsk-s2",
        "xsk-s4",
        "xsk-t6",
        "xsk-obj",
        "xsk-t7",
        "xsk-t8",
        "xsk-t9",
        "xsk-t10",
        "xsk-jup",
    }

    -- acts SDK
    libdirs { acts_libs }
    links { "acts-common" }

    includedirs {
        path.join(acts_sdk, "include"),
    }

    includedirs {
        "./src/tool",
        "./src"
    }

    fmt:link()
    zlib:link()

    -- acts-common.lib is an import library; the DLL must sit next to the exe.
    -- Absolute path: post-build runs with the build dir as cwd, so a path
    -- relative to premake5.lua would resolve one level short.
    -- Copied every build so a regenerated build tree cannot silently lose it.
    postbuildcommands {
        '{COPYFILE} "' .. path.getabsolute(acts_dll) .. '" "%{cfg.targetdir}"' 
    }

project "xsk-utils"
    kind "StaticLib"
    language "C++"

    files {
        "./src/utils/**.h",
        "./src/utils/**.hpp",
        "./src/utils/**.cpp"
    }

    includedirs {
        "./src/utils",
        "./src"
    }

    fmt:include()
    zlib:include()

project "xsk-gsc"
    kind "StaticLib"
    language "C++"

    files {
        "./src/gsc/**.h",
        "./src/gsc/**.hpp",
        "./src/gsc/**.cpp"
    }

    includedirs {
        "./src/gsc",
        "./src"
    }

    fmt:include()

project "xsk-iw3"
    kind "StaticLib"
    language "C++"

    files {
        "./src/iw3/**.hpp",
        "./src/iw3/**.cpp"
    }

    includedirs {
        "./src/iw3",
        "./src"
    }

    fmt:include()

project "xsk-iw4_xb"
    kind "StaticLib"
    language "C++"

    files {
        "./src/iw4/iw4_xb.hpp",
        "./src/iw4/iw4_xb.cpp",
        "./src/iw4/iw4_xb_code.cpp",
        "./src/iw4/iw4_xb_func.cpp",
        "./src/iw4/iw4_xb_meth.cpp",
        "./src/iw4/iw4_xb_token.cpp"
    }

    includedirs {
        "./src/iw4",
        "./src"
    }

    fmt:include()

project "xsk-iw5_leg"
    kind "StaticLib"
    language "C++"

    files {
        "./src/iw5/iw5_leg.hpp",
        "./src/iw5/iw5_leg.cpp",
        "./src/iw5/iw5_leg_code.cpp",
        "./src/iw5/iw5_leg_func.cpp",
        "./src/iw5/iw5_leg_meth.cpp",
        "./src/iw5/iw5_leg_token.cpp"
    }

    includedirs {
        "./src/iw5",
        "./src"
    }

    fmt:include()

project "xsk-iw5_pc"
    kind "StaticLib"
    language "C++"

    files {
        "./src/iw5/iw5_pc.hpp",
        "./src/iw5/iw5_pc.cpp",
        "./src/iw5/iw5_pc_code.cpp",
        "./src/iw5/iw5_pc_func.cpp",
        "./src/iw5/iw5_pc_meth.cpp",
        "./src/iw5/iw5_pc_token.cpp"
    }

    includedirs {
        "./src/iw5",
        "./src"
    }

    fmt:include()

project "xsk-iw6_leg"
    kind "StaticLib"
    language "C++"

    files {
        "./src/iw6/iw6_leg.hpp",
        "./src/iw6/iw6_leg.cpp",
        "./src/iw6/iw6_leg_code.cpp",
        "./src/iw6/iw6_leg_func.cpp",
        "./src/iw6/iw6_leg_meth.cpp",
        "./src/iw6/iw6_leg_token.cpp"
    }

    includedirs {
        "./src/iw6",
        "./src"
    }

    fmt:include()

project "xsk-iw6_pc"
    kind "StaticLib"
    language "C++"

    files {
        "./src/iw6/iw6_pc.hpp",
        "./src/iw6/iw6_pc.cpp",
        "./src/iw6/iw6_pc_code.cpp",
        "./src/iw6/iw6_pc_func.cpp",
        "./src/iw6/iw6_pc_meth.cpp",
        "./src/iw6/iw6_pc_token.cpp"
    }

    includedirs {
        "./src/iw6",
        "./src"
    }

    fmt:include()

project "xsk-iw6_ps4"
    kind "StaticLib"
    language "C++"

    files {
        "./src/iw6/iw6_ps4.hpp",
        "./src/iw6/iw6_ps4.cpp",
        "./src/iw6/iw6_ps4_code.cpp",
        "./src/iw6/iw6_ps4_func.cpp",
        "./src/iw6/iw6_ps4_meth.cpp",
        "./src/iw6/iw6_ps4_token.cpp"
    }

    includedirs {
        "./src/iw6",
        "./src"
    }

    fmt:include()

project "xsk-s1_leg"
    kind "StaticLib"
    language "C++"

    files {
        "./src/s1/s1_leg.hpp",
        "./src/s1/s1_leg.cpp",
        "./src/s1/s1_leg_code.cpp",
        "./src/s1/s1_leg_func.cpp",
        "./src/s1/s1_leg_meth.cpp",
        "./src/s1/s1_leg_token.cpp"
    }

    includedirs {
        "./src/s1",
        "./src"
    }

    fmt:include()

project "xsk-s1_pc"
    kind "StaticLib"
    language "C++"

    files {
        "./src/s1/s1_pc.hpp",
        "./src/s1/s1_pc.cpp",
        "./src/s1/s1_pc_code.cpp",
        "./src/s1/s1_pc_func.cpp",
        "./src/s1/s1_pc_meth.cpp",
        "./src/s1/s1_pc_token.cpp"
    }

    includedirs {
        "./src/s1",
        "./src"
    }

    fmt:include()

project "xsk-s1_ps4"
    kind "StaticLib"
    language "C++"

    files {
        "./src/s1/s1_ps4.hpp",
        "./src/s1/s1_ps4.cpp",
        "./src/s1/s1_ps4_code.cpp",
        "./src/s1/s1_ps4_func.cpp",
        "./src/s1/s1_ps4_meth.cpp",
        "./src/s1/s1_ps4_token.cpp"
    }

    includedirs {
        "./src/s1",
        "./src"
    }

    fmt:include()

project "xsk-iw7"
    kind "StaticLib"
    language "C++"

    files {
        "./src/iw7/**.h",
        "./src/iw7/**.hpp",
        "./src/iw7/**.cpp"
    }

    includedirs {
        "./src/iw7",
        "./src"
    }

    fmt:include()

project "xsk-iw8"
    kind "StaticLib"
    language "C++"

    files {
        "./src/iw8/**.h",
        "./src/iw8/**.hpp",
        "./src/iw8/**.cpp"
    }

    includedirs {
        "./src/iw8",
        "./src"
    }

    fmt:include()

project "xsk-iw9"
    kind "StaticLib"
    language "C++"

    files {
        "./src/iw9/**.h",
        "./src/iw9/**.hpp",
        "./src/iw9/**.cpp"
    }

    includedirs {
        "./src/iw9",
        "./src"
    }

    fmt:include()

project "xsk-h1"
    kind "StaticLib"
    language "C++"

    files {
        "./src/h1/**.h",
        "./src/h1/**.hpp",
        "./src/h1/**.cpp"
    }

    includedirs {
        "./src/h1",
        "./src"
    }

    fmt:include()

project "xsk-h2"
    kind "StaticLib"
    language "C++"

    files {
        "./src/h2/**.h",
        "./src/h2/**.hpp",
        "./src/h2/**.cpp"
    }

    includedirs {
        "./src/h2",
        "./src"
    }

    fmt:include()

project "xsk-s2"
    kind "StaticLib"
    language "C++"

    files {
        "./src/s2/**.h",
        "./src/s2/**.hpp",
        "./src/s2/**.cpp"
    }

    includedirs {
        "./src/s2",
        "./src"
    }

    fmt:include()

project "xsk-s4"
    kind "StaticLib"
    language "C++"

    files {
        "./src/s4/**.h",
        "./src/s4/**.hpp",
        "./src/s4/**.cpp"
    }

    includedirs {
        "./src/s4",
        "./src"
    }

    fmt:include()

project "xsk-t6"
    kind "StaticLib"
    language "C++"

    files {
        "./src/t6/**.h",
        "./src/t6/**.hpp",
        "./src/t6/**.cpp"
    }

    includedirs {
        "./src/t6",
        "./src"
    }

    fmt:include()

-- Treyarch/IW "GSC OBJ" script family (T8 / T9 / T10 / JUP).
-- xsk-obj holds the shared opcode set, hashing and binary layouts; each game
-- project below contributes only its per-VM opcode tables.

project "xsk-obj"
    kind "StaticLib"
    language "C++"

    files {
        "./src/obj/**.h",
        "./src/obj/**.hpp",
        "./src/obj/**.cpp"
    }

    includedirs {
        "./src/obj",
        "./src",
        -- acts SDK headers, for the compiler/decompiler bridge
        path.join(acts_sdk, "include"),
    }

    defines { "ANTLR4CPP_STATIC" }

    -- this project includes acts headers, which are not warning-clean under
    -- gsc-tool's /W4 + fatal-warnings release config
    warnings "Off"
    filter "configurations:release"
        removeflags { "FatalCompileWarnings" }
    filter {}

    filter "toolset:msc*"
        buildoptions { "/utf-8", "/bigobj" }
    filter {}

    fmt:include()

project "xsk-t7"
    kind "StaticLib"
    language "C++"

    files {
        "./src/t7/**.hpp",
        "./src/t7/**.cpp"
    }

    includedirs {
        "./src/t7",
        "./src"
    }

    fmt:include()

project "xsk-t8"
    kind "StaticLib"
    language "C++"

    files {
        "./src/t8/**.hpp",
        "./src/t8/**.cpp"
    }

    includedirs {
        "./src/t8",
        "./src"
    }

    fmt:include()

project "xsk-t9"
    kind "StaticLib"
    language "C++"

    files {
        "./src/t9/**.hpp",
        "./src/t9/**.cpp"
    }

    includedirs {
        "./src/t9",
        "./src"
    }

    fmt:include()

project "xsk-t10"
    kind "StaticLib"
    language "C++"

    files {
        "./src/t10/**.hpp",
        "./src/t10/**.cpp"
    }

    includedirs {
        "./src/t10",
        "./src"
    }

    fmt:include()

project "xsk-jup"
    kind "StaticLib"
    language "C++"

    files {
        "./src/jup/**.hpp",
        "./src/jup/**.cpp"
    }

    includedirs {
        "./src/jup",
        "./src"
    }

    fmt:include()


group "Dependencies"
    fmt:project()
    zlib:project()
