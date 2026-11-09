@echo off
setlocal enabledelayedexpansion
rem Build deps/acts into an import library + DLL for gsc-tool to link against.
rem acts uses cmake, so this runs it once and leaves the result in
rem deps/acts/build/bin/Release, which premake5.lua points at.
rem
rem Skipped automatically when the DLL is already newer than the acts sources,
rem so a normal rebuild does not pay for it.

set ROOT=%~dp0..\..
set ACTS=%ROOT%\deps\acts
set OUT=%ACTS%\build\bin\Release

if not exist "%ACTS%\CMakeLists.txt" (
    echo [acts] deps\acts is missing. Set ACTS_SDK to a prebuilt SDK instead.
    exit /b 1
)

rem Locate cmake: PATH first, then the copy Visual Studio ships.
set CMAKE=cmake
where /q cmake
if errorlevel 1 (
    for /f "usebackq delims=" %%i in (`"%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe" -latest -products * -requires Microsoft.Component.MSBuild -property installationPath`) do (
        set CMAKE=%%i\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe
    )
)

if not exist "%CMAKE%" if /i not "%CMAKE%"=="cmake" (
    echo [acts] cmake not found. Install it or set ACTS_SDK to a prebuilt SDK.
    exit /b 1
)

if "%1"=="rebuild" (
    echo [acts] forcing a rebuild
) else if exist "%OUT%\acts-common.dll" (
    echo [acts] acts-common.dll present, skipping. Pass "rebuild" to force.
    exit /b 0
)

echo [acts] configuring...
"%CMAKE%" -B "%ACTS%\build" -S "%ACTS%" -DNO_QT_BUILD=ON -DNO_OPEN_CL_BUILD=ON
if errorlevel 1 exit /b 1

echo [acts] building AtianCodTools (this takes a while the first time)...
"%CMAKE%" --build "%ACTS%\build" --config Release --target AtianCodTools
if errorlevel 1 exit /b 1

if not exist "%OUT%\acts-common.dll" (
    echo [acts] build reported success but acts-common.dll is missing.
    exit /b 1
)

echo [acts] done: %OUT%\acts-common.dll
exit /b 0
