// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "iw3.hpp"

namespace xsk::gsc::iw3
{

extern std::array<std::pair<u8, opcode>, code_count> const code_list;

// PS3 and Xbox 360 are both big endian and share this opcode table.
context::context() : gsc::context(props::none, engine::iw3, endian::big, system::ps3, max_string_id)
{
    code_map_.reserve(code_list.size());
    code_map_rev_.reserve(code_list.size());

    for (auto const& entry : code_list)
    {
        // Duplicate encodings share an opcode, so keep the first value seen
        // as the canonical one to emit.
        code_map_.insert({ entry.first, entry.second });
        code_map_rev_.emplace(entry.second, entry.first);
    }
}

} // namespace xsk::gsc::iw3
