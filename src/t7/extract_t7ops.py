"""Extract the __ops opcode table out of the PS4 BO3 opcode database.

The database is a .NET BinaryFormatter stream holding a T7MetaV2 object:
    uint __iv; uint __key; byte[] __ops; ulong __magic;

__ops is indexed BY the platform opcode value and holds the operation's
ordinal, i.e. ops[platform_value] -> ScriptOpCode. That mapping is factual
interface data about the game's VM, which is all we take from here.

We locate the array by scanning for an ArraySinglePrimitive record:
    0x0F, objectId(4), length(4), primitiveTypeEnum(1)  -- 2 == Byte
then read `length` raw bytes.

usage: extract_t7ops.py <ps4bo3ops.db>
"""
import struct
import sys

data = open(sys.argv[1], "rb").read()
print(f"db size: {len(data)}")

found = []
for i in range(len(data) - 13):
    if data[i] != 0x0F:
        continue
    _obj_id, length = struct.unpack_from("<II", data, i + 1)
    prim = data[i + 9]
    # Byte primitive, plausible length that fits in the file
    if prim == 2 and 0 < length <= len(data) and i + 10 + length <= len(data):
        found.append((i, length))

print(f"candidate byte-array records: {found[:5]}")

if not found:
    sys.exit("no ArraySinglePrimitive(Byte) record found")

# the opcode table is the largest such array
off, length = max(found, key=lambda t: t[1])
ops = data[off + 10: off + 10 + length]
print(f"chosen: offset 0x{off:x} length {length}")

nonzero = [(i, b) for i, b in enumerate(ops) if b]
print(f"mapped opcodes: {len(nonzero)} of {length} slots")
print(f"distinct operation ordinals: {len(set(b for _, b in nonzero))}")
print(f"first 12 mappings (platform_value -> ordinal): {nonzero[:12]}")

with open(sys.argv[2], "w") as f:
    for value, ordinal in nonzero:
        f.write(f"{value}\t{ordinal}\n")
print(f"wrote {sys.argv[2]}")
