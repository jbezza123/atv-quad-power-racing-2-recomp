#!/usr/bin/env python3
"""Optional bulk wrapper decode for files extracted from ATV.BAH/ATV.BAD.

This reuses decode_wrapper from ATV_Asset_Browser.py. It is not part of the
normal install flow; the game reads the original archives directly.
"""
from __future__ import annotations

import argparse
import csv
import sys
from pathlib import Path

TOOLS_DIR = Path(__file__).resolve().parent
if str(TOOLS_DIR) not in sys.path:
    sys.path.insert(0, str(TOOLS_DIR))

try:
    from ATV_Asset_Browser import decode_wrapper
except Exception as exc:
    raise SystemExit(
        "Could not load the existing Asset Browser decoder. Install Python 3 "
        "with Tk support, then retry. Details: " + str(exc)
    )


def main() -> int:
    bundle = TOOLS_DIR.parent
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--source", type=Path, default=bundle / "game" / "assets" / "extracted_blocks", help="folder created by extract_bark.py")
    parser.add_argument("--out", type=Path, default=bundle / "game" / "assets" / "decoded", help="decoded-copy destination")
    args = parser.parse_args()
    if not args.source.is_dir():
        parser.error(f"Source folder does not exist: {args.source}")

    source_root = args.source.resolve()
    args.out.mkdir(parents=True, exist_ok=True)
    out_root = args.out.resolve()
    rows: list[tuple[str, str, str]] = []
    good = skipped = 0
    for path in sorted(p for p in source_root.rglob("*") if p.is_file()):
        rel = path.relative_to(source_root)
        try:
            decoded, info = decode_wrapper(path.read_bytes())
            if decoded is None:
                skipped += 1
                rows.append((str(rel), "skipped", str(info.get("error") or "decode failed")))
                continue
            dest = out_root / rel.parent / f"{rel.stem}_decoded.bin"
            dest.parent.mkdir(parents=True, exist_ok=True)
            if out_root not in dest.resolve().parents:
                raise ValueError(f"Output path escapes destination: {rel}")
            if dest.exists():
                # Preserve both assets if different source extensions share a stem.
                dest = out_root / rel.parent / f"{rel.stem}{rel.suffix}_decoded.bin"
            dest.write_bytes(decoded)
            good += 1
            detail = str(info.get("error") or "")
            rows.append((str(rel), "decoded", detail))
        except Exception as exc:
            skipped += 1
            rows.append((str(rel), "error", str(exc)))

    report = out_root / "decode_report.csv"
    with report.open("w", newline="", encoding="utf-8") as f:
        writer = csv.writer(f)
        writer.writerow(("source", "status", "detail"))
        writer.writerows(rows)
    print(f"Decoded: {good}; skipped/errors: {skipped}; report: {report}")
    return 0 if good else 1


if __name__ == "__main__":
    raise SystemExit(main())
