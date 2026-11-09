// Hash algorithms used by the Treyarch/IW "GSC OBJ" script family
// (T7 / T8 / T9 / T10 / JUP).
//
// Ported from Atian's cod-tools (https://github.com/ate47/atian-cod-tools),
// src/core/shared/utils/hash_mini.hpp. That file is distributed under the MIT
// license and its notice is reproduced below as the license requires.
//
// ---------------------------------------------------------------------------
// MIT License
//
// Copyright (c) 2025 Antoine Willerval
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
// ---------------------------------------------------------------------------

#pragma once

namespace xsk::obj::hash
{

// masks, used to reduce the size of the hashes
constexpr u64 mask32 = 0xFFFFFFFF;
constexpr u64 mask60 = 0xFFFFFFFFFFFFFFFull;
constexpr u64 mask63 = 0x7FFFFFFFFFFFFFFFull;

// FNV1A primes
constexpr u64 iv_default = 0x100000001b3;
constexpr u64 iv_32_default = 0x1000193;
constexpr u64 iv_type2 = 0x10000000233;
constexpr u64 iv_type3 = 0x100000002C1;

// FNV1A start offsets
constexpr u64 fnv1a_prime = 0xcbf29ce484222325ull;
constexpr u64 fnv1a_32_prime = 0x811C9DC5;
constexpr u64 fnv1a_iw_asset_prime = 0x47F5817A5EF961BA;
constexpr u64 fnv1a_iw_scr_prime = 0x79D6530B0BB9B5D1;
constexpr u64 fnv1a_iw_dvar_offset = 0xD86A3B09566EBAAC;
constexpr u64 fnv1a_t10_omnvar_offset = 0xCBF28CE593123345;
constexpr u64 fnv1a_t10_scr_offset = 0x1C2F2E3C8A257D07;
constexpr u32 fnv1a_32_t7_prime = 0x4B9ACE2F;

// secure string salts
constexpr char const* xhashsec_dvar_str = "q6n-+7=tyytg94_*";
constexpr char const* xhashsec_t10_scr_str = "zt@f3yp(d[kkd=_@";
constexpr char const* xhashsec_t10_omnvar_str = "gvbs9*vpm@mh@krh";

// lowercase and normalize path separators, matching the game's own folding
constexpr auto lowerc(char c) -> char
{
    if (c >= 'A' && c <= 'Z')
        return static_cast<char>('a' + (c - 'A'));

    if (c == '\\')
        return '/';

    return c;
}

constexpr auto hash64a(char const* str, u64 start = fnv1a_prime, u64 iv = iv_default) -> u64
{
    auto hash = start;

    for (auto data = str; *data; data++)
        hash = (hash ^ static_cast<u8>(lowerc(*data))) * iv;

    return hash;
}

constexpr auto hash64(char const* str, u64 start = fnv1a_prime, u64 iv = iv_default) -> u64
{
    return hash64a(str, start, iv) & mask63;
}

constexpr auto hash_secure(char const* pattern, u64 start, char const* str, u64 iv) -> u64
{
    if (!str || !*str)
        return 0;

    auto base = hash64a(pattern, (start ^ static_cast<u8>(lowerc(*str))) * iv, iv);
    return hash64a(str + 1, base, iv);
}

// --- T7 (Black Ops 3) --------------------------------------------------------

constexpr auto t7_pre(char const* str, u32 start = fnv1a_32_t7_prime) -> u32
{
    return static_cast<u32>(hash64a(str, start, iv_32_default) & mask32);
}

constexpr auto t7_post(u32 hash) -> u32
{
    return hash * static_cast<u32>(iv_32_default);
}

constexpr auto t7(char const* str) -> u32
{
    return t7_post(t7_pre(str));
}

// --- T8/T9 script hash (canonical Treyarch scr hash) -------------------------

constexpr auto t89_scr_pre(char const* str, u32 start = fnv1a_32_t7_prime) -> u32
{
    auto hash = start;

    for (auto data = str; *data; data++)
    {
        auto c = lowerc(*data);
        hash = ((c + hash) ^ ((c + hash) << 10)) + (((c + hash) ^ ((c + hash) << 10)) >> 6);
    }

    return hash;
}

constexpr auto t89_scr_post(u32 hash) -> u32
{
    return 0x8001 * ((9 * hash) ^ ((9 * hash) >> 11));
}

constexpr auto t89_scr(char const* str) -> u32
{
    return t89_scr_post(t89_scr_pre(str));
}

// --- IW / JUP (MW3 2023) -----------------------------------------------------

constexpr auto iw_asset(char const* str, u64 start = fnv1a_iw_asset_prime) -> u64
{
    return hash64(str, start);
}

constexpr auto jup_scr(char const* str, u64 start = fnv1a_iw_scr_prime) -> u64
{
    return hash64a(str, start, iv_type2);
}

constexpr auto iw_dvar(char const* str, u64 start = 0) -> u64
{
    return !start ? hash_secure(xhashsec_dvar_str, fnv1a_iw_dvar_offset, str, iv_type2)
                  : hash64a(str, start, iv_type2);
}

// --- T10 (Black Ops 6) -------------------------------------------------------

constexpr auto t10_scr(char const* str, u64 start = 0) -> u64
{
    return !start ? hash_secure(xhashsec_t10_scr_str, fnv1a_t10_scr_offset, str, iv_type2)
                  : hash64a(str, start, iv_type2);
}

constexpr auto t10_scr_sp_pre(char const* str, u64 start = fnv1a_t10_scr_offset) -> u64
{
    return hash64a(str, start, iv_type2);
}

constexpr auto t10_scr_sp_post(u64 hash) -> u64
{
    return hash64a(xhashsec_t10_scr_str, hash, iv_type2);
}

constexpr auto t10_scr_sp(char const* str) -> u64
{
    return t10_scr_sp_post(t10_scr_sp_pre(str));
}

constexpr auto t10_omnvar(char const* str, u64 start = 0) -> u64
{
    return !start ? hash_secure(xhashsec_t10_omnvar_str, fnv1a_t10_omnvar_offset, str, iv_type3)
                  : hash64a(str, start, iv_type3);
}

// --- generic x-hashes --------------------------------------------------------

constexpr auto x64(char const* str, u64 start = fnv1a_prime) -> u64
{
    return hash64a(str, start);
}

constexpr auto x63(char const* str, u64 start = fnv1a_prime) -> u64
{
    return hash64(str, start);
}

constexpr auto x32(char const* str, u64 start = fnv1a_32_prime) -> u64
{
    return hash64(str, start, iv_32_default) & mask32;
}

// std::string convenience overloads

inline auto t7(std::string const& str) -> u32 { return t7(str.data()); }
inline auto t89_scr(std::string const& str) -> u32 { return t89_scr(str.data()); }
inline auto jup_scr(std::string const& str) -> u64 { return jup_scr(str.data()); }
inline auto t10_scr(std::string const& str) -> u64 { return t10_scr(str.data()); }
inline auto t10_scr_sp(std::string const& str) -> u64 { return t10_scr_sp(str.data()); }
inline auto x64(std::string const& str) -> u64 { return x64(str.data()); }
inline auto x63(std::string const& str) -> u64 { return x63(str.data()); }

} // namespace xsk::obj::hash
