#!/usr/bin/env python3
"""Extract indexed stored blocks from ATV.BAH/ATV.BAD (no wrapper decode).

Optional developer utility. The normal install wizard keeps both original
archives in the runtime game folder and does not call this script.
"""
from __future__ import annotations

import argparse
import struct
from pathlib import Path


def extract(index_path: Path, data_path: Path, out_dir: Path) -> tuple[int, int, int]:
    idx = index_path.read_bytes()
    bad = data_path.read_bytes()
    if not idx.startswith(b"Bark 1.06\0"):
        raise ValueError(f"Unexpected .bah signature: {index_path}")

    pos = 0x20
    files: list[tuple[Path, int, int]] = []

    def u32(at: int) -> int:
        if at < 0 or at + 4 > len(idx):
            raise ValueError(f"Index ends while reading field at 0x{at:x}")
        return struct.unpack_from("<I", idx, at)[0]

    def read_name(at: int, padded: int) -> str:
        if padded <= 0 or padded > 4096 or at < 0 or at + padded > len(idx):
            raise ValueError(f"Invalid name length/offset at 0x{at:x}: {padded}")
        raw = idx[at : at + padded].split(b"\0", 1)[0]
        name = raw.decode("ascii")
        if not name or name in (".", "..") or any(c in name for c in ("/", "\\", ":")):
            raise ValueError(f"Unsafe/empty path component {name!r}")
        return name

    def parse_dir(at: int, prefix: Path = Path()) -> int:
        if at < 0 or at + 16 > len(idx):
            raise ValueError(f"Truncated directory record at 0x{at:x}")
        name_pad, num_files, num_dirs, _reserved = struct.unpack_from("<4I", idx, at)
        if not (0 < name_pad <= 4096) or name_pad % 4:
            raise ValueError(f"Invalid directory record at 0x{at:x}")
        name = read_name(at + 16, name_pad)
        folder = prefix / name
        cur = at + 16 + name_pad
        for _ in range(num_files):
            if cur + 20 > len(idx):
                raise ValueError(f"Truncated file record at 0x{cur:x}")
            name_pad, offset, packed_size, _raw_size, _crc = struct.unpack_from("<5I", idx, cur)
            if not (0 < name_pad <= 4096) or name_pad % 4:
                raise ValueError(f"Invalid file name length at 0x{cur:x}")
            fname = read_name(cur + 20, name_pad)
            if offset + packed_size > len(bad):
                raise ValueError(f"Data range outside ATV.BAD for {folder / fname}")
            files.append((folder / fname, offset, packed_size))
            cur += 20 + name_pad
        for _ in range(num_dirs):
            cur = parse_dir(cur, folder)
        return cur

    while pos < len(idx):
        next_pos = parse_dir(pos)
        if next_pos <= pos:
            raise ValueError(f"Invalid directory traversal at 0x{pos:x}")
        pos = next_pos

    out_dir.mkdir(parents=True, exist_ok=True)
    total_bytes = 0
    root_resolved = out_dir.resolve()
    for rel, offset, packed_size in files:
        dest = out_dir / rel
        dest.parent.mkdir(parents=True, exist_ok=True)
        resolved = dest.resolve()
        if root_resolved not in resolved.parents:
            raise ValueError(f"Output path escapes destination: {rel}")
        payload = bad[offset : offset + packed_size]
        if len(payload) != packed_size:
            raise ValueError(f"Stored size mismatch for {rel}")
        dest.write_bytes(payload)
        total_bytes += packed_size
    return len(files), total_bytes, pos


def main() -> int:
    bundle = Path(__file__).resolve().parents[1]
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--index", type=Path, default=bundle / "game" / "ATV.bah", help="ATV.BAH index file")
    parser.add_argument("--data", type=Path, default=bundle / "game" / "ATV.bad", help="ATV.BAD data file")
    parser.add_argument("--out", type=Path, default=bundle / "game" / "assets" / "extracted_blocks", help="destination for stored blocks")
    args = parser.parse_args()
    count, total, parsed = extract(args.index, args.data, args.out)
    print(f"Extracted {count} stored blocks ({total:,} bytes) into {args.out}")
    print(f"Index parsed through 0x{parsed:x}; no game-specific wrapper decoding was applied.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
