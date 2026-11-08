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

    $workRoot = Join-Path $BundleRoot '.install_work'
    $toolRoot = Join-Path $workRoot 'extract-xiso'
    $extractor = Join-Path $toolRoot 'extract-xiso.exe'
    if (-not (Test-Path -LiteralPath $extractor -PathType Leaf)) {
        Stage 'Downloading the official XboxDev XISO extractor.'
        New-Item -ItemType Directory -Path $toolRoot -Force | Out-Null
        $asset = Join-Path $workRoot 'extract-xiso-Win64_Release.zip'
        $uri = 'https://github.com/XboxDev/extract-xiso/releases/download/build-202609111233/extract-xiso-Win64_Release.zip'
        $expectedSha256 = 'fc891dfa72f08e3838a2f8b7ec34a8e4d61678da1cc8fee879677f00bf114ce3'
        [Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12
        Invoke-WebRequest -Uri $uri -OutFile $asset -UseBasicParsing
        $actualSha256 = (Get-FileHash -LiteralPath $asset -Algorithm SHA256).Hash.ToLowerInvariant()
        if ($actualSha256 -ne $expectedSha256) { throw "XISO extractor archive SHA-256 mismatch. Expected $expectedSha256; got $actualSha256." }
        $extractStage = Join-Path $workRoot 'extract-xiso_unpack'
        if (Test-Path -LiteralPath $extractStage) { Remove-Item -LiteralPath $extractStage -Recurse -Force }
        Expand-Archive -LiteralPath $asset -DestinationPath $extractStage -Force
        $downloadedExe = Get-ChildItem -LiteralPath $extractStage -Filter 'extract-xiso.exe' -File -Recurse | Select-Object -First 1
        if (-not $downloadedExe) { throw 'Official extract-xiso archive did not contain extract-xiso.exe.' }
        Copy-Item -LiteralPath $downloadedExe.FullName -Destination $extractor -Force
        Remove-Item -LiteralPath $extractStage -Recurse -Force
        Write-Output "[INFO] Verified XboxDev release build-202609111233 (SHA-256 $actualSha256). The tool is kept in ignored .install_work/ and is not part of the source package."
    }

    Stage 'Extracting XISO contents to a temporary staging folder.'
    Write-Output "[INFO] Input: $IsoPath"
    $stageDir = Join-Path $workRoot ('xiso_stage_' + [Guid]::NewGuid().ToString('N'))
    New-Item -ItemType Directory -Path $stageDir -Force | Out-Null
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
