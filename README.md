# ATV Quad Power Racing 2 — Xbox Recompilation / D3D11 Bring-up

This repository contains the Windows x64 host project and the `xboxrecomp-main` runtime source used for the current ATV Quad Power Racing 2 recompilation bring-up. It is an experimental project toward a working native decompilation/recompilation; it is **not** a claim that the full game is complete, fully native, or free of rendering/compatibility issues.

The current share snapshot is the source set used for the D3D11 Records-screen investigation on 2026-10-31. It includes an opt-in renderer trace (`RECOMP_D3D_PANEL_TRACE`) that records textured draws, texture metadata and decoded-cache hashes, bound SRV status, blend/depth/alpha state, and combiner words.

## Contents

- `game_project/` — project CMake definition, host entry point, compatibility and manually supplied function sources, generated recompilation code, and an intentionally empty `game/` directory with an asset note.
- `game_project/src/recomp/gen/` — generated C translation units and headers required directly by this build. These are included so a recipient can compile without repeating the recompilation pipeline.
- `xboxrecomp-main/` — vendored toolkit source used by the tested build, including the matching D3D11 backend source and its license/notices.
- `install_build.ps1` — portable Windows configure/build helper; it resolves the toolkit path relative to this repository.
- `run_records_panel_trace.bat` — runs the built diagnostic with the D3D11 panel trace enabled and logs to `logs/`.

The repository intentionally omits the original XBE, game archives/media, copyrighted runtime assets, local executables/PDBs, and local build directories. It also omits the optional toolkit conformance `.xbe` fixture. No game data is needed to compile; a complete legally obtained game directory is needed to run the host.

## Requirements

- Windows 10/11, x64.
- CMake 3.20 or newer.
- Visual Studio 2022 or Visual Studio 2022 Build Tools, with **Desktop development with C++** and a Windows SDK installed.
- Enough free space for generated compiler objects and the build tree; the source snapshot itself is approximately 121 MB uncompressed.

The setup script configures and builds the project; it does **not** download or install CMake, Visual Studio, or the Windows SDK.

## Build

Extract/clone the repository, open PowerShell in its root, and run:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .\install_build.ps1
```

By default the script configures an x64 Visual Studio 2022 `RelWithDebInfo` build and creates:

```text
build/RelWithDebInfo/my_xbox_game.exe
```

Choose another supported configuration or build directory if needed:

```powershell
.\install_build.ps1 -Configuration Release -BuildDirectory .\build-release
```

The script passes the repository's bundled `xboxrecomp-main/` path to CMake. It checks that CMake, the project/toolkit CMake files, and the generated recomp sources are present, then configures and builds the `my_xbox_game` target. If CMake reports a missing compiler or Windows SDK, install the VS 2022 C++ workload and SDK and rerun the script.

## Run the diagnostic build

The executable loads `game/default.xbe` and redirects game file I/O to the `game/` directory. Before launch, put your **own legally obtained** game files into `game_project/game/` with the expected directory layout, including `default.xbe` and the game's data files. This repository does not contain those files.

After a successful default build, run:

```text
run_records_panel_trace.bat
```

The launcher selects the direct D3D11 backend, keeps normal depth and combiner behavior enabled, and sets `RECOMP_D3D_PANEL_TRACE=1`. Navigate to Track Select, leave the Records panels visible, then close the game normally. The log is written to `logs/records_panel_trace.log`. The trace is read-only and bounded (up to 4,096 matching entries); disabling the environment flag leaves the additional trace silent.

## Current diagnostic finding and caveat

In the 2026-10-31 run, the trace reached frame 984 and emitted 4,096 entries before reaching its cap. Three repeated small batches in the same screen region used texture `0x8251C000` (512×128, format `0x0F`, decoded-cache hash `4053DB42B2ADE0EE`) paired in a subsequent draw with `0x82505000` (64×64, format `0x0C`, hash `4AE8980CC853DEE3`). Both reported valid shader-resource views in those samples. These are **candidates**, not a confirmed identification of the white Records panels or proof that their contents/rendering are correct.

The initial spatial filter accepted draws that merely overlapped the left-side area, so full-screen/background draws also consumed trace entries. A more selective follow-up capture may be needed to establish the exact panel-to-texture mapping and diagnose the white appearance. The original local run log is not included in this repository.

## Troubleshooting

- **`cmake` is not found:** install CMake 3.20+ and ensure it is on `PATH`.
- **Visual Studio generator/compiler/SDK error:** install VS 2022 Build Tools with the C++ desktop workload and Windows SDK.
- **Executable builds but will not start the game:** confirm that the recipient-supplied `game_project/game/default.xbe` and required assets exist. Compilation alone does not validate runtime assets.
- **No `[D3D11-PANEL]` lines:** use `run_records_panel_trace.bat`, confirm that the active build includes the vendored `nv2a_backend_d3d11.c`, and reach a supported 4:3 render surface.
- **Trace cap reached before the relevant scene:** the current cap is 4,096 entries; use a focused follow-up run rather than inferring panel ownership from full-screen draws.

## Provenance and rights

The generated recompilation sources are included because this CMake target compiles them directly; regenerating them requires the original game binary and recompilation workflow. The game binary and game assets are not included. The vendored toolkit's license/notices are in `xboxrecomp-main/`. This repository does not grant rights to the game or any third-party material; check the relevant rights and licenses before reuse or redistribution.

## Project intent

The parent project goal is a working native decompilation/recompilation of ATV Quad Power Racing 2 using `xboxrecomp`. The current snapshot is an intermediate Windows D3D11 backend diagnostic build, not a release build or a finished game port.
