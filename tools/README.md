# Optional asset tools

The normal installer does **not** unpack `ATV.BAH`/`ATV.BAD`: the game reads those original archives from `game/` itself. The installer extracts the XISO as-is and leaves the archives unchanged; the runtime renderer handles the palette data.

For developer inspection only, these copied tools can extract the indexed stored blocks and then apply the same wrapper decoder used by `ATV_Asset_Browser.py`. A Python 3 installation with Tk support is needed for the browser/decoder; Pillow and NumPy are optional GUI features.

From the package root, after installing your own game data:

```powershell
py -3 .\tools\extract_bark.py --index .\game\ATV.bah --data .\game\ATV.bad --out .\game\assets\extracted_blocks
py -3 .\tools\decode_assets.py --source .\game\assets\extracted_blocks --out .\game\assets\decoded
py -3 .\tools\ATV_Asset_Browser.py
```

These commands create supplemental files under `game/assets/`; they do not replace or modify the original game archives. None of them is required to build or run the recompiled game.
