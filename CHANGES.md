# Changes

Everything below is in the tree and was verified before being written down.
Compiler fixes for T7/BO3 were found by taking a script that **runs on a PS4**,
decompiling it, recompiling the same source, and comparing the two files field
by field and function by function — not by reasoning about the format.

Changes under `deps/acts` are also listed in `deps/acts/PATCHES.md`.

---

## 1. T7 / BO3 output correctness

These are why compiled scripts crashed on console. Each is a divergence from a
script that runs.

| Change | Effect |
|---|---|
| Call sites carry the **function hash** | `::func` was compiling to a **null pointer** — hash and namespace were both written as `0` and left for the loader. `system::register` / `callback::on_spawned` stored null and faulted when the game later called it. **This was the crash.** |
| Import **flags byte** written at call+3 | Was left as padding; the working compiler writes the import flags there. |
| Call operand is `[function][0]` | Was `[namespace][function]`. |
| **Header size 0x50**, not `sizeof(T7GSCOBJ)` (0x48) | Sections were being written 8 bytes *inside* the header. |
| `#include` paths written with **forward slashes** | Backslash paths matched no loaded script, so the loader resolved them to null and faulted. This was the load-time crash. |
| Export checksums are `0xFFFFFFFF` | acts wrote a real CRC32 of each function body. |
| Default script name is **empty** | Was `scripts/shared/duplicaterender_mgr.gsc`; BO3 loaders stage the name themselves. |
| Exports default to **PRIVATE** | Every export in a working script carries it. Writing `private` explicitly produces identical bits. |
| String operand placeholder `0xFFFFFFFF` | Was `0x12345678`. |

## 2. T7 opcodes

| Change | Effect |
|---|---|
| `notify` bound to `OPCODE_IW_Notify` | `level notify(...)` would not compile at all — the T7 table only ever had the IW form. |
| `[]` lowers to `OPCODE_EmptyArray` | Array literals would not compile; T7 has no `CreateArray`. |
| `foreach` lowering **written for T7** | Did not compile. T8's lowering needs opcodes T7 lacks, so this uses `FirstArrayKey`/`NextArrayKey` with `EvalLocalVariableRefCached` + `SetVariableField`. |
| `ShiftRight` registered for PlayStation | `>>` and `>>=` did not compile; it was PC-only. |
| `ScriptMethodCall` / `CallBuiltinMethod` **un-swapped** | They were label-swapped, so *every* method call used the builtin dispatch opcode. |

Opcode work was cross-checked against the game's own dumped table
(`ps4bo3ops.db`), which is independent of acts. All 103 PlayStation opcode
groups map 1:1 onto it.

## 3. Language support — now uniform across every game

| Feature | Before | Now |
|---|---|---|
| `::func` pointers | acts games only | every game |
| `&func` pointers | acts games only | every game |
| `foreach` (`v in a`, `k, v in a`) | most games | every game with usable tables |
| `function name()` | acts only | every game |
| `private name()` | acts + t6 | every game |
| `private function name()` | **nowhere** | every game, either modifier order |
| `#using` | acts only | every game (synonym for `#include`) |
| `#include` | every game | every game |

Modifiers and `as` are matched as **plain identifiers**, not new keywords, so
scripts using `function`, `private`, `autoexec` or `as` as variable or function
names keep compiling. An unrecognised word in that position is a clear error.

## 4. Includes and namespaces on the legacy games

Legacy bytecode names a **file** in a far call, so a short name only means
something if the compiler knows which path it stands for.

- **A missing include is no longer fatal.** If exactly one include could not be
  read, an unqualified name that is neither local nor a builtin is attributed to
  it. With two or more unread includes it refuses to guess and names the
  candidates — a wrong path compiles fine and fails silently in game.
- **Include files are found by extension.** `<name>.gsc` then `<name>.gsh` are
  tried before the literal path, since includes are written without one.
- **Namespace-style short names**, two ways:
  ```
  #using maps\mp\gametypes\_hud_util;          ->  _hud_util::f()
  #using maps\mp\gametypes\_hud_util as hud;   ->  hud::f()
  ```
  Implemented for the legacy backend and t6.
- **A bare `name::f()` that no include registered is now an error.** It used to
  compile into a call to a file that does not exist.

So this now works with no include file on disk and no far-call spelling:

```gsc
#using maps\mp\gametypes\_hud_util;

main() { createFontString( "objective", 1.5 ); }
```

## 5. Performance

**Compilation of acts-backed games is roughly 8x faster.**

| | before | after |
|---|---|---|
| 2791-line script | 37.1 s | **4.9 s** |
| synthetic 4802 lines | 4.0 s | **0.7 s** |
| tiny script | 0.41 s | 0.40 s |

The grammar cascades `expression0..expression15`, which makes ANTLR's
full-context prediction expensive — cost tracked expression complexity, not
size. Now parses with `PredictionMode::SLL` and falls back to full `LL` only
when SLL cannot decide, so **diagnostics are unchanged**: every rejected input
still goes through the LL pass and keeps its exact message, line and column.

Also raised the string literal cap from 256 to 8192 — real BO3 scripts contain
strings well past 256 characters, and it blocked recompiling them.

Two optimisations were **measured and rejected**: lazy per-VM opcode
registration (saves under 100 ms against a real risk to VM detection) and
whole-program optimisation (`libtommath` fails to link under LTCG).

## 6. All-in-one build

acts is vendored at `deps/acts` (3.2.1 + the patches above) and builds as part
of gsc-tool.

```
prebuild-windows.bat          # submodules -> cmake acts -> premake
msbuild /p:Configuration=release /p:Platform=x64 build/gsc-tool.sln
```

- `tools/windows/build-acts.bat` runs cmake and **skips when the DLL already
  exists** — pass `rebuild` to force it. After editing anything under
  `deps/acts`, use `rebuild` or the change will not appear.
- `ACTS_SDK` still overrides everything and links a prebuilt SDK instead.
- `deps/acts/PATCHES.md` documents every local change so none of it is mistaken
  for upstream.

---

## Known gaps

Not caused by the above; measured and left as-is.

| Target | Problem |
|---|---|
| `iw3` | Opcode table lacks `OP_SafeCreateVariableFieldCached`, emitted for nearly every function, so nothing compiles. Builtin tables are empty. |
| `iw4` | Builtin tables are empty stubs, so `foreach` and any engine call fail. |
| `iw7 ps4` | Builtin tables are empty stubs (`iw7 pc` has 807). `foreach` needs `getfirstarraykey`. |
| `t8` / `t9` | No `GetIString` opcode registered, so `&"str"` fails. Needs dumped data. |
| `h1 pc` | 23 duplicate opcode ids in `h1_pc_code.cpp`, so decompiling desyncs. Compiling is fine. `h1 ps4` is clean. |
| `class` | Unimplemented in acts for every game. |
| t6 | `private` and `autoexec` are reserved words there, so they cannot be variable names. Pre-existing. |

Filling the empty builtin tables needs dumped lists for those builds; `iw7 ps4`
is the most tractable since `iw7 pc` gives 807 names to match against.
