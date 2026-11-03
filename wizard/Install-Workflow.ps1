[CmdletBinding()]
param(
    [Parameter(Mandatory = $true)][string]$BundleRoot,
    [Parameter(Mandatory = $true)][string]$IsoPath
)
$ErrorActionPreference = 'Stop'
$BundleRoot = [System.IO.Path]::GetFullPath($BundleRoot)
$IsoPath = [System.IO.Path]::GetFullPath($IsoPath)
function Stage([string]$text) { Write-Output "`n[STEP] $text" }

try {
    if (-not (Test-Path -LiteralPath $IsoPath -PathType Leaf)) { throw "Selected XISO file not found: $IsoPath" }
    $extractor = Join-Path $BundleRoot 'tools\extract-xiso\extract-xiso.exe'
    if (-not (Test-Path -LiteralPath $extractor -PathType Leaf)) { throw "Bundled XISO extractor is missing: $extractor" }

    $workRoot = Join-Path $BundleRoot '.install_work'
    New-Item -ItemType Directory -Path $workRoot -Force | Out-Null
    $stageDir = Join-Path $workRoot ('xiso_stage_' + [Guid]::NewGuid().ToString('N'))
    New-Item -ItemType Directory -Path $stageDir -Force | Out-Null

    Stage 'Extracting XISO contents to a temporary staging folder.'
    Write-Output "[INFO] Input: $IsoPath"
    & $extractor '-x' '-d' $stageDir $IsoPath
    if ($LASTEXITCODE -ne 0) { throw "extract-xiso failed with exit code $LASTEXITCODE. Ensure the selected image is an Xbox XISO, not a ZIP/7z or full redump ISO." }

    Stage 'Checking for the expected game root.'
    $gameSource = $null
    $xbeFiles = Get-ChildItem -LiteralPath $stageDir -Filter 'default.xbe' -File -Recurse -ErrorAction SilentlyContinue
    foreach ($xbe in $xbeFiles) {
        $dir = $xbe.Directory.FullName
        if ((Test-Path -LiteralPath (Join-Path $dir 'ATV.bah') -PathType Leaf) -and (Test-Path -LiteralPath (Join-Path $dir 'ATV.bad') -PathType Leaf)) {
            $gameSource = $dir
            break
        }
    }
    if (-not $gameSource) { throw 'The extracted image did not contain default.xbe, ATV.bah, and ATV.bad together. Confirm that you selected the ATV Quad Power Racing 2 XISO.' }
    Write-Output "[INFO] Found game data at $gameSource"
    Write-Output '[INFO] Original ATV.BAH and ATV.BAD will be preserved as extracted; they are not unpacked or rewritten.'

    Stage 'Placing original game files in the package game folder.'
    $gameDir = Join-Path $BundleRoot 'game'
    if (Test-Path -LiteralPath $gameDir) {
        $meaningful = @(Get-ChildItem -LiteralPath $gameDir -Force | Where-Object { $_.Name -notin @('.gitkeep', 'README.md') })
        if ($meaningful.Count -gt 0) {
            $backup = Join-Path $BundleRoot ('game_backup_' + (Get-Date -Format 'yyyyMMdd_HHmmss'))
            Write-Output "[INFO] Existing game folder moved to $backup"
            Move-Item -LiteralPath $gameDir -Destination $backup
        } else {
            Remove-Item -LiteralPath $gameDir -Recurse -Force
        }
    }
    if ([System.IO.Path]::GetFullPath($gameSource).TrimEnd('\') -eq [System.IO.Path]::GetFullPath($stageDir).TrimEnd('\')) {
        Move-Item -LiteralPath $stageDir -Destination $gameDir
    } else {
        Move-Item -LiteralPath $gameSource -Destination $gameDir
        if (Test-Path -LiteralPath $stageDir) { Remove-Item -LiteralPath $stageDir -Recurse -Force }
    }
    if (-not (Test-Path -LiteralPath (Join-Path $gameDir 'default.xbe'))) { throw 'Game data staging check failed after moving files.' }

    Stage 'Building the clean Release configuration.'
    $buildScript = Join-Path $BundleRoot 'wizard\Build-Project.ps1'
    & $buildScript -BundleRoot $BundleRoot
    if (-not (Test-Path -LiteralPath (Join-Path $BundleRoot 'my_xbox_game.exe') -PathType Leaf)) { throw 'Build script finished without producing my_xbox_game.exe.' }

    Stage 'Install and build completed successfully.'
    Write-Output "[SUCCESS] Run the game with: $(Join-Path $BundleRoot 'Run ATV QPR2.bat')"
    exit 0
} catch {
    Write-Output "[ERROR] $($_.Exception.Message)"
    exit 1
}
