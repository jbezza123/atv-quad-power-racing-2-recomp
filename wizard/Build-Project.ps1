[CmdletBinding()]
param(
    [Parameter(Mandatory = $true)][string]$BundleRoot
)

$ErrorActionPreference = 'Stop'
$BundleRoot = [System.IO.Path]::GetFullPath($BundleRoot)
$projectRoot = Join-Path $BundleRoot 'project'
$manifestPath = Join-Path $projectRoot 'project_manifest.json'
if (-not (Test-Path -LiteralPath $manifestPath)) { throw "Project manifest missing: $manifestPath" }
$manifest = Get-Content -LiteralPath $manifestPath -Raw -Encoding UTF8 | ConvertFrom-Json
if ([int]$manifest.schema_version -ne 1) { throw "Unsupported project manifest schema: $($manifest.schema_version)" }

function Resolve-ProjectChild([string]$relative, [string]$label) {
    if ([string]::IsNullOrWhiteSpace($relative) -or [System.IO.Path]::IsPathRooted($relative)) { throw "Invalid relative path for ${label}: $relative" }
    $full = [System.IO.Path]::GetFullPath((Join-Path $projectRoot $relative))
    $prefix = $projectRoot.TrimEnd('\') + '\'
    if (-not $full.StartsWith($prefix, [StringComparison]::OrdinalIgnoreCase)) { throw "$label resolves outside the replaceable project folder." }
    if (-not (Test-Path -LiteralPath $full -PathType Container)) { throw "$label folder is missing: $full" }
    return $full
}

$sourceDir = Resolve-ProjectChild ([string]$manifest.cmake_source) 'CMake source'
$engineDir = Resolve-ProjectChild ([string]$manifest.engine_source) 'xboxrecomp engine'
$cmake = Get-Command cmake -ErrorAction SilentlyContinue
if (-not $cmake) { throw 'CMake 3.20+ is required. Run Install Wizard and choose Install missing prerequisites.' }
if (-not (Test-Path -LiteralPath (Join-Path $sourceDir 'CMakeLists.txt'))) { throw "CMakeLists.txt missing under $sourceDir" }
if (-not (Test-Path -LiteralPath (Join-Path $engineDir 'CMakeLists.txt'))) { throw "Engine CMakeLists.txt missing under $engineDir" }
if (-not (Test-Path -LiteralPath (Join-Path $sourceDir 'src\recomp\gen\recomp_0000.c'))) { throw 'Generated recompilation sources are missing from the replaceable project folder.' }

$buildDir = Join-Path $BundleRoot 'build'
$configuration = [string]$manifest.configuration
$generator = [string]$manifest.generator
$architecture = [string]$manifest.architecture
$target = [string]$manifest.target
if (-not $configuration -or -not $generator -or -not $architecture -or -not $target) { throw 'Project manifest is missing a required build field.' }

Write-Output "[BUILD] Project: $($manifest.project_name)"
Write-Output "[BUILD] Configuration: $configuration; target: $target; architecture: $architecture"
Write-Output "[BUILD] Source: $sourceDir"
Write-Output "[BUILD] Engine: $engineDir"
Write-Output "[BUILD] Build directory: $buildDir"

$configureArgs = @('-S', $sourceDir, '-B', $buildDir, '-G', $generator, '-A', $architecture, "-DXBOXRECOMP_DIR=$engineDir")
& $cmake.Source @configureArgs
if ($LASTEXITCODE -ne 0) { throw "CMake configure failed with exit code $LASTEXITCODE." }

& $cmake.Source '--build' $buildDir '--config' $configuration '--target' $target '--parallel' '4'
if ($LASTEXITCODE -ne 0) { throw "CMake build failed with exit code $LASTEXITCODE." }

$exeRelative = [string]$manifest.executable_relative_to_build
if ([System.IO.Path]::IsPathRooted($exeRelative)) { throw 'Executable path in project manifest must be relative to the build directory.' }
$builtExe = [System.IO.Path]::GetFullPath((Join-Path $buildDir $exeRelative))
$buildPrefix = $buildDir.TrimEnd('\') + '\'
if (-not $builtExe.StartsWith($buildPrefix, [StringComparison]::OrdinalIgnoreCase)) { throw 'Executable path resolves outside the build directory.' }
if (-not (Test-Path -LiteralPath $builtExe -PathType Leaf)) { throw "Build succeeded but executable was not found: $builtExe" }

$exeName = [string]$manifest.executable_name
if ([string]::IsNullOrWhiteSpace($exeName) -or $exeName -ne [System.IO.Path]::GetFileName($exeName)) { throw 'Invalid executable_name in project manifest.' }
$stagedExe = Join-Path $BundleRoot $exeName
Copy-Item -LiteralPath $builtExe -Destination $stagedExe -Force
Write-Output "[BUILD] SUCCESS: $stagedExe"
Write-Output '[BUILD] The default run launcher disables all renderer/kernel trace and dump switches.'

