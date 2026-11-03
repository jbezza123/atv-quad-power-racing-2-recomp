[CmdletBinding()]
param(
    [Parameter(Mandatory = $true)][string]$BundleRoot
)
$ErrorActionPreference = 'Stop'
$BundleRoot = [System.IO.Path]::GetFullPath($BundleRoot)
$depDir = Join-Path $BundleRoot '.install_work\dependencies'
New-Item -ItemType Directory -Path $depDir -Force | Out-Null

function Refresh-ProcessPath {
    $machine = [Environment]::GetEnvironmentVariable('Path', 'Machine')
    $user = [Environment]::GetEnvironmentVariable('Path', 'User')
    $env:Path = @($machine, $user) -join ';'
}
function Get-CMakeExe {
    $cmd = Get-Command cmake -ErrorAction SilentlyContinue
    if ($cmd) { return $cmd.Source }
    foreach ($p in @('C:\Program Files\CMake\bin\cmake.exe', 'C:\Program Files (x86)\CMake\bin\cmake.exe')) { if (Test-Path $p) { return $p } }
    return $null
}
function Get-VSWhere {
    foreach ($p in @("${env:ProgramFiles(x86)}\Microsoft Visual Studio\Installer\vswhere.exe", "$env:ProgramFiles\Microsoft Visual Studio\Installer\vswhere.exe")) { if ($p -and (Test-Path $p)) { return $p } }
    return $null
}
function Get-VSPath {
    $vswhere = Get-VSWhere
    if (-not $vswhere) { return $null }
    $p = & $vswhere -latest -products '*' -version '[17.0,18.0)' -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath 2>$null
    if ($LASTEXITCODE -eq 0 -and $p) { return ($p | Select-Object -First 1).Trim() }
    return $null
}
function Test-SdkPresent {
    $kitRoot = Join-Path ${env:ProgramFiles(x86)} 'Windows Kits\10\Include'
    if (-not (Test-Path $kitRoot)) { return $false }
    return [bool](Get-ChildItem -LiteralPath $kitRoot -Directory -ErrorAction SilentlyContinue | Where-Object { Test-Path (Join-Path $_.FullName 'um\Windows.h') } | Select-Object -First 1)
}
function Download-VerifiedPublisher([string]$Uri, [string]$Path, [string]$PublisherRegex) {
    Write-Output "[PREREQ] Downloading official installer: $Uri"
    Invoke-WebRequest -Uri $Uri -OutFile $Path -UseBasicParsing
    $signature = Get-AuthenticodeSignature -FilePath $Path
    if ($signature.Status -ne 'Valid' -or $signature.SignerCertificate.Subject -notmatch $PublisherRegex) {
        throw "Installer signature/publisher check failed for $Path. Refusing to run it."
    }
    Write-Output "[PREREQ] Signature verified: $($signature.SignerCertificate.Subject)"
}

$cmakeExe = Get-CMakeExe
$cmakeOk = $false
if ($cmakeExe) {
    $versionLine = (& $cmakeExe --version 2>&1 | Select-Object -First 1)
    if ($versionLine -match 'cmake version\s+(\d+)\.(\d+)') { $cmakeOk = ([int]$Matches[1] -gt 3 -or ([int]$Matches[1] -eq 3 -and [int]$Matches[2] -ge 20)) }
}
$vsPath = Get-VSPath
$vsOk = [bool]$vsPath -and (Test-SdkPresent)

if (-not $cmakeOk) {
    $msi = Join-Path $depDir 'cmake-4.4.5-windows-x86_64.msi'
    Download-VerifiedPublisher 'https://github.com/Kitware/CMake/releases/download/v4.4.5/cmake-4.4.5-windows-x86_64.msi' $msi 'Kitware'
    Write-Output '[PREREQ] Opening the Kitware CMake installer. Complete its prompts, then return here.'
    $p = Start-Process -FilePath 'msiexec.exe' -ArgumentList @('/i', "`"$msi`"") -PassThru -Wait
    if ($p.ExitCode -notin @(0, 3010)) { throw "CMake installer exited with code $($p.ExitCode)." }
}

if (-not $vsOk) {
    $bootstrapper = Join-Path $depDir 'vs_BuildTools.exe'
    Download-VerifiedPublisher 'https://aka.ms/vs/17/release/vs_BuildTools.exe' $bootstrapper 'Microsoft Corporation'
    if ($vsPath) {
        Write-Output '[PREREQ] Opening Visual Studio Installer to add the Windows SDK to the existing VS 2022 C++ toolset.'
        $args = @('--modify', '--installPath', $vsPath, '--add', 'Microsoft.VisualStudio.Component.Windows11SDK.26100', '--wait')
    } else {
        Write-Output '[PREREQ] Opening the Visual Studio 2022 Build Tools installer with Desktop development with C++ and recommended SDK components selected.'
        $args = @('--add', 'Microsoft.VisualStudio.Workload.VCTools', '--includeRecommended', '--wait')
    }
    $p = Start-Process -FilePath $bootstrapper -ArgumentList $args -PassThru -Wait
    if ($p.ExitCode -notin @(0, 3010)) { throw "Visual Studio Build Tools installer exited with code $($p.ExitCode)." }
}

Refresh-ProcessPath
Write-Output '[PREREQ] Installation process finished. Refreshing checks...'
$cmakeExe = Get-CMakeExe
$vsPath = Get-VSPath
if (-not $cmakeExe -or -not $vsPath -or -not (Test-SdkPresent)) {
    throw 'One or more prerequisites are still missing. Close/reopen the wizard and check again; Visual Studio may require a restart.'
}
$versionLine = (& $cmakeExe --version 2>&1 | Select-Object -First 1)
Write-Output "[PREREQ] Ready: $versionLine; VS 2022 C++ tools at $vsPath; Windows SDK detected."
