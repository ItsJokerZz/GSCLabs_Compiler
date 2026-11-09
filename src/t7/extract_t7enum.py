"""Extract the ScriptOpCode enum (ordinal -> operation name) from T7OpCode.cs.

C# enums continue implicitly: a member without `= value` takes previous + 1.
The first scrape only matched explicit `Name = 0xNN` members and silently
dropped every implicit one, which is what produced blank names in the table.

usage: extract_t7enum.py <T7OpCode.cs> <out.tsv>
"""
import re
import sys

src = open(sys.argv[1], encoding="utf-8", errors="replace").read()

m = re.search(r"public enum ScriptOpCode\s*:\s*byte\s*\{(.*?)\n\s*\}", src, re.S)
if not m:
    sys.exit("ScriptOpCode enum not found")

body = m.group(1)
out = []
nxt = 0

for line in body.splitlines():
    line = line.split("//")[0].strip().rstrip(",").strip()
    if not line:
        continue

    em = re.match(r"^([A-Za-z_][A-Za-z0-9_]*)\s*(?:=\s*(0x[0-9a-fA-F]+|\d+))?$", line)
    if not em:
        continue

    name, val = em.group(1), em.group(2)
    ordinal = int(val, 0) if val is not None else nxt
    out.append((ordinal, name))
    nxt = ordinal + 1

out.sort()
with open(sys.argv[2], "w") as f:
    for ordinal, name in out:
        f.write(f"{ordinal}\t{name}\n")

print(f"enum members: {len(out)} (max ordinal {out[-1][0]})")
