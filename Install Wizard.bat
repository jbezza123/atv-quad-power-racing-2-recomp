@echo off
setlocal
set "WIZARD=%~dp0wizard\InstallWizard.ps1"
if not exist "%WIZARD%" (
  echo Install Wizard script is missing: "%WIZARD%"
  pause
  exit /b 2
)
powershell.exe -NoLogo -NoProfile -ExecutionPolicy Bypass -STA -File "%WIZARD%"
set "WIZARD_EXIT=%ERRORLEVEL%"
if not "%WIZARD_EXIT%"=="0" (
  echo.
  echo The wizard exited with error code %WIZARD_EXIT%.
  echo Check logs\wizard_ui_error.log for the full details.
  pause
)
exit /b %WIZARD_EXIT%
