@echo off
setlocal EnableExtensions
set "ROOT=%~dp0"
set "PROJECT=%ROOT%game_project"
set "EXE=%ROOT%build\RelWithDebInfo\my_xbox_game.exe"
set "LOGDIR=%ROOT%logs"
set "LOG=%LOGDIR%\records_panel_trace.log"
if not exist "%EXE%" (
  echo Missing build output: "%EXE%"
  echo Run install_build.ps1 first.
  pause
  exit /b 2
)
if not exist "%PROJECT%\game\default.xbe" (
  echo Missing game_project\game\default.xbe.
  echo Supply your own legally obtained game files before running this diagnostic.
  pause
  exit /b 3
)
if not exist "%LOGDIR%" mkdir "%LOGDIR%"
cd /d "%PROJECT%"
set RECOMP_WATCHDOG_SECS=
set RECOMP_VBLANK=1
set RECOMP_PB_EXEC=1
set RECOMP_FB_WINDOW=1
set RECOMP_AC97_READY=1
set RECOMP_USB=1
set RECOMP_KEYBOARD=1
set RECOMP_DISPATCH_GATE=1
set RECOMP_GUEST_CPUS=one
set RECOMP_RASTER_THREADS=4
set RECOMP_AUDIO_BUF_COUNT=6
set RECOMP_D3D_BACKEND=direct
set RECOMP_D3D_MAX_DRAWS=3000
set RECOMP_D3D_BYPASS_COMBINER=0
set RECOMP_D3D_RAW_TEXTURE=0
set RECOMP_D3D_FORCE_NO_DEPTH=0
set RECOMP_D3D_TRACE=
set RECOMP_D3D_BATCH_TRACE=0
set RECOMP_D3D_PANEL_TRACE=1
set RECOMP_D3D_TRACE_TARGETS=0
set RECOMP_D3D_PERF_TRACE=0
set RECOMP_D3D_TRACE_TEXTURE=0
set RECOMP_D3D_TEXTURE_TRACE=0
set RECOMP_D3D_TEXTURE_HASH_TRACE=0
set RECOMP_D3D_COMBINER_RAW_TRACE=0
set RECOMP_TEX_STATE=0
set RECOMP_D3D_FORCE_NO_CULL=0
set RECOMP_D3D_DEPTH_CLEAR=1
set RECOMP_XF_TRI_TRACE=
set RECOMP_XF_TRI_TRACE_AFTER=0
set RECOMP_D3D_TARGET_TRACE=0
set RECOMP_D3D_SKIP_PREVIEW_COMPOSITE=0
set RECOMP_D3D_SIMPLE_PREVIEW_COMPOSITE=0
set RECOMP_D3D_SIMPLE_PREVIEW_SCENE=0
set RECOMP_VSH_TRACE=0
set RECOMP_VSH_SURFACE_TRACE=
set RECOMP_VSH_SURFACE_TRACE_AFTER=0
set RECOMP_FILE_IO_TRACE=0
set RECOMP_PVIDEO_TRACE=0
echo Navigate to Track Select and leave the Records panels visible, then close normally.
"%EXE%" > "%LOG%" 2>&1
set "GAME_EXIT=%ERRORLEVEL%"
echo Diagnostic log: "%LOG%"
echo Game exited with code %GAME_EXIT%.
pause
exit /b %GAME_EXIT%
