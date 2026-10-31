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

## Records-panel format bug and fix (2026-10-31)

The earlier broad trace produced candidate overlay textures `0x8251C000` (a numbered atlas) and `0x82505000` (a small mask), but neither alone explained the white cards. A focused A/B run identified six valid 256×128 Records render-target images (`0x82721000`, `0x82741000`, `0x82761000`, `0x82781000`, `0x827A1000`, and `0x827C1000`). Bypassing only the generated combiner made the card artwork visible while raw-texture and depth overrides remained disabled, isolating the issue to combiner handling rather than missing source pixels or depth state.

The root cause was an alpha-only format misclassification in `xboxrecomp-main/src/nv2a/nv2a_backend_d3d11.c`: NV097 color-size `0x06` is full-color `A8R8G8B8`, not alpha-only. Alpha-only `A8` is `0x19`. The generated combiner intentionally forces sampled RGB to white for alpha-only textures, which erased the color of these full-color render targets. The D3D11 backend now checks `NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A8` (`0x19`) and retains normal combiner rendering. The corrected Windows target compiled successfully, and the user confirmed the Records panels were visible during milestone validation.

This is a targeted rendering fix, not a claim that the full game is complete. Other texture/rendering glitches and the reported in-race stability issue remain open. Run-specific logs, screenshots, and user game data are not included in this repository.

## Development status

### Completed and verified in this snapshot

- Established a Windows x64 CMake build for the generated ATV Quad Power Racing 2 recompilation project and bundled the required `xboxrecomp` source.
- Added `install_build.ps1` and `run_records_panel_trace.bat` for repeatable setup/build and a bounded D3D11 diagnostic run.
- Fixed the Track Select Records panels rendering white. The backend now treats NV097 format `0x06` as full-color A8R8G8B8 and reserves the alpha-only RGB override for A8 (`0x19`). The targeted build succeeded and the user verified the panels reappeared.
- Recorded source provenance, prerequisites, game-file requirements, and third-party rights guidance in this README.

### Current investigation (not yet promoted into this share snapshot)

The working tree outside this packaged snapshot has additional F12-gated traces for race-scene actor batches, combiner stages, texture/state signatures, vertex fog and alpha. These are diagnostic-only. Recent isolated tests have not established a safe fix for missing distant rider models:

- The corrected fog A/B matched 128 candidate draws; all had original vertex fog factor `1.0`, so forcing `1.0` had no effect.
- The depth A/B disabled depth only for matching actor-like draws. It did not clearly restore horizon riders; it is not a confirmed fix.
- The alpha-test A/B logged 128 matches, but the first automatic screenshot captured the Dunes loading screen rather than the race scene. Its visual effect on the missing racers is therefore inconclusive.
- Grey ground patches have been traced to shadow-card draws arriving with blending disabled; the required blend behavior and horizontal shadow alignment remain unresolved.
- A transient grid-pattern glitch during model/loading transitions is still under investigation.

The in-progress renderer probes and run artifacts are intentionally not represented as verified fixes in this package. Do not enable diagnostic overrides in a normal build without a reproducible visual A/B and regression check.

## Remaining development roadmap

1. Add a race-scene-specific, one-shot capture trigger so screenshots align with candidate actor draws after the user reaches the race; identify rider, ATV, shadow, and LOD batches from synchronized images and trace records.
2. Determine why distant AI rider meshes disappear while nearby models remain visible; test texture/combiner, alpha, depth, culling, LOD, and draw-distance hypotheses one variable at a time.
3. Fix shadow-card blending and rider-to-shadow screen-space alignment without breaking other transparent effects.
4. Reproduce and diagnose the transient grid pattern during model loading/transitions.
5. Build and run the distributable snapshot after each candidate fix, compare against the known-good Records-panel screen, then update this README, the handoff, and the share bundle only for verified milestones.
6. Continue broader game compatibility work: remaining game systems, input/audio/runtime edge cases, track/gameplay validation, and performance/stability remain outside the verified Records-panel fix.

## Investigation handoff

[`D3D11_HANDOFF.md`](D3D11_HANDOFF.md) carries the ongoing renderer investigation: confirmed Records-panel fix, diagnostic methods, A/B results, unresolved shadow/rider/grid issues, and recommended next steps. It is a working project handoff, not a claim of completion. Test logs, screenshots, local executable builds, and the user's game files remain excluded.

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
