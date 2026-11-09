#!/bin/sh
# Round-trip every supported game through comp and decomp and tabulate results.
#
# For each game it runs four checks:
#   comp1  - compile a single source file
#   comp*  - compile a directory as one project (multi-file, no #include)
#   decomp - decompile what comp* produced
#   err    - a deliberate syntax error in the SECOND file reports that file's
#            own name and line, not an offset into the combined buffer
#
# usage: tools/test-all.sh [path-to-gsc-tool.exe]

set -u

# Resolve to an absolute path before cd'ing into the work dir, otherwise a
# relative default silently stops resolving and every check "fails".
GT=${1:-build/bin/x64/release/gsc-tool.exe}
case $GT in /*|?:*) ;; *) GT="$(pwd)/$GT" ;; esac
[ -x "$GT" ] || { echo "gsc-tool not found at $GT" >&2; exit 1; }

WORK=$(mktemp -d 2>/dev/null || echo "./.test-all")
mkdir -p "$WORK"
cd "$WORK" || exit 1

# Games on the legacy xsk::gsc backend (old-style GSC syntax).
LEGACY="iw4xb iw5 iw5ps iw5xb iw6 iw6ps iw6xb iw6ps4 s1 s1ps s1xb s1ps4 iw7 iw7ps4 iw8 iw9 s2 s2ps4 s4 h1 h1ps4 h2 h2ps4"
# Treyarch T6, xsk::arc backend.
ARC="t6"
# GSC OBJ family, acts backend (modern `function` + #namespace syntax).
OBJ="t7ps4 t8 t8ps4 t9 t9ps4 t10 jup"

# --- sources -----------------------------------------------------------------

mk_legacy() {
    d=$1; mkdir -p "$d"
    cat > "$d/solo.gsc" <<'EOF'
solo()
{
    iprintln( "solo" );
}
EOF
    cat > "$d/aaa_main.gsc" <<'EOF'
main()
{
    helper( "hello" );
}
EOF
    cat > "$d/bbb_util.gsc" <<'EOF'
helper( msg )
{
    iprintln( msg );
}
EOF
}

mk_obj() {
    d=$1; mkdir -p "$d"
    cat > "$d/solo.gsc" <<'EOF'
#namespace nf_solo;

function solo()
{
    iprintln( "solo" );
}
EOF
    cat > "$d/aaa_main.gsc" <<'EOF'
#namespace nf_main;

function entry()
{
    nf_util::helper( "hello" );
}
EOF
    cat > "$d/bbb_util.gsc" <<'EOF'
#namespace nf_util;

function helper( msg )
{
    iprintln( msg );
}
EOF
}

# Overwrite the second file with a syntax error on its line 4.
break_second() {
    cat > "$1/bbb_util.gsc" <<'EOF'
broken_marker()
{
    ok();
    bad( ;
}
EOF
}

break_second_obj() {
    cat > "$1/bbb_util.gsc" <<'EOF'
#namespace nf_util;
function helper( msg )
{
    bad( ;
}
EOF
}

mk_legacy good_legacy
mk_obj good_obj

# --- helpers -----------------------------------------------------------------

pass() { printf '  ok  '; }
fail() { printf ' FAIL '; }

# Runs a command; passes if it exits 0 and prints no [ERROR].
run_ok() {
    out=$("$@" 2>&1)
    if [ $? -eq 0 ] && ! printf '%s' "$out" | grep -q 'ERROR\|error'; then
        pass; return 0
    fi
    fail; return 1
}

check_game() {
    game=$1; src=$2; ext=$3; brk=$4

    printf '%-10s' "$game"

    rm -rf compiled decompiled

    # comp1: single file
    run_ok "$GT" comp "$game" "$src/aaa_main.gsc" >/dev/null 2>&1 \
        && c1=ok || c1=fail
    [ "$c1" = ok ] && printf '  ok  ' || printf ' FAIL '

    # comp*: whole directory as one project
    rm -rf compiled
    rm -rf projsrc; cp -r "$src" projsrc; rm -f projsrc/solo.gsc
    if "$GT" comp "$game" projsrc >/dev/null 2>&1 && [ -f "compiled/$game/script.$ext" ]; then
        printf '  ok  '; proj=ok
    else
        printf ' FAIL '; proj=fail
    fi

    # decomp: round-trip the project output
    if [ "$proj" = ok ]; then
        if "$GT" decomp "$game" "compiled/$game/script.$ext" >/dev/null 2>&1 \
           && find decompiled -name '*.gsc' 2>/dev/null | grep -q .; then
            printf '  ok  '
        else
            printf ' FAIL '
        fi
    else
        printf '  --  '
    fi

    # err: does a fault in the 2nd file name that file and its own line 4?
    rm -rf brk; cp -r "$src" brk; rm -f brk/solo.gsc; $brk brk
    msg=$("$GT" comp "$game" brk 2>&1 | grep -i 'error' | head -1)
    if printf '%s' "$msg" | grep -q 'bbb_util.gsc'; then
        if printf '%s' "$msg" | grep -qE 'bbb_util\.gsc[#:]4'; then
            printf '  ok  '
        else
            printf ' line?'
        fi
    else
        printf ' FAIL '
    fi

    printf '  %s\n' "$(printf '%s' "$msg" | cut -c1-58)"
}

# --- run ---------------------------------------------------------------------

printf '%s\n' "gsc-tool: $GT"
printf '\n%-10s%-6s%-6s%-6s%-6s  %s\n' GAME comp1 'comp*' decomp err 'first error reported'
printf '%s\n' "------------------------------------------------------------------------"

for g in $LEGACY;  do check_game "$g" good_legacy gscbin break_second;      done
for g in $ARC;     do check_game "$g" good_legacy gscbin break_second;      done
for g in $OBJ;     do check_game "$g" good_obj    gscc   break_second_obj;  done

printf '\nwork dir: %s\n' "$(pwd)"
