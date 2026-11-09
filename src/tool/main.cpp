// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "stdinc.hpp"
#include "utils/zlib.hpp"
#include "utils/file.hpp"
#include "utils/string.hpp"
#include "iw3/iw3.hpp"
#include "iw4/iw4_xb.hpp"
#include "iw5/iw5_pc.hpp"
#include "iw5/iw5_leg.hpp"
#include "iw6/iw6_pc.hpp"
#include "iw6/iw6_leg.hpp"
#include "iw6/iw6_ps4.hpp"
#include "iw7/iw7_pc.hpp"
#include "iw7/iw7_ps4.hpp"
#include "iw8/iw8.hpp"
#include "iw9/iw9.hpp"
#include "s1/s1_pc.hpp"
#include "s1/s1_leg.hpp"
#include "s1/s1_ps4.hpp"
#include "s2/s2_pc.hpp"
#include "s2/s2_ps4.hpp"
#include "s4/s4.hpp"
#include "h1/h1_pc.hpp"
#include "h1/h1_ps4.hpp"
#include "h2/h2_pc.hpp"
#include "h2/h2_ps4.hpp"
#include "t6/t6.hpp"
#include "obj/obj.hpp"

namespace fs = std::filesystem;

namespace xsk
{
    enum class encd { _, source, assembly, binary };
    enum class mode { _, compile, decompile, check };

    // Games at or after t6 use a non-gsc backend; games after jup_end use the
    // obj (GSC OBJ) backend. Keep this ordering in sync with execute().
    enum class game { _, iw3, t4, t5, iw4xb, s1leg, iw6leg, iw5leg, iw6ps4, iw5, iw6, iw7, iw7ps4, iw8, iw9, s1, s1ps4, s2, s2ps4, s4, h1, h1ps4, h2, h2ps4, t6, t6leg, t6ps4,
        t7ps4,
        t8, t8ps4, t9, t9ps4, t10, jup };

    std::unordered_map<std::string_view, encd> const exts =
    {
        { ".gsc", encd::source },
        { ".cgsc", encd::binary },
        { ".gscbin", encd::binary },
        { ".gscasm", encd::assembly },
    };

    std::unordered_map<std::string_view, mode> const modes =
    {
        { "comp", mode::compile },
        { "decomp", mode::decompile },
        { "check", mode::check },
    };

    std::unordered_map<std::string_view, game> const games =
    {
        { "iw3", game::iw3 },
        { "t4", game::t4 },
        { "t5", game::t5 },
        { "iw4xb", game::iw4xb },
        { "s1leg", game::s1leg },
        { "iw6leg", game::iw6leg },
        { "iw5leg", game::iw5leg },
        { "iw6ps4", game::iw6ps4 },
        { "s1ps4", game::s1ps4 },
        { "iw5", game::iw5 },
        { "iw6", game::iw6 },
        { "iw7", game::iw7 },
        { "iw7ps4", game::iw7ps4 },
        { "iw8", game::iw8 },
        { "iw9", game::iw9 },
        { "s1", game::s1 },
        { "s2", game::s2 },
        { "s2ps4", game::s2ps4 },
        { "s4", game::s4 },
        { "h1", game::h1 },
        { "h1ps4", game::h1ps4 },
        { "h2", game::h2 },
        { "h2ps4", game::h2ps4 },
        { "t6", game::t6 },
        { "t6leg", game::t6leg },
        { "t6ps4", game::t6ps4 },
        { "t7ps4", game::t7ps4 },
        { "t8", game::t8 },
        { "t8ps4", game::t8ps4 },
        { "t9", game::t9 },
        { "t9ps4", game::t9ps4 },
        { "t10", game::t10 },
        { "jup", game::jup },
    };

    std::map<game, std::string_view> const games_rev =
    {
        { game::iw3, "iw3" },
        { game::t4, "t4" },
        { game::t5, "t5" },
        { game::iw4xb, "iw4xb" },
        { game::s1leg, "s1leg" },
        { game::iw6leg, "iw6leg" },
        { game::iw5leg, "iw5leg" },
        { game::iw6ps4, "iw6ps4" },
        { game::s1ps4, "s1ps4" },
        { game::iw5, "iw5" },
        { game::iw6, "iw6" },
        { game::iw7, "iw7" },
        { game::iw7ps4, "iw7ps4" },
        { game::iw8, "iw8" },
        { game::iw9, "iw9" },
        { game::s1, "s1" },
        { game::s2, "s2" },
        { game::s2ps4, "s2ps4" },
        { game::s4, "s4" },
        { game::h1, "h1" },
        { game::h1ps4, "h1ps4" },
        { game::h2, "h2" },
        { game::h2ps4, "h2ps4" },
        { game::t6, "t6" },
        { game::t6leg, "t6leg" },
        { game::t6ps4, "t6ps4" },
        { game::t7ps4, "t7ps4" },
        { game::t8, "t8" },
        { game::t8ps4, "t8ps4" },
        { game::t9, "t9" },
        { game::t9ps4, "t9ps4" },
        { game::t10, "t10" },
        { game::jup, "jup" },
    };

    std::map<mode, encd> const encds =
    {
        { mode::compile, encd::source },
        { mode::decompile, encd::binary },
    };

    auto overwrite_prompt(std::string const& file) -> bool
    {
        auto overwrite = true;
        if (utils::file::exists(file))
        {
            do
            {
                std::cout << "File \"" << file << "\" already exists, overwrite? [Y/n]: ";
                auto result = std::getchar();

                if (result == '\n' || result == 'Y' || result == 'y')
                {
                    break;
                }
                else if (result == 'N' || result == 'n')
                {
                    overwrite = false;
                    break;
                }
            } while (true);
        }
        return overwrite;
    }

    namespace gsc
    {
        std::map<game, std::unique_ptr<context>> contexts;
        std::map<mode, std::function<void(game game, fs::path file, fs::path rel)>> funcs;
        bool zonetool = false;

        auto assemble_file(game game, fs::path file, fs::path rel) -> void
        {
            try
            {
                if (file.extension() != ".gscasm")
                    throw std::runtime_error("expected .gscasm file");

                rel = fs::path{ games_rev.at(game) } / rel / file.filename().replace_extension((zonetool ? ".cgsc" : ".gscbin"));

                auto data = utils::file::read(file);
                auto outasm = contexts[game]->source().parse_assembly(data);
                auto outbin = contexts[game]->assembler().assemble(*outasm);

                if (true/*overwrite_prompt(file + (zonetool ? ".cgsc" : ".gscbin"))*/)
                {
                    if (zonetool)
                    {
                        auto path = fs::path{ "compiled" } / rel;
                        utils::file::save(path, outbin.first.data, outbin.first.size);
                        utils::file::save(path.replace_extension(".cgsc.stack"), outbin.second.data, outbin.second.size);
                        fmt::print("compiled {}\n", rel.generic_string());
                    }
                    else
                    {
                        asset script;
                        script.name = "GSC"s;

                        script.bytecode.resize(outbin.first.size);
                        std::memcpy(script.bytecode.data(), outbin.first.data, script.bytecode.size());

                        script.buffer.resize(outbin.second.size);
                        std::memcpy(script.buffer.data(), outbin.second.data, script.buffer.size());
                        script.buffer = utils::zlib::compress(script.buffer);

                        script.len = static_cast<std::uint32_t>(outbin.second.size);
                        script.compressedLen = static_cast<std::uint32_t>(script.buffer.size());
                        script.bytecodeLen = static_cast<std::uint32_t>(script.bytecode.size());

                        auto result = script.serialize();
                        utils::file::save(fs::path{ "compiled" } / rel, result);
                        fmt::print("compiled {}\n", rel.generic_string());
                    }
                }
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{} at {}\n", e.what(), file.generic_string());
            }
        }

        auto disassemble_file(game game, fs::path file, fs::path rel) -> void
        {
            try
            {
                auto script = std::vector<std::uint8_t>{};
                auto stack = std::vector<std::uint8_t>{};

                if (zonetool)
                {
                    if (file.extension() != ".cgsc")
                        throw std::runtime_error("expected .cgsc file");

                    auto fbuf = file;
                    rel = fs::path{ games_rev.at(game) } / rel / file.filename().replace_extension(".gsc");

                    script = utils::file::read(file);
                    stack = utils::file::read(fbuf.replace_extension(".cgsc.stack"));
                }
                else
                {
                    if (file.extension() != ".gscbin")
                        throw std::runtime_error("expected .gscbin file");

                    rel = fs::path{ games_rev.at(game) } / rel / file.filename().replace_extension(".gscasm");

                    auto data = utils::file::read(file);

                    asset asset;
                    asset.deserialize(data);

                    script = std::move(asset.bytecode);
                    stack = utils::zlib::decompress(asset.buffer, asset.len);
                }

                auto outasm = contexts[game]->disassembler().disassemble(script, stack);
                auto outsrc = contexts[game]->source().dump(*outasm);

                utils::file::save(fs::path{ "disassembled" } / rel, outsrc);
                fmt::print("disassembled {}\n", rel.generic_string());
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{} at {}\n", e.what(), file.generic_string());
            }
        }

        // --- multi-file projects -------------------------------------------
        //
        // The legacy compilers take a single translation unit, so a project is
        // built by concatenating its sources. Doing only that would report every
        // error against the combined buffer, which is useless for debugging, so
        // we keep a line map and translate diagnostics back to the file and line
        // they actually came from.

        struct source_span
        {
            usize first_line;   // 1-based line of this file within the combined buffer
            usize line_count;
            std::string file;
        };

        // Name used for the combined unit. Kept free of ':' and path separators
        // so it can be found unambiguously when rewriting diagnostics.
        constexpr char const* project_unit = "<project>";

        auto gather_sources(fs::path const& dir, std::vector<u8>& out, std::vector<source_span>& spans) -> void
        {
            auto files = std::vector<fs::path>{};

            for (auto const& entry : fs::recursive_directory_iterator(dir))
            {
                if (entry.is_regular_file() && (entry.path().extension() == ".gsc" || entry.path().extension() == ".csc"))
                    files.push_back(entry.path());
            }

            // Stable order so diagnostics and output are reproducible.
            std::sort(files.begin(), files.end());

            if (files.empty())
                throw std::runtime_error("no .gsc or .csc files found in project");

            usize line = 1;

            for (auto const& f : files)
            {
                auto data = utils::file::read(f);

                auto count = static_cast<usize>(std::count(data.begin(), data.end(), '\n'));

                // Ensure each file starts on its own line even if the previous
                // one lacked a trailing newline.
                if (!data.empty() && data.back() != '\n')
                {
                    data.push_back('\n');
                    count += 1;
                }

                spans.push_back({ line, count, fs::relative(f, dir).generic_string() });
                out.insert(out.end(), data.begin(), data.end());
                line += count;
            }
        }

        // Rewrites "<project>:<line>:<col>" in a diagnostic to the originating
        // file and its own line number.
        auto localize(std::string msg, std::vector<source_span> const& spans) -> std::string
        {
            auto const needle = std::string{ project_unit } + ":";
            auto const pos = msg.find(needle);

            if (pos == std::string::npos)
                return msg;

            auto rest = msg.substr(pos + needle.size());
            auto line = usize{ 0 };

            try { line = static_cast<usize>(std::stoul(rest)); }
            catch (...) { return msg; }

            for (auto const& span : spans)
            {
                if (line >= span.first_line && line < span.first_line + span.line_count)
                {
                    auto local = line - span.first_line + 1;
                    return msg.substr(0, pos) + span.file + ":" + std::to_string(local)
                        + rest.substr(std::to_string(line).size());
                }
            }

            return msg;
        }

        auto compile_project(game game, fs::path const& dir, fs::path rel) -> void
        {
            auto spans = std::vector<source_span>{};

            try
            {
                auto data = std::vector<u8>{};
                gather_sources(dir, data, spans);

                // A project always emits a single script named "script", which
                // is the name injectors expect, rather than the directory name.
                rel = fs::path{ games_rev.at(game) } / rel
                    / (std::string{ "script" } + (zonetool ? ".cgsc" : ".gscbin"));

                auto outasm = contexts[game]->compiler().compile(std::string{ project_unit }, data);
                auto outbin = contexts[game]->assembler().assemble(*outasm);

                if (zonetool)
                {
                    auto path = fs::path{ "compiled" } / rel;
                    utils::file::save(path, outbin.first.data, outbin.first.size);
                    utils::file::save(path.replace_extension(".cgsc.stack"), outbin.second.data, outbin.second.size);
                }
                else
                {
                    asset script;
                    script.name = "GSC"s;

                    script.bytecode.resize(outbin.first.size);
                    std::memcpy(script.bytecode.data(), outbin.first.data, script.bytecode.size());

                    script.buffer.resize(outbin.second.size);
                    std::memcpy(script.buffer.data(), outbin.second.data, script.buffer.size());
                    script.buffer = utils::zlib::compress(script.buffer);

                    script.len = static_cast<std::uint32_t>(outbin.second.size);
                    script.compressedLen = static_cast<std::uint32_t>(script.buffer.size());
                    script.bytecodeLen = static_cast<std::uint32_t>(script.bytecode.size());

                    utils::file::save(fs::path{ "compiled" } / rel, script.serialize());
                }

                fmt::print("compiled {} ({} file(s))\n", rel.generic_string(), spans.size());
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{}\n", localize(e.what(), spans));
            }
        }

        // `check` parses without emitting anything: it answers "is this valid"
        // and nothing else, so it works the same on a file or a whole project.
        auto check_file(game game, fs::path file, fs::path) -> void
        {
            try
            {
                if (file.extension() != ".gsc" && file.extension() != ".csc")
                    throw std::runtime_error("expected .gsc or .csc file");

                auto data = utils::file::read(file);
                contexts[game]->source().parse_program(file.string(), data);

                fmt::print("ok {}\n", file.generic_string());
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{}\n", e.what());
            }
        }

        auto check_project(game game, fs::path const& dir) -> void
        {
            auto spans = std::vector<source_span>{};

            try
            {
                auto data = std::vector<u8>{};
                gather_sources(dir, data, spans);

                contexts[game]->source().parse_program(std::string{ project_unit }, data);

                fmt::print("ok {} ({} file(s))\n", dir.generic_string(), spans.size());
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{}\n", localize(e.what(), spans));
            }
        }

        auto compile_file(game game, fs::path file, fs::path rel) -> void
        {
            try
            {
                if (file.extension() != ".gsc")
                    throw std::runtime_error("expected .gsc file");

                rel = fs::path{ games_rev.at(game) } / rel / file.filename().replace_extension((zonetool ? ".cgsc" : ".gscbin"));

                auto data = utils::file::read(file);
                auto outasm = contexts[game]->compiler().compile(file.string(), data);
                auto outbin = contexts[game]->assembler().assemble(*outasm);

                if (true/*overwrite_prompt(file + (zonetool ? ".cgsc" : ".gscbin"))*/)
                {
                    if (zonetool)
                    {
                        auto path = fs::path{ "compiled" } / rel;
                        utils::file::save(path, outbin.first.data, outbin.first.size);
                        utils::file::save(path.replace_extension(".cgsc.stack"), outbin.second.data, outbin.second.size);
                        fmt::print("compiled {}\n", rel.generic_string());
                    }
                    else
                    {
                        asset script;
                        script.name = "GSC"s;

                        script.bytecode.resize(outbin.first.size);
                        std::memcpy(script.bytecode.data(), outbin.first.data, script.bytecode.size());

                        script.buffer.resize(outbin.second.size);
                        std::memcpy(script.buffer.data(), outbin.second.data, script.buffer.size());
                        script.buffer = utils::zlib::compress(script.buffer);

                        script.len = static_cast<std::uint32_t>(outbin.second.size);
                        script.compressedLen = static_cast<std::uint32_t>(script.buffer.size());
                        script.bytecodeLen = static_cast<std::uint32_t>(script.bytecode.size());

                        auto result = script.serialize();
                        utils::file::save(fs::path{ "compiled" } / rel, result);
                        fmt::print("compiled {}\n", rel.generic_string());
                    }
                }
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{} at {}\n", e.what(), file.generic_string());
            }
        }

        auto decompile_file(game game, fs::path file, fs::path rel) -> void
        {
            try
            {
                auto script = std::vector<std::uint8_t>{};
                auto stack = std::vector<std::uint8_t>{};

                if (zonetool)
                {
                    if (file.extension() != ".cgsc")
                        throw std::runtime_error("expected .cgsc file");

                    auto fbuf = file;
                    rel = fs::path{ games_rev.at(game) } / rel / file.filename().replace_extension(".gsc");

                    script = utils::file::read(file);
                    stack = utils::file::read(fbuf.replace_extension(".cgsc.stack"));
                }
                else
                {
                    if (file.extension() != ".gscbin")
                        throw std::runtime_error("expected .gscbin file");

                    rel = fs::path{ games_rev.at(game) } / rel / file.filename().replace_extension(".gsc");

                    auto data = utils::file::read(file);

                    asset asset;
                    asset.deserialize(data);

                    script = std::move(asset.bytecode);
                    stack = utils::zlib::decompress(asset.buffer, asset.len);
                }

                auto outasm = contexts[game]->disassembler().disassemble(script, stack);
                auto outast = contexts[game]->decompiler().decompile(*outasm);
                auto outsrc = contexts[game]->source().dump(*outast);

                utils::file::save(fs::path{ "decompiled" } / rel, outsrc);
                fmt::print("decompiled {}\n", rel.generic_string());
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{} at {}\n", e.what(), file.generic_string());
            }
        }

        auto parse_file(game game, fs::path file, fs::path rel) -> void
        {
            try
            {
                if (file.extension() != ".gsc")
                    throw std::runtime_error("expected .gsc file");

                rel = fs::path{ games_rev.at(game) } / rel / file.filename();

                auto data = utils::file::read(file);

                auto prog = contexts[game]->source().parse_program(file.string(), data);
                utils::file::save(fs::path{ "parsed" } / rel, contexts[game]->source().dump(*prog));
                fmt::print("parsed {}\n", rel.generic_string());
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{} at {}\n", e.what(), file.generic_string());
            }
        }

        auto rename_file(game game, fs::path file, fs::path rel) -> void
        {
            try
            {
                if (file.extension() != ".cgsc" && file.extension() != ".gsc" && file.extension() != ".csc" && file.extension() != ".gscbin" && file.extension() != ".cscbin")
                    return;

                auto ext = file.extension();
                auto zt = file.extension() == ".cgsc";

                if (game == game::iw9)
                {
                    return;
                }
                else
                {
                    auto name = file.filename().replace_extension().string();

                    if (utils::string::is_number(name))
                    {
                        name = contexts[game]->token_name(std::stoul(name));
                    }
                    else if (utils::string::is_hex_number(name))
                    {
                        name = contexts[game]->token_name(std::stoul(name, nullptr, 16));
                    }

                    if (!name.starts_with("_id_"))
                    {
                        rel = fs::path{ games_rev.at(game) } / rel / name;
                        rel.replace_extension(ext);
                    }
                    else
                    {
                        rel = fs::path{ games_rev.at(game) } / rel / file.filename();
                    }
                }

                auto data = utils::file::read(file);
                utils::file::save(fs::path{ "renamed" } / rel, data);
                fmt::print("renamed {} -> {}\n", file.filename().generic_string(), rel.generic_string());

                if (zt)
                {
                    auto stack = utils::file::read(file.replace_extension(".cgsc.stack"));
                    utils::file::save(fs::path{ "renamed" } / rel.replace_extension(".cgsc.stack"), stack);
                    fmt::print("renamed {} -> {}\n", file.filename().generic_string(), rel.generic_string());
                }
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{} at {}\n", e.what(), file.generic_string());
            }
        }

        std::unordered_map<std::string, std::vector<std::uint8_t>> files;

        auto fs_callback(std::string const& name) -> std::pair<buffer, std::vector<u8>>
        {
            // An include names a script the way the game does, without an
            // extension: `#include maps\mp\_utility;`. Prefer the source next
            // to it on disk, so including a file you have the source for works
            // without spelling out the extension, which the grammar rejects
            // anyway. Falls back to the literal path, which is how a compiled
            // script is picked up.
            if (!name.ends_with(".gsc") && !name.ends_with(".gsh") && !name.ends_with(".gscbin"))
            {
                for (auto const* ext : { ".gsc", ".gsh" })
                {
                    auto const path = fs::path{ name + ext };

                    if (fs::is_regular_file(path))
                    {
                        return { {}, utils::file::read(path) };
                    }
                }
            }

            auto data = utils::file::read(fs::path{ name });

            if (name.ends_with(".gscbin") || (!name.ends_with(".gsh") && !name.ends_with(".gsc")))
            {
                asset s;
                s.deserialize(data);
                auto stk = utils::zlib::decompress(s.buffer, s.len);
                auto res = files.insert({ name, std::move(s.bytecode) });

                if (res.second)
                {
                    return { {res.first->second.data(), res.first->second.size() }, std::move(stk) };
                }
            }
            else
            {
                return { {}, std::move(data) };
            }

            throw std::runtime_error("file read error");
        }

        auto init_iw3() -> void
        {
            if (!contexts.contains(game::iw3))
            {
                contexts[game::iw3] = std::make_unique<iw3::context>();
                contexts[game::iw3]->init(build::prod, fs_callback);
            }
        }

        auto init_iw4_xb() -> void
        {
            if (!contexts.contains(game::iw4xb))
            {
                contexts[game::iw4xb] = std::make_unique<iw4_xb::context>();
                contexts[game::iw4xb]->init(build::prod, fs_callback);
            }
        }

        auto init_iw5_leg() -> void
        {
            if (!contexts.contains(game::iw5leg))
            {
                contexts[game::iw5leg] = std::make_unique<iw5_leg::context>();
                contexts[game::iw5leg]->init(build::prod, fs_callback);
            }
        }

        auto init_iw5() -> void
        {
            if (!contexts.contains(game::iw5))
            {
                contexts[game::iw5] = std::make_unique<iw5_pc::context>();
                contexts[game::iw5]->init(build::prod, fs_callback);
            }
        }

        auto init_iw6_leg() -> void
        {
            if (!contexts.contains(game::iw6leg))
            {
                contexts[game::iw6leg] = std::make_unique<iw6_leg::context>();
                contexts[game::iw6leg]->init(build::prod, fs_callback);
            }
        }

        auto init_iw6() -> void
        {
            if (!contexts.contains(game::iw6))
            {
                contexts[game::iw6] = std::make_unique<iw6_pc::context>();
                contexts[game::iw6]->init(build::prod, fs_callback);
            }
        }

        auto init_iw6_ps4() -> void
        {
            if (!contexts.contains(game::iw6ps4))
            {
                contexts[game::iw6ps4] = std::make_unique<iw6_ps4::context>();
                contexts[game::iw6ps4]->init(build::prod, fs_callback);
            }
        }

        auto init_iw7() -> void
        {
            if (!contexts.contains(game::iw7))
            {
                contexts[game::iw7] = std::make_unique<iw7_pc::context>();
                contexts[game::iw7]->init(build::prod, fs_callback);
            }
        }

        auto init_iw7_ps4() -> void
        {
            if (!contexts.contains(game::iw7ps4))
            {
                contexts[game::iw7ps4] = std::make_unique<iw7_ps4::context>();
                contexts[game::iw7ps4]->init(build::prod, fs_callback);
            }
        }

        auto init_iw8() -> void
        {
            if (!contexts.contains(game::iw8))
            {
                contexts[game::iw8] = std::make_unique<iw8::context>();
                contexts[game::iw8]->init(build::prod, fs_callback);
            }
        }

        auto init_iw9() -> void
        {
            if (!contexts.contains(game::iw9))
            {
                contexts[game::iw9] = std::make_unique<iw9::context>();
                contexts[game::iw9]->init(build::prod, fs_callback);
            }
        }

        auto init_s1_leg() -> void
        {
            if (!contexts.contains(game::s1leg))
            {
                contexts[game::s1leg] = std::make_unique<s1_leg::context>();
                contexts[game::s1leg]->init(build::prod, fs_callback);
            }
        }

        auto init_s1() -> void
        {
            if (!contexts.contains(game::s1))
            {
                contexts[game::s1] = std::make_unique<s1_pc::context>();
                contexts[game::s1]->init(build::prod, fs_callback);
            }
        }

        auto init_s1_ps4() -> void
        {
            if (!contexts.contains(game::s1ps4))
            {
                contexts[game::s1ps4] = std::make_unique<s1_ps4::context>();
                contexts[game::s1ps4]->init(build::prod, fs_callback);
            }
        }

        auto init_s2() -> void
        {
            if (!contexts.contains(game::s2))
            {
                contexts[game::s2] = std::make_unique<s2_pc::context>();
                contexts[game::s2]->init(build::prod, fs_callback);
            }
        }

        auto init_s2_ps4() -> void
        {
            if (!contexts.contains(game::s2ps4))
            {
                contexts[game::s2ps4] = std::make_unique<s2_ps4::context>();
                contexts[game::s2ps4]->init(build::prod, fs_callback);
            }
        }

        auto init_s4() -> void
        {
            if (!contexts.contains(game::s4))
            {
                contexts[game::s4] = std::make_unique<s4::context>();
                contexts[game::s4]->init(build::prod, fs_callback);
            }
        }

        auto init_h1() -> void
        {
            if (!contexts.contains(game::h1))
            {
                contexts[game::h1] = std::make_unique<h1_pc::context>();
                contexts[game::h1]->init(build::prod, fs_callback);
            }
        }

        auto init_h1ps4() -> void
        {
            if (!contexts.contains(game::h1ps4))
            {
                contexts[game::h1ps4] = std::make_unique<h1_ps4::context>();
                contexts[game::h1ps4]->init(build::prod, fs_callback);
            }
        }

        auto init_h2() -> void
        {
            if (!contexts.contains(game::h2))
            {
                contexts[game::h2] = std::make_unique<h2_pc::context>();
                contexts[game::h2]->init(build::prod, fs_callback);
            }
        }

        auto init_h2ps4() -> void
        {
            if (!contexts.contains(game::h2ps4))
            {
                contexts[game::h2ps4] = std::make_unique<h2_ps4::context>();
                contexts[game::h2ps4]->init(build::prod, fs_callback);
            }
        }

        auto init(game game) -> void
        {
            funcs[mode::compile] = compile_file;
            funcs[mode::decompile] = decompile_file;
            funcs[mode::check] = check_file;

            switch (game)
            {
            case game::iw3:
                init_iw3();
                break;
            case game::iw4xb:
                init_iw4_xb();
                break;
            case game::iw5:
                init_iw5();
                break;
            case game::iw5leg:
                init_iw5_leg();
                break;
            case game::iw6:
                init_iw6();
                break;
            case game::iw6leg:
                init_iw6_leg();
                break;
            case game::iw6ps4:
                init_iw6_ps4();
                break;
            case game::iw7:
                init_iw7();
                break;
            case game::iw7ps4:
                init_iw7_ps4();
                break;
            case game::iw8:
                init_iw8();
                break;
            case game::iw9:
                init_iw9();
                break;
            case game::s1:
                init_s1();
                break;
            case game::s1leg:
                init_s1_leg();
                break;
            case game::s1ps4:
                init_s1_ps4();
                break;
            case game::s2:
                init_s2();
                break;
            case game::s2ps4:
                init_s2_ps4();
                break;
            case game::s4:
                init_s4();
                break;
            case game::h1:
                init_h1();
                break;
            case game::h1ps4:
                init_h1ps4();
                break;
            case game::h2:
                init_h2();
                break;
            case game::h2ps4:
                init_h2ps4();
                break;
            default:
                break;
            }
        }
    }

    namespace arc
    {
        std::map<game, context::ptr> contexts;
        std::map<mode, std::function<void(game game, fs::path const& file, fs::path rel)>> funcs;

        void assemble_file(game game, fs::path const& file, fs::path rel)
        {
            try
            {
                if (file.extension() != ".gscasm" && file.extension() != ".cscasm")
                    throw std::runtime_error("expected .gscasm or .cscasm file");

                rel = fs::path{ games_rev.at(game) } / rel / file.filename().replace_extension((file.extension() == ".gscasm" ? ".gsc" : ".csc"));

                auto& assembler = contexts[game]->assembler();

                auto data = utils::file::read(file);
                assembler.assemble(file.string(), data);

                utils::file::save(fs::path{ "assembled" } / rel, assembler.output());
                fmt::print("assembled {}\n", rel.generic_string());
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{} at {}\n", e.what(), file.generic_string());
            }
        }

        void disassemble_file(game game, fs::path const& file, fs::path rel)
        {
            try
            {
                if (file.extension() != ".gsc" && file.extension() != ".csc")
                    throw std::runtime_error("expected .gsc or .csc file");

                rel = fs::path{ games_rev.at(game) } / rel / file.filename().replace_extension((file.extension() == ".gsc" ? ".gscasm" : ".cscasm"));

                auto& disassembler = contexts[game]->disassembler();

                auto data = utils::file::read(file.string());
                disassembler.disassemble(file.string(), data);

                utils::file::save(fs::path{ "disassembled" } / rel, disassembler.output_raw());
                fmt::print("disassembled {}\n", rel.generic_string());
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{} at {}\n", e.what(), file.generic_string());
            }
        }

        void compile_file(game game, fs::path const& file, fs::path rel)
        {
            try
            {
                if (file.extension() != ".gsc" && file.extension() != ".csc")
                    throw std::runtime_error("expected .gsc or .csc file");

                rel = fs::path{ games_rev.at(game) } / rel / file.filename();

                auto& assembler = contexts[game]->assembler();
                auto& compiler = contexts[game]->compiler();

                auto data = utils::file::read(file);

                compiler.compile(file.string(), data);

                auto assembly = compiler.output();

                assembler.assemble(file.string(), assembly);

                utils::file::save(fs::path{ "compiled" } / rel, assembler.output());
                fmt::print("compiled {}\n", rel.generic_string());
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{} at {}\n", e.what(), file.generic_string());
            }
        }

        void decompile_file(game game, fs::path const& file, fs::path rel)
        {
            try
            {
                if (file.extension() != ".gsc" && file.extension() != ".csc")
                    throw std::runtime_error("expected .gsc or .csc file");

                rel = fs::path{ games_rev.at(game) } / rel / file.filename();

                auto& disassembler = contexts[game]->disassembler();
                auto& decompiler = contexts[game]->decompiler();

                auto data = utils::file::read(file);

                disassembler.disassemble(file.string(), data);

                auto output = disassembler.output();

                decompiler.decompile(file.string(), output);

                utils::file::save(fs::path{ "decompiled" } / rel, decompiler.output());
                fmt::print("decompiled {}\n", rel.generic_string());
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{} at {}\n", e.what(), file.generic_string());
            }
        }

        void parse_file(game, fs::path const&, fs::path)
        {
            std::cerr << fmt::format("not implemented for t6\n");
        }

        void rename_file(game, fs::path const&, fs::path)
        {
            std::cerr << fmt::format("not implemented for t6\n");
        }

        auto init_t6() -> void
        {
            if (!contexts.contains(game::t6))
            {
                contexts[game::t6] = std::make_unique<t6::context>(t6::platform::pc);
                contexts[game::t6]->init(build::prod, utils::file::read);
            }

            if (!contexts.contains(game::t6leg))
            {
                // PS3 / Xbox 360 / Wii U: same opcodes, big-endian output.
                contexts[game::t6leg] = std::make_unique<t6::context>(t6::platform::legacy);
                contexts[game::t6leg]->init(build::prod, utils::file::read);
            }

            if (!contexts.contains(game::t6ps4))
            {
                // PS4: shifted opcodes and 64 bit operand slots.
                contexts[game::t6ps4] = std::make_unique<t6::context>(t6::platform::ps4);
                contexts[game::t6ps4]->init(build::prod, utils::file::read);
            }
        }

        auto init(game game) -> void
        {
            funcs[mode::compile] = compile_file;
            funcs[mode::decompile] = decompile_file;

            switch (game)
            {
            case game::t6:
            case game::t6leg:
            case game::t6ps4:
                init_t6();
                break;
            default:
                break;
            }
        }
    }

    namespace obj
    {
        using xsk::obj::family;
        using xsk::obj::platform;

        struct target
        {
            family family;
            platform platform;
            xsk::obj::vm compile_vm; // revision used when compiling, see note below
        };

        // Decompiling reads the revision from the script's own magic, so the
        // compile_vm below only matters for `comp`: a source file carries no
        // revision, so each target pins the newest revision that platform ships.
        std::map<game, target> const targets =
        {
            { game::t7ps4,    { family::t7,  platform::playstation, xsk::obj::vm::t7_ps4 } },
            { game::t8,       { family::t8,  platform::pc,          xsk::obj::vm::t8_36 } },
            { game::t8ps4,    { family::t8,  platform::playstation, xsk::obj::vm::t8_36 } },
            { game::t9,       { family::t9,  platform::pc,          xsk::obj::vm::t9_38 } },
            { game::t9ps4,    { family::t9,  platform::playstation, xsk::obj::vm::t9_38 } },
            { game::t10,      { family::t10, platform::pc_alpha,    xsk::obj::vm::t10_06 } },
            // 0x...478a, not the newer 0x...478b: 8a is the revision the
            // shipped game accepts. Decompiling still reads whichever revision
            // the script's own magic names.
            { game::jup,      { family::jup, platform::pc,          xsk::obj::vm::jup_8a } },
        };

        std::map<mode, std::function<void(game game, fs::path const& file, fs::path rel)>> funcs;

        auto not_implemented(game, fs::path const& file, fs::path) -> void
        {
            std::cerr << fmt::format("not yet implemented at {}\n", file.generic_string());
        }

        auto decompile_file(game game, fs::path const& file, fs::path rel) -> void
        {
            try
            {
                if (file.extension() != ".gscc" && file.extension() != ".cscc"
                    && file.extension() != ".gsc" && file.extension() != ".csc")
                    throw std::runtime_error("expected .gscc, .cscc, .gsc or .csc file");

                auto const& tgt = targets.at(game);

                rel = fs::path{ games_rev.at(game) } / rel / file.filename().replace_extension(".gsc");

                auto data = utils::file::read(file);
                auto vm = xsk::obj::detect_vm(data);
                auto ctx = xsk::obj::create_context(tgt.family, tgt.platform, vm);

                auto outsrc = xsk::obj::decompile(*ctx, data);

                utils::file::save(fs::path{ "decompiled" } / rel, outsrc);
                fmt::print("decompiled {}\n", rel.generic_string());
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{} at {}\n", e.what(), file.generic_string());
            }
        }

        auto compile_file(game game, fs::path const& file, fs::path rel) -> void
        {
            try
            {
                auto const project = fs::is_directory(file);

                if (!project && file.extension() != ".gsc" && file.extension() != ".csc")
                    throw std::runtime_error("expected .gsc or .csc file, or a directory to build as one project");

                auto const& tgt = targets.at(game);

                // A project always emits a single script named "script", which
                // is the name injectors expect; a single file keeps its own
                // name and kind.
                rel = project
                    ? fs::path{ games_rev.at(game) } / rel / "script.gscc"
                    : fs::path{ games_rev.at(game) } / rel
                        / file.filename().replace_extension(file.extension() == ".gsc" ? ".gscc" : ".cscc");

                auto ctx = xsk::obj::create_context(tgt.family, tgt.platform, tgt.compile_vm);

                // The compiler reads the sources itself — it needs the path, not
                // the bytes, so a project directory works the same as a file.
                auto outbin = xsk::obj::compile(*ctx, file.string(), {});

                utils::file::save(fs::path{ "compiled" } / rel, outbin);
                fmt::print("compiled {}\n", rel.generic_string());
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{} at {}\n", e.what(), file.generic_string());
            }
        }

        // acts has no parse-only entry point, so `check` compiles and throws
        // the bytes away. Diagnostics are identical either way.
        auto check_file(game game, fs::path const& file, fs::path) -> void
        {
            try
            {
                auto const& tgt = targets.at(game);
                auto ctx = xsk::obj::create_context(tgt.family, tgt.platform, tgt.compile_vm);

                xsk::obj::compile(*ctx, file.string(), {});

                fmt::print("ok {}\n", file.generic_string());
            }
            catch (std::exception const& e)
            {
                std::cerr << fmt::format("{}\n", e.what());
            }
        }

        auto init(game) -> void
        {
            funcs[mode::compile] = compile_file;
            funcs[mode::decompile] = decompile_file;
            funcs[mode::check] = check_file;
        }
    }

    auto execute(mode mode, game game, fs::path const& path) -> void
    {
        if (game == game::t4 || game == game::t5)
        {
            std::cerr << fmt::format("not yet implemented: {}\n", games_rev.at(game));
            return;
        }

        gsc::init(game);
        arc::init(game);
        obj::init(game);

        // Compiling a directory on a GSC OBJ game builds it as one project:
        // the whole tree goes to the compiler at once, which links the sources
        // together so they do not need to #include each other. Errors keep the
        // file and line they came from. Every other mode, and every other
        // backend, still walks the directory file by file.
        if (fs::is_directory(path) && (mode == mode::compile || mode == mode::check) && game > game::t6)
        {
            obj::funcs[mode](game, fs::path{ path.generic_string(), fs::path::format::generic_format }, fs::path{});
        }
        else if (fs::is_directory(path) && game < game::t6 && (mode == mode::compile || mode == mode::check))
        {
            if (mode == mode::check)
                gsc::check_project(game, path);
            else
                gsc::compile_project(game, path, fs::path{});
        }
        else if (fs::is_directory(path))
        {
            for (auto const& entry : fs::recursive_directory_iterator(path))
            {
                if (entry.is_regular_file() && entry.path().extension() != ".stack")
                {
                    auto rel = fs::relative(entry, path).remove_filename();

                    if (game < game::t6)
                        gsc::funcs[mode](game, entry.path().generic_string(), rel);
                    else if (game == game::t6 || game == game::t6leg || game == game::t6ps4)
                        arc::funcs[mode](game, fs::path{ entry.path().generic_string(), fs::path::format::generic_format }, rel);
                    else
                        obj::funcs[mode](game, fs::path{ entry.path().generic_string(), fs::path::format::generic_format }, rel);
                }
            }
        }
        else if (fs::is_regular_file(path))
        {
            if (game < game::t6)
                gsc::funcs[mode](game, path, fs::path{});
            else if (game == game::t6 || game == game::t6leg || game == game::t6ps4)
                arc::funcs[mode](game, fs::path(path, fs::path::format::generic_format), fs::path{});
            else
                obj::funcs[mode](game, fs::path(path, fs::path::format::generic_format), fs::path{});
        }
        else
        {
            std::cerr << fmt::format("bad path '{}'\n", path.generic_string());
        }
    }

    // Resolves <game> <system> to a target. PS3 and Xbox 360 share a target:
    // their opcode tables are byte-identical, and their builtin ids agree
    // except for three iw6 entries that are reverse-engineering artifacts (a
    // plural typo and an unnamed placeholder), so one table serves both. The
    // ps variant is used because its token table is by far the more complete.
    std::map<std::pair<std::string, std::string>, game> const systems =
    {
        { { "iw3", "leg" },   game::iw3 },
        { { "t4", "pc" },     game::t4    }, { { "t4", "leg" },   game::t4    },
        { { "t5", "pc" },     game::t5    }, { { "t5", "leg" },   game::t5    },
        { { "iw4", "leg" },   game::iw4xb },

        { { "iw5", "pc" },    game::iw5   },
        { { "iw5", "leg" },   game::iw5leg },

        { { "iw6", "pc" },    game::iw6   },
        { { "iw6", "leg" },   game::iw6leg },
        { { "iw6", "ps4" },   game::iw6ps4 },

        { { "s1", "pc" },     game::s1    },
        { { "s1", "leg" },   game::s1leg },
        { { "s1", "ps4" },    game::s1ps4 },

        { { "iw7", "pc" },    game::iw7   },
        { { "iw7", "ps4" },   game::iw7ps4 },
        { { "iw8", "pc" },    game::iw8   }, { { "iw8", "ps4" },   game::iw8   },
        { { "iw9", "pc" },    game::iw9   }, { { "iw9", "ps4" },   game::iw9   },
        { { "s2", "pc" },     game::s2    },
        { { "s2", "ps4" },    game::s2ps4 },
        { { "s4", "pc" },     game::s4    }, { { "s4", "ps4" },    game::s4    },
        { { "h1", "pc" },     game::h1    },
        { { "h1", "ps4" },    game::h1ps4 },
        { { "h2", "pc" },     game::h2    },
        { { "h2", "ps4" },    game::h2ps4 },
        { { "t6", "pc" },     game::t6    }, { { "t6", "leg" },   game::t6leg },
        { { "t6", "ps4" },    game::t6ps4 },

        { { "t7", "ps4" },    game::t7ps4 },
        { { "t8", "pc" },     game::t8    },
        { { "t8", "ps4" },    game::t8ps4 },
        { { "t9", "pc" },     game::t9    },
        { { "t9", "ps4" },    game::t9ps4 },
        { { "t10", "ps4" },   game::t10   },
        { { "jup", "pc" },    game::jup   }, { { "jup", "ps4" },   game::jup   },
    };

    // Accepted spellings for each console.
    std::unordered_map<std::string, std::string> const system_alias =
    {
        { "pc", "pc" },
        // PS3 and Xbox 360 share one target - identical opcodes and builtin
        // ids - so ps3, 360 and leg are three names for it.
        { "ps3", "leg" }, { "360", "leg" }, { "leg", "leg" },
        { "ps4", "ps4" },
        { "wiiu", "leg" }, { "wii", "leg" },
    };

    auto parse_flags(u32 argc, char** argv, game& game, mode& mode, fs::path& path) -> bool
    {
        if (argc != 4 && argc != 5) return false;

        auto arg = utils::string::to_lower(argv[1]);

        if (arg.at(0) == 'z')
        {
            arg.erase(arg.begin());
            gsc::zonetool = true;
        }

        auto const it = modes.find(arg);

        if (it != modes.end())
        {
            mode = it->second;
        }
        else
        {
            std::cout << "[ERROR] unknown mode '" << argv[1] << "'.\n\n";
            return false;
        }

        arg = utils::string::to_lower(argv[2]);

        if (argc == 4)
        {
            // <mode> <game> <path>: allowed when every system this game offers
            // resolves to the same target, i.e. the opcodes do not vary by
            // platform, so naming one would carry no information.
            auto only = game::_;
            auto count = 0;

            for (auto const& [key, value] : systems)
            {
                if (key.first != arg)
                    continue;

                if (only == game::_ || only == value)
                {
                    only = value;
                    continue;
                }

                count++;
            }

            if (only == game::_)
            {
                std::cout << "[ERROR] unknown game '" << argv[2] << "'.\n\n";
                return false;
            }

            if (count)
            {
                std::cout << "[ERROR] game '" << argv[2] << "' needs a system, its platforms differ.\n\n";
                return false;
            }

            game = only;
            path = fs::path{ utils::string::fordslash(argv[3]), fs::path::format::generic_format };
            return true;
        }

        auto sys = utils::string::to_lower(argv[3]);
        auto const alias = system_alias.find(sys);

        if (alias == system_alias.end())
        {
            std::cout << "[ERROR] unknown system '" << argv[3] << "'.\n\n";
            return false;
        }

        auto const target = systems.find({ arg, alias->second });

        if (target == systems.end())
        {
            std::cout << "[ERROR] game '" << argv[2] << "' has no '" << alias->second << "' target.\n\n";
            return false;
        }

        game = target->second;
        path = fs::path{ utils::string::fordslash(argv[4]), fs::path::format::generic_format };

        return true;
    }

    auto print_usage() -> void
    {
        // id, title, and whether the game shipped on pc / ps3-360-wiiu / ps4.
        // Release data is separate from support: a blank cell means the game
        // never came out on that platform, a cross means it did and we cannot
        // target it.
        struct entry { char const* id; char const* title; bool pc, leg, ps4; bool todo; };

        static constexpr std::array<entry, 20> catalog =
        {{
            { "iw3",   "Call of Duty 4",         true , true , false , false },
            { "t4",    "World at War",           true , true , false , true  },
            { "iw4",   "Modern Warfare 2",       true , true , false , false },
            { "t5",    "Black Ops",              true , true , true  , true  },
            { "iw5",   "Modern Warfare 3",       true , true , false , false },
            { "t6",    "Black Ops 2",            true , true , true  , false },
            { "iw6",   "Ghosts",                 true , true , true  , false },
            { "s1",    "Advanced Warfare",       true , true , true  , false },
            { "t7",    "Black Ops 3",            true , true , true  , false },
            { "iw7",   "Infinite Warfare",       true , false, true  , false },
            { "h1",    "MW Remastered",          true , false, true  , false },
            { "s2",    "World War II",           true , false, true  , false },
            { "t8",    "Black Ops 4",            true , false, true  , false },
            { "iw8",   "Modern Warfare 2019",    true , false, true  , false },
            { "h2",    "MW2 Remastered",         true , false, true  , false },
            { "t9",    "Black Ops Cold War",     true , false, true  , false },
            { "s4",    "Vanguard",               true , false, true  , false },
            { "iw9",   "Modern Warfare II",      true , false, true  , false },
            { "jup",   "Modern Warfare III",     true , false, true  , false },
            { "t10",   "Black Ops 6 alpha",      true , false, true  , false },
        }};

        // 3 bytes each but 2 columns wide, so pad by hand.
        constexpr char const* yes   = "\xE2\x9C\x85";
        constexpr char const* no    = "\xE2\x9D\x8C";
        constexpr char const* never = "  ";

        std::cout << "usage:  gsc-tool <mode> <game> <system> <path>\n\n";
        std::cout << "  mode    comp  decomp  check\n";
        std::cout << "  system  pc  ps3  360  wiiu  leg  ps4\n";
        std::cout << "  path    a file, or a folder built as one project\n\n";
        std::cout << "  game                           pc     leg    ps4\n";

        for (auto const& e : catalog)
        {
            auto mark = [&](bool released, char const* sys)
            {
                if (!released) return never;
                if (e.todo) return no;
                return systems.count({ e.id, sys }) ? yes : no;
            };

            std::cout << fmt::format("  {:<6} {:<24}", e.id, e.title)
                      << mark(e.pc,  "pc")  << "     "
                      << mark(e.leg, "leg") << "     "
                      << mark(e.ps4, "ps4") << "\n";
        }

        std::cin.get();
    }

    auto main(u32 argc, char** argv) -> void
    {
        auto path = fs::path{};
        auto mode = mode::_;
        auto game = game::_;

        if (!parse_flags(argc, argv, game, mode, path))
        {
            return print_usage();
        }

        execute(mode, game, path);
    }
}

#ifdef _WIN32
// Declared rather than including <windows.h>, whose macros collide with the
// token names in gsc/misc/directive.hpp. Used to make the tick/cross render.
extern "C" __declspec(dllimport) int __stdcall SetConsoleOutputCP(unsigned int);
#endif

int main(int argc, char** argv)
{
#ifdef _WIN32
    SetConsoleOutputCP(65001);
#endif
    xsk::main(argc, argv);
    return 0;
}