// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.
//
// t7c — a command line front end for the Black Ops 3 (T7) GSC compiler.
//
// The only working T7 compiler is the one in someguythatmods/ps4-bo3-gsc-injector,
// which ships as a WinForms application with no command line interface
// (OutputType=WinExe, `static void Main()` taking no arguments). gsc-tool
// therefore cannot drive it directly.
//
// This wrapper is new code that calls that project's public compile API so
// gsc-tool can shell out to it for `comp t7ps4`. It compiles against a local
// checkout of the injector; nothing from that project is redistributed here.
// Set T7C_INJECTOR_ROOT (or edit the csproj) to point at your checkout.
//
// usage: t7c.exe <input.gsc> <output.gscc>

using System;
using System.IO;
using TreyarchCompiler;
using TreyarchCompiler.Utilities;

internal static class Program
{
    private static int Main(string[] args)
    {
        if (args.Length != 2)
        {
            Console.Error.WriteLine("usage: t7c <input.gsc> <output.gscc>");
            return 2;
        }

        var input = args[0];
        var output = args[1];

        if (!File.Exists(input))
        {
            Console.Error.WriteLine($"input not found: {input}");
            return 2;
        }

        try
        {
            var source = File.ReadAllText(input);

            // false selects a server script (.gsc); client scripts (.csc) would
            // pass true. gsc-tool decides that from the extension and only ever
            // hands us the server case today.
            CompiledCode code = Compiler.Compile(false, source);

            if (code?.CompiledScript == null || code.CompiledScript.Length == 0)
            {
                Console.Error.WriteLine("compile produced no output");
                return 1;
            }

            var dir = Path.GetDirectoryName(Path.GetFullPath(output));
            if (!string.IsNullOrEmpty(dir))
                Directory.CreateDirectory(dir);

            File.WriteAllBytes(output, code.CompiledScript);
            Console.WriteLine($"compiled {code.CompiledScript.Length} bytes -> {output}");
            return 0;
        }
        catch (Exception e)
        {
            Console.Error.WriteLine($"compile failed: {e.Message}");
            return 1;
        }
    }
}
