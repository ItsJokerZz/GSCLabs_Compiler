# Local changes to acts

This is Atian's cod-tools (https://github.com/ate47/atian-cod-tools), vendored
at **3.2.1** and patched. It is **not** interchangeable with an upstream
release: without these, T7/BO3 output crashes on console.

Everything below was verified against `DevolutionV1ZM.gscc`, a BO3 script that
runs on a PS4, by decompiling it, recompiling the same source, and comparing
the two files field by field and function by function.

## T7/BO3 correctness

| # | Change | Where |
|---|---|---|
| 1 | `#include` paths are written with forward slashes. BO3 matches include paths the way it spells its own script names; a backslash path resolves to null and the loader faults. | `gsc_compiler_script_object.cpp` |
| 2 | Call sites carry the **function hash**, not zeros. Function pointers were built with hash and namespace `0`, so `::func` compiled to a null pointer that `system::register` stored and later called. **This was the crash.** | `gsc_compiler_asm.hpp`, `gsc_compiler_script_object.cpp` |
| 3 | The byte after a call's param count is the **import flags**, not padding. | `gsc_compiler_asm.hpp` |
| 4 | Call operand is `[function][0]`, not `[namespace][function]`. | `gsc_compiler_asm.hpp` |
| 5 | Header size is **0x50**, not `sizeof(T7GSCOBJ)` (0x48) — sections were being written 8 bytes inside the header. | `gsc_vm_t7.hpp` |
| 6 | Export checksums are `0xFFFFFFFF`, not a CRC32 of the function body. | `gsc_vm_t7.hpp` |
| 7 | Default script name is empty; BO3 loaders stage the name themselves. | `gsc_vm_t7.hpp` |
| 8 | Exports default to `PRIVATE`. Every export in a script that runs carries it. | `gsc_vm_t7.hpp` |
| 9 | String operand placeholder is `0xFFFFFFFF`, not `0x12345678`. | `gsc_compiler_parser.cpp` |

## T7 opcodes

| # | Change | Where |
|---|---|---|
| 10 | `notify` bound to `OPCODE_IW_Notify` — the table only ever had the IW form. | `gsc_opcodes_t7_1{a,b,c}.hpp` |
| 11 | `[]` lowers to `OPCODE_EmptyArray` when `CreateArray` is absent, which it is on T7. | `gsc_compiler_parser.cpp` |
| 12 | `foreach` lowering for T7, using `FirstArrayKey`/`NextArrayKey` plus `EvalLocalVariableRefCached` + `SetVariableField`. T8's lowering needs opcodes T7 lacks. | `gsc_compiler_parser.cpp` |
| 13 | `ShiftRight` registered for PlayStation — it was PC-only, so `>>` and `>>=` did not compile. | `gsc_opcodes_t7_1c.hpp` |
| 14 | `ScriptMethodCall` / `CallBuiltinMethod` were **label-swapped** on PlayStation, so every method call used the builtin dispatch opcode. | `gsc_opcodes_t7_1c.hpp` |

## Language and tooling

| # | Change | Where |
|---|---|---|
| 15 | `::func` and `::nsp::func` accepted, the spelling BO3's own scripts use. | `grammar/gsc.g4` |
| 16 | `private` and `function` accepted in either order. | `grammar/gsc.g4` |
| 17 | String literal cap raised 256 -> 8192; real BO3 scripts contain strings well past 256 chars. | `gsc_compiler_parser.cpp` |
| 18 | **Two-stage SLL/LL parse — roughly 8x faster.** The grammar cascades `expression0..expression15`, which makes ANTLR's full-context prediction expensive. Falls back to LL, so diagnostics are unchanged. | `gsc_compiler.cpp` |

Items 15, 16 and 18 touch `grammar/gsc.g4`; the generated parser under
`src/core/acts/tools/gsc/compiler/grammar` is regenerated and committed. To
regenerate after editing the grammar:

```
java -jar scripts/antlr4.jar -o .antlr4 -Dlanguage=Cpp .\grammar\gsc.g4 -no-listener -visitor -Werror
```

then prepend `// precompiled header` + `#include <includes.hpp>` to each `.cpp`
and move the `.cpp`/`.h` into `src/core/acts/tools/gsc/compiler/grammar`.
ANTLR 4.13.0 against the 4.13.2 runtime is fine.

## Building

`tools/windows/build-acts.bat` from the gsc-tool root, or let
`prebuild-windows.bat` do it. Do not enable interprocedural optimisation:
`libtommath` fails to link under LTCG because its platform RNG backends are
selected by `#ifdef`.
