$ErrorActionPreference = 'Stop'
Add-Type -AssemblyName System.Windows.Forms
Add-Type -AssemblyName System.Drawing
[System.Windows.Forms.Application]::EnableVisualStyles()

$script:BundleRoot = [System.IO.Path]::GetFullPath((Join-Path $PSScriptRoot '..'))
$script:ActiveProcess = $null
$script:ActiveTask = ''
$script:LogPath = ''
$script:ErrPath = ''
$script:LastOutLine = 0
$script:LastErrLine = 0

function Write-WizardError([object]$errorRecord) {
    try {
        $logDir = Join-Path $script:BundleRoot 'logs'
        New-Item -ItemType Directory -Path $logDir -Force | Out-Null
        $path = Join-Path $logDir 'wizard_ui_error.log'
        Add-Content -LiteralPath $path -Value ("[$(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')] $($errorRecord | Out-String)") -Encoding UTF8
    } catch { }
}
trap {
    Write-WizardError $_
    try { [System.Windows.Forms.MessageBox]::Show("The wizard encountered an unexpected error:`r`n$($_.Exception.Message)`r`n`r`nDetails were saved to logs\wizard_ui_error.log.",'ATV QPR2 Wizard Error',[System.Windows.Forms.MessageBoxButtons]::OK,[System.Windows.Forms.MessageBoxIcon]::Error) | Out-Null } catch { }
    exit 1
}

function New-Label([string]$text, [int]$x, [int]$y, [int]$w, [int]$h, [float]$size = 9, [bool]$bold = $false) {
    $c = New-Object System.Windows.Forms.Label
    $c.Text = $text; $c.Location = New-Object System.Drawing.Point($x,$y); $c.Size = New-Object System.Drawing.Size($w,$h)
    $c.Font = New-Object System.Drawing.Font('Segoe UI', $size, $(if($bold){[System.Drawing.FontStyle]::Bold}else{[System.Drawing.FontStyle]::Regular}))
    $c.AutoEllipsis = $true
    return $c
}
function New-Button([string]$text, [int]$x, [int]$y, [int]$w, [int]$h) {
    $c = New-Object System.Windows.Forms.Button
    $c.Text = $text; $c.Location = New-Object System.Drawing.Point($x,$y); $c.Size = New-Object System.Drawing.Size($w,$h)
    $c.Font = New-Object System.Drawing.Font('Segoe UI', 9)
    return $c
}
function Get-VSWhere {
    foreach ($p in @("${env:ProgramFiles(x86)}\Microsoft Visual Studio\Installer\vswhere.exe", "$env:ProgramFiles\Microsoft Visual Studio\Installer\vswhere.exe")) { if ($p -and (Test-Path -LiteralPath $p)) { return $p } }
    return $null
}
function Get-VSStatus {
    $vswhere = Get-VSWhere
    if (-not $vswhere) { return @{ Ok=$false; Text='Visual Studio 2022 C++ Build Tools: not found' } }
    $path = & $vswhere -latest -products '*' -version '[17.0,18.0)' -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath 2>$null
    if ($LASTEXITCODE -ne 0 -or -not $path) { return @{ Ok=$false; Text='Visual Studio 2022 C++ workload: not found' } }
    $kitRoot = Join-Path ${env:ProgramFiles(x86)} 'Windows Kits\10\Include'
    $sdk = $false
    if (Test-Path -LiteralPath $kitRoot) { $sdk = [bool](Get-ChildItem -LiteralPath $kitRoot -Directory -ErrorAction SilentlyContinue | Where-Object { Test-Path (Join-Path $_.FullName 'um\Windows.h') } | Select-Object -First 1) }
    if (-not $sdk) { return @{ Ok=$false; Text='Windows SDK: not found (VS 2022 C++ tools are present)' } }
    return @{ Ok=$true; Text='Visual Studio 2022 C++ Build Tools + Windows SDK: ready' }
}
function Get-CMakeStatus {
    $cmd = Get-Command cmake -ErrorAction SilentlyContinue
    if (-not $cmd) {
        foreach ($p in @('C:\Program Files\CMake\bin\cmake.exe','C:\Program Files (x86)\CMake\bin\cmake.exe')) { if (Test-Path $p) { $cmd = Get-Item $p; break } }
    }
    if (-not $cmd) { return @{ Ok=$false; Text='CMake 3.20+: not found' } }
    $line = (& $cmd.Source --version 2>&1 | Select-Object -First 1)
    if ($line -match 'cmake version\s+(\d+)\.(\d+)') {
        $major=[int]$Matches[1]; $minor=[int]$Matches[2]
        if ($major -gt 3 -or ($major -eq 3 -and $minor -ge 20)) { return @{ Ok=$true; Text="CMake: ready ($line)" } }
    }
    return @{ Ok=$false; Text="CMake 3.20+: too old ($line)" }
}
function Test-OptionalFile([string]$path) {
    if ([string]::IsNullOrWhiteSpace($path)) { return $false }
    return Test-Path -LiteralPath $path -PathType Leaf
}
function Refresh-Checks {
    $cm = Get-CMakeStatus; $vs = Get-VSStatus
    $lblCmake.Text = $cm.Text; $lblCmake.ForeColor = $(if($cm.Ok){[System.Drawing.Color]::DarkGreen}else{[System.Drawing.Color]::DarkRed})
    $lblVs.Text = $vs.Text; $lblVs.ForeColor = $(if($vs.Ok){[System.Drawing.Color]::DarkGreen}else{[System.Drawing.Color]::DarkRed})
    $extractor = Join-Path $script:BundleRoot 'tools\extract-xiso\extract-xiso.exe'
    $extractOk = Test-Path -LiteralPath $extractor
    $lblXiso.Text = $(if($extractOk){'Bundled XISO extractor: ready'}else{'Bundled XISO extractor: missing'})
    $lblXiso.ForeColor = $(if($extractOk){[System.Drawing.Color]::DarkGreen}else{[System.Drawing.Color]::DarkRed})
    $script:PrereqsReady = $cm.Ok -and $vs.Ok -and $extractOk
    $btnInstallDeps.Enabled = -not ($cm.Ok -and $vs.Ok)
    $btnStart.Enabled = $script:PrereqsReady -and (Test-OptionalFile $txtIso.Text) -and -not $script:ActiveProcess
}
function Append-NewLines([string]$path, [ref]$lineCount) {
    if (-not (Test-Path -LiteralPath $path)) { return }
    $lines = @(Get-Content -LiteralPath $path -ErrorAction SilentlyContinue)
    if ($lines.Count -gt $lineCount.Value) {
        for ($i=$lineCount.Value; $i -lt $lines.Count; $i++) { $txtLog.AppendText($lines[$i] + [Environment]::NewLine) }
        $lineCount.Value = $lines.Count
        $txtLog.SelectionStart = $txtLog.TextLength; $txtLog.ScrollToCaret()
    }
}
function Start-WizardProcess([string]$task, [string]$scriptPath, [string]$iso = '') {
    New-Item -ItemType Directory -Path (Join-Path $script:BundleRoot 'logs') -Force | Out-Null
    $script:LogPath = Join-Path $script:BundleRoot 'logs\installer.log'
    $script:ErrPath = Join-Path $script:BundleRoot 'logs\installer_error.log'
    Set-Content -LiteralPath $script:LogPath -Value "[$(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')] $task started" -Encoding UTF8
    Set-Content -LiteralPath $script:ErrPath -Value '' -Encoding UTF8
    $script:LastOutLine = 0; $script:LastErrLine = 0
    $powershell = Join-Path $env:SystemRoot 'System32\WindowsPowerShell\v1.0\powershell.exe'
    $arg = "-NoLogo -NoProfile -ExecutionPolicy Bypass -File `"$scriptPath`" -BundleRoot `"$script:BundleRoot`""
    if ($iso) { $arg += " -IsoPath `"$iso`"" }
    try {
        $script:ActiveProcess = Start-Process -FilePath $powershell -ArgumentList $arg -PassThru -WindowStyle Hidden -RedirectStandardOutput $script:LogPath -RedirectStandardError $script:ErrPath
        $script:ActiveTask = $task
        $btnStart.Enabled = $false; $btnInstallDeps.Enabled = $false; $btnBrowse.Enabled = $false; $btnRefresh.Enabled = $false
        $progress.Style = [System.Windows.Forms.ProgressBarStyle]::Marquee
        $lblStatus.Text = "$task in progress - see log below."
        $timer.Start()
    } catch {
        [System.Windows.Forms.MessageBox]::Show("Could not start the $task process:`r`n$($_.Exception.Message)",'ATV QPR2 Installer',[System.Windows.Forms.MessageBoxButtons]::OK,[System.Windows.Forms.MessageBoxIcon]::Error) | Out-Null
    }
}
function Create-DesktopShortcut {
    $target = Join-Path $script:BundleRoot 'Run ATV QPR2.bat'
    if (-not (Test-Path -LiteralPath $target)) { throw "Run launcher not found: $target" }
    $desktop = [Environment]::GetFolderPath('Desktop')
    $shortcutPath = Join-Path $desktop 'ATV Quad Power Racing 2.lnk'
    $iconDir = Join-Path $script:BundleRoot 'icon'
    $preferredIcon = Join-Path $iconDir 'icon.ico'
    if (Test-Path -LiteralPath $preferredIcon -PathType Leaf) {
        $icon = Get-Item -LiteralPath $preferredIcon
    } else {
        $icon = Get-ChildItem -LiteralPath $iconDir -Filter '*.ico' -File -ErrorAction SilentlyContinue | Sort-Object Name | Select-Object -First 1
    }
    $shell = New-Object -ComObject WScript.Shell
    $link = $shell.CreateShortcut($shortcutPath)
    $link.TargetPath = $target
    $link.WorkingDirectory = $script:BundleRoot
    $link.Description = 'Run the locally built ATV Quad Power Racing 2 recompilation'
    if ($icon) { $link.IconLocation = "$($icon.FullName),0" }
    else { $link.IconLocation = (Join-Path $script:BundleRoot 'my_xbox_game.exe') + ',0' }
    $link.Save()
    return $shortcutPath
}

$form = New-Object System.Windows.Forms.Form
$form.Text = 'ATV Quad Power Racing 2 - Install & Build Wizard'
$form.StartPosition = 'CenterScreen'; $form.ClientSize = New-Object System.Drawing.Size(860,700)
$form.MinimumSize = New-Object System.Drawing.Size(876,739); $form.Font = New-Object System.Drawing.Font('Segoe UI',9)
$form.AutoScaleMode = [System.Windows.Forms.AutoScaleMode]::Dpi

$form.Controls.Add((New-Label 'ATV Quad Power Racing 2 - Install & Build' 20 14 810 34 18 $true))
$form.Controls.Add((New-Label 'Checks your build tools, extracts your own Xbox XISO into game/, then builds the current replaceable project folder.' 22 52 820 38 9 $false))

$group = New-Object System.Windows.Forms.GroupBox
$group.Text='Prerequisite check'; $group.Location=New-Object System.Drawing.Point(20,94); $group.Size=New-Object System.Drawing.Size(820,132)
$form.Controls.Add($group)
$script:lblCmake = New-Label 'CMake: checking...' 14 25 555 22 9 $false
$script:lblVs = New-Label 'Visual Studio C++ Build Tools: checking...' 14 52 555 22 9 $false
$script:lblXiso = New-Label 'Bundled XISO extractor: checking...' 14 79 555 22 9 $false
$group.Controls.AddRange(@($lblCmake,$lblVs,$lblXiso))
$script:btnRefresh = New-Button 'Refresh checks' 585 24 215 30
$script:btnInstallDeps = New-Button 'Install missing prerequisites...' 585 64 215 34
$group.Controls.AddRange(@($btnRefresh,$btnInstallDeps))

$form.Controls.Add((New-Label 'Your Xbox XISO' 22 241 130 24 10 $true))
$script:txtIso = New-Object System.Windows.Forms.TextBox
$txtIso.Location=New-Object System.Drawing.Point(22,268); $txtIso.Size=New-Object System.Drawing.Size(690,26)
$script:btnBrowse = New-Button 'Browse...' 722 266 118 30
$form.Controls.AddRange(@($txtIso,$btnBrowse))
$form.Controls.Add((New-Label 'If your download is a ZIP/7z, unpack it first and select the Xbox XISO (.iso/.xiso). The game data is not included in this package.' 22 300 810 34 8.5 $false))
$form.Controls.Add((New-Label 'The wizard preserves the original ATV.BAH/ATV.BAD files in game/. It does not unpack them; the game reads those archives itself.' 22 334 810 34 8.5 $false))
$form.Controls.Add((New-Label 'First-time extraction/build is commonly around 12-20 minutes, depending on the PC. Installing Visual Studio may take longer, require internet, several GB of disk space, and UAC approval.' 22 370 810 42 8.5 $false))

$script:btnStart = New-Button 'Extract XISO & Build Release' 22 422 260 42
$script:btnStart.BackColor = [System.Drawing.Color]::FromArgb(25,110,65); $script:btnStart.ForeColor=[System.Drawing.Color]::White; $script:btnStart.FlatStyle=[System.Windows.Forms.FlatStyle]::Flat
$script:lblStatus = New-Label 'Check prerequisites and select an XISO to continue.' 300 430 530 28 9 $false
$form.Controls.AddRange(@($btnStart,$lblStatus))
$script:progress = New-Object System.Windows.Forms.ProgressBar
$progress.Location=New-Object System.Drawing.Point(22,472); $progress.Size=New-Object System.Drawing.Size(818,16); $progress.Style=[System.Windows.Forms.ProgressBarStyle]::Blocks
$form.Controls.Add($progress)
$form.Controls.Add((New-Label 'Activity log' 22 498 150 22 9 $true))
$script:txtLog = New-Object System.Windows.Forms.RichTextBox
$txtLog.Location=New-Object System.Drawing.Point(22,522); $txtLog.Size=New-Object System.Drawing.Size(818,150); $txtLog.ReadOnly=$true; $txtLog.Font=New-Object System.Drawing.Font('Consolas',8.5); $txtLog.BackColor=[System.Drawing.Color]::White
$form.Controls.Add($txtLog)

$script:btnBrowse.Add_Click({
    $dialog = New-Object System.Windows.Forms.OpenFileDialog
    $dialog.Title='Select your ATV Quad Power Racing 2 Xbox XISO'
    $dialog.Filter='Xbox disc images (*.iso;*.xiso)|*.iso;*.xiso|All files (*.*)|*.*'
    $dialog.CheckFileExists=$true; $dialog.Multiselect=$false
    if ($dialog.ShowDialog() -eq [System.Windows.Forms.DialogResult]::OK) { $txtIso.Text=$dialog.FileName; Refresh-Checks }
})
$script:btnRefresh.Add_Click({ Refresh-Checks })
$script:btnInstallDeps.Add_Click({
    $cm=Get-CMakeStatus; $vs=Get-VSStatus
    if ($cm.Ok -and $vs.Ok) { Refresh-Checks; return }
    $msg="The wizard will download only the missing official tools from Kitware/Microsoft and open their installers. Visual Studio Build Tools may download several GB and may request administrator/UAC approval.`r`n`r`nContinue?"
    if ([System.Windows.Forms.MessageBox]::Show($msg,'Install missing prerequisites',[System.Windows.Forms.MessageBoxButtons]::YesNo,[System.Windows.Forms.MessageBoxIcon]::Warning) -eq [System.Windows.Forms.DialogResult]::Yes) {
        Start-WizardProcess 'Prerequisite installation' (Join-Path $PSScriptRoot 'Install-Prerequisites.ps1')
    }
})
$script:btnStart.Add_Click({
    if (-not $script:PrereqsReady) { [System.Windows.Forms.MessageBox]::Show('Install or locate the missing prerequisites first.','Prerequisites required')|Out-Null; Refresh-Checks; return }
    if (-not (Test-Path -LiteralPath $txtIso.Text -PathType Leaf)) { [System.Windows.Forms.MessageBox]::Show('Select a valid Xbox XISO file first.','XISO required')|Out-Null; return }
    $msg="This will extract the selected XISO into this package's game/ folder, preserve any current game/ folder as a timestamped backup, then build the Release executable from project/. Original ATV.BAH/ATV.BAD archives remain untouched.`r`n`r`nProceed?"
    if ([System.Windows.Forms.MessageBox]::Show($msg,'Confirm extraction and build',[System.Windows.Forms.MessageBoxButtons]::YesNo,[System.Windows.Forms.MessageBoxIcon]::Question) -eq [System.Windows.Forms.DialogResult]::Yes) {
        Start-WizardProcess 'XISO extraction and Release build' (Join-Path $PSScriptRoot 'Install-Workflow.ps1') $txtIso.Text
    }
})

$script:timer = New-Object System.Windows.Forms.Timer
$timer.Interval=700
$timer.Add_Tick({
    Append-NewLines $script:LogPath ([ref]$script:LastOutLine)
    Append-NewLines $script:ErrPath ([ref]$script:LastErrLine)
    if ($script:ActiveProcess -and $script:ActiveProcess.HasExited) {
        $exit = $script:ActiveProcess.ExitCode
        $task = $script:ActiveTask
        $script:ActiveProcess.Dispose(); $script:ActiveProcess=$null; $script:ActiveTask=''
        $timer.Stop(); $progress.Style=[System.Windows.Forms.ProgressBarStyle]::Blocks; $progress.Value=100
        $btnBrowse.Enabled=$true; $btnRefresh.Enabled=$true
        if ($task -eq 'Prerequisite installation') {
            Refresh-Checks
            $btnInstallDeps.Enabled = -not $script:PrereqsReady
            if ($exit -eq 0 -and $script:PrereqsReady) { $lblStatus.Text='Prerequisites are ready. Select your XISO, then start the build.' }
            elseif ($exit -eq 0) { $lblStatus.Text='Installer finished; a prerequisite may require a restart. Refresh checks after reopening.' }
            else { $lblStatus.Text="Prerequisite installer ended with code $exit. Review the log." }
        } else {
            Refresh-Checks
            $builtExePath = Join-Path $script:BundleRoot 'my_xbox_game.exe'
            $successLog = Test-OptionalFile $script:LogPath -and [bool](Select-String -LiteralPath $script:LogPath -Pattern '\[SUCCESS\] Install and build completed successfully' -Quiet -ErrorAction SilentlyContinue)
            $artifactReady = Test-OptionalFile $builtExePath
            if (($exit -eq 0 -and $artifactReady) -or $successLog) {
                $lblStatus.Text='Build complete. The original game archives are still in game/.'
                try {
                    $made=Create-DesktopShortcut
                    [System.Windows.Forms.MessageBox]::Show("The Release build is ready and a desktop shortcut was created:`r`n$made`r`n`r`nThe shortcut uses icon\icon.ico when present.",'Build complete',[System.Windows.Forms.MessageBoxButtons]::OK,[System.Windows.Forms.MessageBoxIcon]::Information)|Out-Null
                }
                catch {
                    [System.Windows.Forms.MessageBox]::Show("The Release build is ready, but the desktop shortcut could not be created:`r`n$($_.Exception.Message)",'Shortcut error',[System.Windows.Forms.MessageBoxButtons]::OK,[System.Windows.Forms.MessageBoxIcon]::Warning)|Out-Null
                }
            } else {
                $lblStatus.Text="Extraction/build failed (exit code $exit). Review logs/installer.log and logs/installer_error.log."
                [System.Windows.Forms.MessageBox]::Show("The install/build did not finish successfully (exit code $exit). The game data is left in game/ if XISO extraction succeeded. Review the activity log and logs/installer_error.log.",'Install/build failed',[System.Windows.Forms.MessageBoxButtons]::OK,[System.Windows.Forms.MessageBoxIcon]::Error)|Out-Null
            }
        }
        $btnStart.Enabled=$script:PrereqsReady -and (Test-OptionalFile $txtIso.Text)
    }
})
$form.Add_Shown({ try { Refresh-Checks } catch { $lblStatus.Text = "Initial checks failed: $($_.Exception.Message)" } })
$form.Add_FormClosing({
    if ($script:ActiveProcess -and -not $script:ActiveProcess.HasExited) {
        $choice=[System.Windows.Forms.MessageBox]::Show('An operation is still running. Close the wizard anyway? The background process will continue.','Operation running',[System.Windows.Forms.MessageBoxButtons]::YesNo,[System.Windows.Forms.MessageBoxIcon]::Warning)
        if ($choice -ne [System.Windows.Forms.DialogResult]::Yes) { $_.Cancel=$true }
    }
})
[void][System.Windows.Forms.Application]::Run($form)

