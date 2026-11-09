@echo off
rem One command to get from a fresh checkout to a buildable solution:
rem   1. submodules (fmt, zlib)
rem   2. deps/acts -> acts-common.lib + acts-common.dll via cmake
rem   3. build/gsc-tool.sln via premake
rem
rem Pass "rebuild" to force acts to build again; it is skipped when its DLL
rem already exists, since it is by far the slowest step.

git submodule update --init --recursive

call "%~dp0tools\windows\build-acts.bat" %1
if errorlevel 1 (
    echo.
    echo Failed to build deps\acts. gsc-tool cannot link without it.
    echo Set ACTS_SDK to a prebuilt SDK to use one instead.
    exit /b 1
)

tools\windows\premake5.exe %* vs2022
