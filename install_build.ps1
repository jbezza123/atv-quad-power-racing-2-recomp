[CmdletBinding()]
param(
    [ValidateSet('Debug', 'Release', 'RelWithDebInfo')]
    [string]$Configuration = 'RelWithDebInfo',
    [string]$BuildDirectory = (Join-Path $PSScriptRoot 'build')
)

$ErrorActionPreference = 'Stop'
$bundleRoot = [System.IO.Path]::GetFullPath($PSScriptRoot)
$projectDir = Join-Path $bundleRoot 'game_project'
$toolkitDir = Join-Path $bundleRoot 'xboxrecomp-main'
if (-not [System.IO.Path]::IsPathRooted($BuildDirectory)) {
    $BuildDirectory = Join-Path $bundleRoot $BuildDirectory
}
$buildDir = [System.IO.Path]::GetFullPath($BuildDirectory)

$cmakeCommand = Get-Command cmake -ErrorAction SilentlyContinue
if (-not $cmakeCommand) {
    throw 'CMake 3.20+ was not found on PATH. Install CMake and Visual Studio 2022 Build Tools with the C++ desktop workload and a Windows SDK, then run this script again.'
}
if (-not (Test-Path -LiteralPath (Join-Path $projectDir 'CMakeLists.txt'))) {
    throw "Game project CMakeLists.txt is missing: $projectDir"
}
if (-not (Test-Path -LiteralPath (Join-Path $toolkitDir 'CMakeLists.txt'))) {
    throw "Bundled xboxrecomp toolkit is missing: $toolkitDir"
}
if (-not (Test-Path -LiteralPath (Join-Path $projectDir 'src\recomp\gen\recomp_0000.c'))) {
    throw 'Generated recompilation sources are missing under game_project/src/recomp/gen.'
}

Write-Host "Configuring x64 $Configuration build..."
Write-Host "Game sources: $projectDir"
Write-Host "Bundled toolkit: $toolkitDir"
Write-Host "Build directory: $buildDir"
& $cmakeCommand.Source -S $projectDir -B $buildDir -G 'Visual Studio 17 2022' -A x64 "-DXBOXRECOMP_DIR=$toolkitDir"
if ($LASTEXITCODE -ne 0) {
    throw "CMake configure failed with exit code $LASTEXITCODE. Confirm the Visual Studio 2022 C++ workload and Windows SDK are installed."
}

Write-Host "Building my_xbox_game ($Configuration)..."
& $cmakeCommand.Source --build $buildDir --config $Configuration --target my_xbox_game --parallel 4
if ($LASTEXITCODE -ne 0) {
    throw "Build failed with exit code $LASTEXITCODE. See the CMake/MSBuild output above."
}

$exe = Join-Path $buildDir "$Configuration\my_xbox_game.exe"
if (-not (Test-Path -LiteralPath $exe)) {
    throw "Build reported success but the executable was not found at $exe"
}
Write-Host "Build complete: $exe"
Write-Host 'Compiling does not require game assets. To run the executable, supply your own legally obtained game files under game_project/game.'
