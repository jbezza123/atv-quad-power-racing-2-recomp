#!/usr/bin/env python3
"""
ATV Asset Browser
-----------------
GUI tool for exploring extracted ATV.bah / ATV.bad asset folders.

Features:
  - Recursive folder tree with checkboxes for multi-select
  - Mass-export decoded (decompiled) payloads of checked files
  - Common 8-byte wrapper detection + LZSS decode (flag 0/1)
  - File info, hex dump (raw + decoded), text preview
  - .bog texture preview (DXT1/DXT5 DDS, raw RGBA, paletted)
  - Filter by extension, search by name
  - Safe: never modifies source files

Requires: Python 3 stdlib (tkinter). Optional: Pillow for texture preview
  (pip install Pillow). Without Pillow, texture tab shows dimensions only.
"""

from __future__ import annotations

import os
import struct
import hashlib
import string
import threading
from pathlib import Path
from typing import Optional, Tuple, List, Dict, Any, Set

import tkinter as tk
from tkinter import ttk, filedialog, messagebox, scrolledtext
import math

try:
    from PIL import Image, ImageTk
    HAS_PIL = True
except ImportError:
    HAS_PIL = False

try:
    import numpy as np
    HAS_NUMPY = True
except ImportError:
    HAS_NUMPY = False

try:
    from mesh_tools import (
        load_folder_meshes,
        folder_bounds,
        write_obj,
        render_wireframe,
        extract_meshes,
    )
    HAS_MESH = True
except ImportError:
    HAS_MESH = False


# ---------------------------------------------------------------------------
# Shared LZSS / wrapper decoder
# ---------------------------------------------------------------------------

def decode_wrapper(data: bytes, max_output: int = 64 * 1024 * 1024) -> Tuple[Optional[bytes], Dict[str, Any]]:
    info: Dict[str, Any] = {
        "has_wrapper": False,
        "flag": None,
        "declared_size": None,
        "stored_payload_size": None,
        "decoded_size": None,
        "trailing_bytes": 0,
        "error": None,
        "is_raw": False,
        "is_lzss": False,
    }

    if len(data) < 8:
        info["error"] = "File shorter than 8-byte wrapper"
        return None, info

    flag, declared = struct.unpack_from("<II", data, 0)
    info["flag"] = flag
    info["declared_size"] = declared
    info["stored_payload_size"] = len(data) - 8
    info["has_wrapper"] = True

    if declared > max_output:
        info["error"] = f"Declared size {declared} exceeds safety limit ({max_output})"
        return None, info

    if flag == 0:
        stored = data[8:]
        info["is_raw"] = True
        if len(stored) < declared:
            info["error"] = f"Raw size short: got {len(stored)}, expected {declared}"
            info["decoded_size"] = len(stored)
            return stored, info
        trailing = len(stored) - declared
        info["trailing_bytes"] = trailing
        payload = stored[:declared]
        info["decoded_size"] = len(payload)
        if trailing > 16:
            info["error"] = f"Raw payload has {trailing} trailing bytes (using declared length)"
        return payload, info

    if flag != 1:
        info["error"] = f"Unsupported wrapper flag: {flag}"
        return None, info

    info["is_lzss"] = True
    src = data[8:]
    out = bytearray()
    ring = bytearray(4096)
    write_pos = 4078
    pos = 0

    try:
        while pos < len(src) and len(out) < declared:
            control = src[pos]
            pos += 1
            for bit in range(8):
                if len(out) >= declared:
                    break
                if control & (1 << bit):
                    if pos >= len(src):
                        raise ValueError("truncated LZSS literal")
                    value = src[pos]
                    pos += 1
                    out.append(value)
                    ring[write_pos] = value
                    write_pos = (write_pos + 1) & 0xFFF
                else:
                    if pos + 1 >= len(src):
                        raise ValueError("truncated LZSS reference")
                    a, b = src[pos], src[pos + 1]
                    pos += 2
                    source = a | ((b & 0xF0) << 4)
                    length = (b & 0x0F) + 3
                    for i in range(length):
                        value = ring[(source + i) & 0xFFF]
                        out.append(value)
                        ring[write_pos] = value
                        write_pos = (write_pos + 1) & 0xFFF
                        if len(out) >= declared:
                            break
    except ValueError as e:
        info["error"] = str(e)
        info["decoded_size"] = len(out)
        return bytes(out) if out else None, info

    if len(out) != declared:
        info["error"] = f"LZSS length mismatch: got {len(out)}, expected {declared}"
    else:
        info["error"] = None

    info["decoded_size"] = len(out)
    info["trailing_bytes"] = max(0, len(src) - pos)
    return bytes(out), info


def is_mostly_ascii(data: bytes, threshold: float = 0.85) -> bool:
    if not data:
        return False
    printable = set(bytes(string.printable, "ascii"))
    good = sum(1 for b in data if b in printable or b in (0x09, 0x0A, 0x0D))
    return (good / len(data)) >= threshold


def safe_text(data: bytes, max_chars: int = 200_000) -> str:
    sample = data[:max_chars]
    try:
        text = sample.decode("utf-8", errors="replace")
    except Exception:
        text = sample.decode("latin-1", errors="replace")
    return "".join(ch if ch.isprintable() or ch in "\n\r\t" else f"\\x{ord(ch):02x}" for ch in text)


def hex_dump(data: bytes, offset: int = 0, length: int = 4096, width: int = 16) -> str:
    lines = []
    end = min(len(data), offset + length)
    for i in range(offset, end, width):
        chunk = data[i : i + width]
        hex_part = " ".join(f"{b:02X}" for b in chunk)
        ascii_part = "".join(chr(b) if 32 <= b < 127 else "." for b in chunk)
        lines.append(f"{i:08X}  {hex_part:<{width * 3}}  {ascii_part}")
    if end < len(data):
        lines.append(f"... ({len(data) - end} more bytes)")
    return "\n".join(lines)


def sha256_short(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()[:16]


# ---------------------------------------------------------------------------
# BOG texture decode (DXT1 / DXT5 / raw RGBA / paletted)
# ---------------------------------------------------------------------------

def _expand565(c: int) -> Tuple[int, int, int]:
    r = ((c >> 11) & 0x1F) * 255 // 31
    g = ((c >> 5) & 0x3F) * 255 // 63
    b = (c & 0x1F) * 255 // 31
    return r, g, b


def _decode_dxt1_block(block: bytes, out: bytearray, x: int, y: int, width: int, height: int):
    c0, c1 = struct.unpack_from("<HH", block, 0)
    bits = struct.unpack_from("<I", block, 4)[0]
    r0, g0, b0 = _expand565(c0)
    r1, g1, b1 = _expand565(c1)
    if c0 > c1:
        colors = [
            (r0, g0, b0, 255),
            (r1, g1, b1, 255),
            ((2 * r0 + r1) // 3, (2 * g0 + g1) // 3, (2 * b0 + b1) // 3, 255),
            ((r0 + 2 * r1) // 3, (g0 + 2 * g1) // 3, (b0 + 2 * b1) // 3, 255),
        ]
    else:
        colors = [
            (r0, g0, b0, 255),
            (r1, g1, b1, 255),
            ((r0 + r1) // 2, (g0 + g1) // 2, (b0 + b1) // 2, 255),
            (0, 0, 0, 0),
        ]
    for row in range(4):
        py = y + row
        if py >= height:
            break
        for col in range(4):
            px = x + col
            if px >= width:
                continue
            idx = (bits >> (2 * (row * 4 + col))) & 3
            o = (py * width + px) * 4
            out[o : o + 4] = bytes(colors[idx])


def _decode_dxt5_block(block: bytes, out: bytearray, x: int, y: int, width: int, height: int):
    a0, a1 = block[0], block[1]
    abits = int.from_bytes(block[2:8], "little")
    alphas = [0] * 8
    alphas[0], alphas[1] = a0, a1
    if a0 > a1:
        for i in range(1, 7):
            alphas[i + 1] = ((7 - i) * a0 + i * a1) // 7
    else:
        for i in range(1, 5):
            alphas[i + 1] = ((5 - i) * a0 + i * a1) // 5
        alphas[6], alphas[7] = 0, 255

    c0, c1 = struct.unpack_from("<HH", block, 8)
    bits = struct.unpack_from("<I", block, 12)[0]
    r0, g0, b0 = _expand565(c0)
    r1, g1, b1 = _expand565(c1)
    colors = [
        (r0, g0, b0),
        (r1, g1, b1),
        ((2 * r0 + r1) // 3, (2 * g0 + g1) // 3, (2 * b0 + b1) // 3),
        ((r0 + 2 * r1) // 3, (g0 + 2 * g1) // 3, (b0 + 2 * b1) // 3),
    ]

    for row in range(4):
        py = y + row
        if py >= height:
            break
        for col in range(4):
            px = x + col
            if px >= width:
                continue
            pix = row * 4 + col
            aidx = (abits >> (3 * pix)) & 7
            cidx = (bits >> (2 * pix)) & 3
            o = (py * width + px) * 4
            r, g, b = colors[cidx]
            out[o : o + 4] = bytes((r, g, b, alphas[aidx]))


def decode_dxt_image(dds_payload: bytes, fourcc: bytes) -> Optional[Tuple[int, int, bytes]]:
    """Return (width, height, rgba_bytes) from a full DDS buffer, or None."""
    if len(dds_payload) < 128 or dds_payload[:4] != b"DDS ":
        return None
    height = struct.unpack_from("<I", dds_payload, 12)[0]
    width = struct.unpack_from("<I", dds_payload, 16)[0]
    if width == 0 or height == 0 or width > 8192 or height > 8192:
        return None

    data = dds_payload[128:]
    rgba = bytearray(width * height * 4)
    block_size = 8 if fourcc == b"DXT1" else 16
    bw = (width + 3) // 4
    bh = (height + 3) // 4
    need = bw * bh * block_size
    if len(data) < need:
        data = data + b"\x00" * (need - len(data))

    for by in range(bh):
        for bx in range(bw):
            i = (by * bw + bx) * block_size
            block = data[i : i + block_size]
            if fourcc == b"DXT1":
                _decode_dxt1_block(block, rgba, bx * 4, by * 4, width, height)
            elif fourcc in (b"DXT2", b"DXT3"):
                a_bits = int.from_bytes(block[0:8], "little")
                cblock = block[8:16] if len(block) >= 16 else block[8:] + b"\x00" * 8
                tmp = bytearray(width * height * 4)
                pad = cblock[:8] if len(cblock) >= 8 else cblock + b"\x00" * 8
                _decode_dxt1_block(pad, tmp, bx * 4, by * 4, width, height)
                for row in range(4):
                    py = by * 4 + row
                    if py >= height:
                        break
                    for col in range(4):
                        px = bx * 4 + col
                        if px >= width:
                            continue
                        pix = row * 4 + col
                        a = ((a_bits >> (4 * pix)) & 0xF) * 17
                        o = (py * width + px) * 4
                        rgba[o : o + 3] = tmp[o : o + 3]
                        rgba[o + 3] = a
            else:
                _decode_dxt5_block(block, rgba, bx * 4, by * 4, width, height)
    return width, height, bytes(rgba)


def _morton_unswizzle(width: int, height: int, src: bytes, bpp: int) -> bytes:
    """Xbox-style Morton (Z-order) unswizzle for bpp=1 (indices) or bpp=4 (RGBA)."""
    out = bytearray(width * height * bpp)

    def morton(x: int, y: int) -> int:
        v = 0
        bit = 0
        xx, yy = x, y
        while xx or yy:
            v |= (xx & 1) << bit
            v |= (yy & 1) << (bit + 1)
            xx >>= 1
            yy >>= 1
            bit += 2
        return v

    for y in range(height):
        for x in range(width):
            src_i = morton(x, y)
            if src_i * bpp + bpp > len(src):
                continue
            dst_i = (y * width + x) * bpp
            out[dst_i : dst_i + bpp] = src[src_i * bpp : src_i * bpp + bpp]
    return bytes(out)


def bog_to_rgba(decoded: bytes) -> Tuple[Optional[Tuple[int, int, bytes]], Dict[str, Any]]:
    """Parse decoded BOG payload → (width, height, rgba) or None. Returns (image_or_None, meta)."""
    meta: Dict[str, Any] = {"error": None, "format": None, "width": 0, "height": 0}
    if not decoded or len(decoded) < 40:
        meta["error"] = "Too short for BOG header"
        return None, meta
    if not decoded.startswith(b"BOG "):
        meta["error"] = "Missing BOG signature"
        return None, meta

    fmt_code, width, height = struct.unpack_from("<III", decoded, 0x0C)
    meta["format"] = fmt_code
    meta["width"] = width
    meta["height"] = height
    payload = decoded[0x28:]

    if width == 0 or height == 0 or width > 8192 or height > 8192:
        meta["error"] = f"Bad dimensions {width}x{height}"
        return None, meta

    if payload[:4] == b"DDS " or fmt_code in (0x100, 0x200):
        fourcc = b"DXT1" if fmt_code == 0x100 else b"DXT5"
        if payload[:4] == b"DDS ":
            fourcc = payload[84:88]
            if fourcc not in (b"DXT1", b"DXT2", b"DXT3", b"DXT4", b"DXT5"):
                fourcc = b"DXT1" if fmt_code == 0x100 else b"DXT5"
            result = decode_dxt_image(payload, fourcc)
            if result:
                meta["format_name"] = fourcc.decode("ascii", errors="replace")
                return result, meta
        meta["error"] = "DXT decode failed"
        return None, meta

    if fmt_code == 0x20:
        need = width * height * 4
        if len(payload) < need:
            meta["error"] = f"RGBA payload short ({len(payload)} < {need})"
            return None, meta
        try:
            linear = _morton_unswizzle(width, height, payload[:need], 4)
            meta["format_name"] = "RGBA swizzled"
            return (width, height, linear), meta
        except Exception as e:
            meta["error"] = f"Unswizzle failed: {e}"
            return None, meta

    if fmt_code == 0x40:
        if len(payload) < 1024 + width * height:
            meta["error"] = "Palette payload short"
            return None, meta
        palette = payload[:1024]
        indices = payload[1024 : 1024 + width * height]
        try:
            linear_idx = _morton_unswizzle(width, height, indices, 1)
            rgba = bytearray(width * height * 4)
            for i, idx in enumerate(linear_idx):
                rgba[i * 4 : i * 4 + 4] = palette[idx * 4 : idx * 4 + 4]
            meta["format_name"] = "paletted RGBA"
            return (width, height, bytes(rgba)), meta
        except Exception as e:
            meta["error"] = f"Palette decode failed: {e}"
            return None, meta

    meta["error"] = f"Unsupported BOG format code 0x{fmt_code:x}"
    return None, meta


FORMAT_HINTS = {
    ".bog": "BOG 1.01 texture. DXT/custom; preview available.",
    ".rom": "ROM stream / ATC mesh data. LZSS common.",
    ".shm": "SHM mesh container.",
    ".cuban": "CUBAN 1.02 animation data.",
    ".params": "Vehicle parameter text (CRLF) after decode.",
    ".skel": "Skeleton description text.",
    ".asm": "Wrapped vertex-shader assembly (ASCII).",
    ".pts": "POINT 1.00 tables — 80-byte records.",
    ".cam": "CAM v1.00 camera data.",
    ".aid": "AID 1.02 level data.",
    ".row": "ROW 2.25 level/world data.",
    ".viz": "VIZ level/world data.",
    ".nin": "Level-specific binary.",
    ".kdt": "Level data with size prefix.",
    ".bed": "Bitmap/font/sprite metadata.",
    ".bas": "BAS 1.02.",
    ".hsc": "Binary assets.",
    ".ink": "Binary level/model assets.",
    ".xml": "Binary/transformed or real XML after decode.",
    ".txt": "Mixed text/binary.",
    ".xwb": "XWB / WBND sound banks.",
    ".ttf": "Wrapped font (may use different outer flag).",
    ".roo": "ROO object asset.",
}


def guess_magic(data: bytes) -> str:
    if not data:
        return "(empty)"
    if data.startswith(b"BOG "):
        return "BOG 1.01 texture"
    if data.startswith(b"ROM "):
        return "ROM stream / mesh"
    if data.startswith(b"DDS "):
        return "DDS texture"
    if data.startswith(b"CUBAN"):
        return "CUBAN animation"
    if data.startswith(b"POINT"):
        return "POINT 1.00 table"
    if data.startswith(b"CAM "):
        return "CAM camera"
    if data.startswith(b"AID "):
        return "AID 1.02 level"
    if data.startswith(b"ROW "):
        return "ROW 2.25 world"
    if data.startswith(b"BAS "):
        return "BAS 1.02"
    if data.startswith(b"OBJECT"):
        return "OBJECT / ROO"
    if data.startswith(b"WBND") or data.startswith(b"SampleBank"):
        return "XWB / SampleBank"
    if data.startswith(b"<Root") or data.startswith(b"<?xml"):
        return "XML text"
    if data[:2] == b"\x01\x01" and b".tga" in data[:64]:
        return "BED atlas/meta (TGA ref)"
    head = data[:32]
    if is_mostly_ascii(head, 0.7):
        return "ASCII / text-like"
    return f"binary ({data[:4].hex()})"


# ---------------------------------------------------------------------------
# Main application
# ---------------------------------------------------------------------------

CHECK_ON = "☑ "
CHECK_OFF = "☐ "


class AssetBrowser(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("ATV Asset Browser")
        self.geometry("1400x860")
        self.minsize(960, 640)

        self.root_path: Optional[Path] = None
        self.current_file: Optional[Path] = None
        self.raw_data: Optional[bytes] = None
        self.decoded_data: Optional[bytes] = None
        self.wrapper_info: Dict[str, Any] = {}
        self.file_count = 0
        self.ext_counts: Dict[str, int] = {}
        self.checked: Set[str] = set()
        self._photo = None
        self._item_path: Dict[str, str] = {}
        self._item_is_dir: Dict[str, bool] = {}

        self._build_ui()
        self._bind_keys()

    def _build_ui(self):
        menubar = tk.Menu(self)
        file_menu = tk.Menu(menubar, tearoff=0)
        file_menu.add_command(label="Open Folder…", command=self.open_folder, accelerator="Ctrl+O")
        file_menu.add_command(label="View Model Folder…", command=self.view_model_folder)
        file_menu.add_command(label="Export Decoded (current)…", command=self.export_decoded, accelerator="Ctrl+E")
        file_menu.add_command(label="Export Checked (raw decode)…", command=self.export_checked, accelerator="Ctrl+Shift+E")
        file_menu.add_separator()
        file_menu.add_command(label="Convert All Textures → PNG…", command=self.convert_all_textures)
        file_menu.add_command(label="Convert for Modern Engine…", command=self.convert_for_engine)
        file_menu.add_separator()
        file_menu.add_command(label="Exit", command=self.destroy)
        menubar.add_cascade(label="File", menu=file_menu)

        edit_menu = tk.Menu(menubar, tearoff=0)
        edit_menu.add_command(label="Check All Visible", command=self.check_all_visible)
        edit_menu.add_command(label="Uncheck All", command=self.uncheck_all)
        edit_menu.add_command(label="Invert Checks", command=self.invert_checks)
        menubar.add_cascade(label="Selection", menu=edit_menu)

        view_menu = tk.Menu(menubar, tearoff=0)
        view_menu.add_command(label="Expand All", command=self._expand_all)
        view_menu.add_command(label="Collapse All", command=self._collapse_all)
        menubar.add_cascade(label="View", menu=view_menu)

        help_menu = tk.Menu(menubar, tearoff=0)
        help_menu.add_command(label="About", command=self._show_about)
        menubar.add_cascade(label="Help", menu=help_menu)
        self.config(menu=menubar)

        toolbar = ttk.Frame(self, padding=(6, 4))
        toolbar.pack(side=tk.TOP, fill=tk.X)

        ttk.Button(toolbar, text="Open Folder", command=self.open_folder).pack(side=tk.LEFT, padx=(0, 6))
        ttk.Button(toolbar, text="View Model Folder", command=self.view_model_folder).pack(side=tk.LEFT, padx=(0, 6))
        ttk.Button(toolbar, text="Textures→PNG", command=self.convert_all_textures).pack(side=tk.LEFT, padx=(0, 6))
        ttk.Button(toolbar, text="Convert for Engine", command=self.convert_for_engine).pack(side=tk.LEFT, padx=(0, 6))
        ttk.Button(toolbar, text="Export Checked", command=self.export_checked).pack(side=tk.LEFT, padx=(0, 10))
        ttk.Button(toolbar, text="Check All", command=self.check_all_visible, width=10).pack(side=tk.LEFT, padx=(0, 2))
        ttk.Button(toolbar, text="Uncheck", command=self.uncheck_all, width=8).pack(side=tk.LEFT, padx=(0, 8))

        ttk.Label(toolbar, text="Filter:").pack(side=tk.LEFT)
        self.filter_var = tk.StringVar(value="*")
        self.filter_combo = ttk.Combobox(
            toolbar, textvariable=self.filter_var, width=11,
            values=["*", ".bog", ".rom", ".shm", ".cuban", ".params", ".skel",
                    ".asm", ".pts", ".cam", ".aid", ".row", ".viz", ".nin",
                    ".kdt", ".bed", ".bas", ".hsc", ".ink", ".xml", ".txt",
                    ".xwb", ".ttf", ".roo", "(no ext)"]
        )
        self.filter_combo.pack(side=tk.LEFT, padx=(4, 6))
        self.filter_combo.bind("<<ComboboxSelected>>", lambda e: self._apply_filter())
        self.filter_combo.bind("<Return>", lambda e: self._apply_filter())

        ttk.Label(toolbar, text="Search:").pack(side=tk.LEFT)
        self.search_var = tk.StringVar()
        search_entry = ttk.Entry(toolbar, textvariable=self.search_var, width=18)
        search_entry.pack(side=tk.LEFT, padx=(4, 4))
        search_entry.bind("<Return>", lambda e: self._apply_filter())
        ttk.Button(toolbar, text="Go", command=self._apply_filter, width=4).pack(side=tk.LEFT, padx=(0, 8))

        self.status_var = tk.StringVar(value="Open a folder to begin.")
        ttk.Label(toolbar, textvariable=self.status_var).pack(side=tk.RIGHT, padx=8)

        paned = ttk.Panedwindow(self, orient=tk.HORIZONTAL)
        paned.pack(fill=tk.BOTH, expand=True, padx=6, pady=(0, 4))

        left = ttk.Frame(paned)
        paned.add(left, weight=1)

        tree_frame = ttk.Frame(left)
        tree_frame.pack(fill=tk.BOTH, expand=True)

        self.tree = ttk.Treeview(tree_frame, columns=("size",), show="tree headings", selectmode="browse")
        self.tree.heading("#0", text="Name  (click ☐ to check)", anchor=tk.W)
        self.tree.heading("size", text="Size", anchor=tk.E)
        self.tree.column("#0", width=300, minwidth=140)
        self.tree.column("size", width=80, minwidth=60, anchor=tk.E)

        vsb = ttk.Scrollbar(tree_frame, orient=tk.VERTICAL, command=self.tree.yview)
        hsb = ttk.Scrollbar(tree_frame, orient=tk.HORIZONTAL, command=self.tree.xview)
        self.tree.configure(yscrollcommand=vsb.set, xscrollcommand=hsb.set)
        self.tree.grid(row=0, column=0, sticky="nsew")
        vsb.grid(row=0, column=1, sticky="ns")
        hsb.grid(row=1, column=0, sticky="ew")
        tree_frame.rowconfigure(0, weight=1)
        tree_frame.columnconfigure(0, weight=1)

        self.tree.bind("<<TreeviewSelect>>", self._on_tree_select)
        self.tree.bind("<Button-1>", self._on_tree_click, add="+")

        self.check_label = ttk.Label(left, text="0 checked")
        self.check_label.pack(side=tk.BOTTOM, anchor=tk.W, padx=4, pady=2)

        right = ttk.Frame(paned)
        paned.add(right, weight=3)

        self.notebook = ttk.Notebook(right)
        self.notebook.pack(fill=tk.BOTH, expand=True)

        self.info_text = scrolledtext.ScrolledText(self.notebook, wrap=tk.WORD, font=("Consolas", 10))
        self.notebook.add(self.info_text, text="Info")

        tex_frame = ttk.Frame(self.notebook)
        self.notebook.add(tex_frame, text="Texture")
        self.tex_info = ttk.Label(tex_frame, text="Select a .bog file to preview.")
        self.tex_info.pack(side=tk.TOP, anchor=tk.W, padx=6, pady=4)
        self.tex_canvas = tk.Canvas(tex_frame, bg="#2a2a2a", highlightthickness=0)
        self.tex_canvas.pack(fill=tk.BOTH, expand=True, padx=4, pady=4)

        # Model tab — multi-part mesh viewer for car/character folders
        model_frame = ttk.Frame(self.notebook)
        self.notebook.add(model_frame, text="Model")
        model_bar = ttk.Frame(model_frame)
        model_bar.pack(side=tk.TOP, fill=tk.X, padx=4, pady=4)
        ttk.Button(model_bar, text="View this file", command=self.view_model_file).pack(
            side=tk.LEFT, padx=(0, 4)
        )
        ttk.Button(model_bar, text="View whole folder", command=self.view_model_folder).pack(
            side=tk.LEFT, padx=(0, 6)
        )
        ttk.Button(model_bar, text="Export OBJ…", command=self.export_model_obj).pack(side=tk.LEFT, padx=(0, 6))
        self.model_info = ttk.Label(
            model_bar,
            text="Click a .rom/.shm to view that part — or “View whole folder” for the full vehicle.",
        )
        self.model_info.pack(side=tk.LEFT, padx=8)
        self.model_canvas = tk.Canvas(model_frame, bg="#1a1a1e", highlightthickness=0)
        self.model_canvas.pack(fill=tk.BOTH, expand=True, padx=4, pady=4)
        self.model_canvas.bind("<ButtonPress-1>", self._model_drag_start)
        self.model_canvas.bind("<B1-Motion>", self._model_drag_move)
        self.model_canvas.bind("<ButtonRelease-1>", self._model_drag_end)
        self.model_canvas.bind("<MouseWheel>", self._model_zoom)  # Windows
        self.model_canvas.bind("<Button-4>", lambda e: self._model_zoom_dir(1))  # Linux
        self.model_canvas.bind("<Button-5>", lambda e: self._model_zoom_dir(-1))
        self._model_parts = []
        self._model_center = None
        self._model_radius = 1.0
        self._model_yaw = 35.0
        self._model_pitch = 20.0
        self._model_zoom = 1.0
        self._model_drag = None
        self._model_photo = None
        self._model_folder = None

        self.hex_raw = scrolledtext.ScrolledText(self.notebook, wrap=tk.NONE, font=("Consolas", 9))
        self.notebook.add(self.hex_raw, text="Hex (raw)")

        self.hex_dec = scrolledtext.ScrolledText(self.notebook, wrap=tk.NONE, font=("Consolas", 9))
        self.notebook.add(self.hex_dec, text="Hex (decoded)")

        self.text_preview = scrolledtext.ScrolledText(self.notebook, wrap=tk.NONE, font=("Consolas", 10))
        self.notebook.add(self.text_preview, text="Text preview")

        self.bottom = ttk.Label(self, text="", relief=tk.SUNKEN, anchor=tk.W, padding=(6, 2))
        self.bottom.pack(side=tk.BOTTOM, fill=tk.X)

    def _bind_keys(self):
        self.bind("<Control-o>", lambda e: self.open_folder())
        self.bind("<Control-O>", lambda e: self.open_folder())
        self.bind("<Control-e>", lambda e: self.export_decoded())
        self.bind("<Control-E>", lambda e: self.export_decoded())
        self.bind("<Control-Shift-E>", lambda e: self.export_checked())
        self.bind("<space>", self._toggle_selected_check)

    # ----- Checkboxes -----

    def _on_tree_click(self, event):
        region = self.tree.identify("region", event.x, event.y)
        if region != "tree":
            return
        item = self.tree.identify_row(event.y)
        if not item:
            return
        bbox = self.tree.bbox(item, column="#0")
        if bbox:
            x0 = bbox[0]
            if event.x - x0 < 28:
                self._toggle_item(item)
                return "break"

    def _toggle_selected_check(self, event=None):
        sel = self.tree.selection()
        if sel:
            self._toggle_item(sel[0])

    def _toggle_item(self, item: str):
        is_dir = self._item_is_dir.get(item, False)
        if is_dir:
            paths = self._collect_file_paths_under(item)
            if not paths:
                return
            if any(p not in self.checked for p in paths):
                for p in paths:
                    self.checked.add(p)
            else:
                for p in paths:
                    self.checked.discard(p)
            self._refresh_check_marks_under(item)
        else:
            path = self._item_path.get(item)
            if not path:
                return
            if path in self.checked:
                self.checked.discard(path)
            else:
                self.checked.add(path)
            self._set_item_check_mark(item, path in self.checked)
        self._update_check_label()

    def _collect_file_paths_under(self, item: str) -> List[str]:
        result = []
        for child in self.tree.get_children(item):
            if self._item_is_dir.get(child, False):
                result.extend(self._collect_file_paths_under(child))
            else:
                p = self._item_path.get(child)
                if p:
                    result.append(p)
        return result

    def _refresh_check_marks_under(self, item: str):
        for child in self.tree.get_children(item):
            if self._item_is_dir.get(child, False):
                self._refresh_check_marks_under(child)
                paths = self._collect_file_paths_under(child)
                mark = bool(paths) and all(p in self.checked for p in paths)
                self._set_dir_check_mark(child, mark)
            else:
                p = self._item_path.get(child)
                if p:
                    self._set_item_check_mark(child, p in self.checked)
        if self._item_is_dir.get(item, False):
            paths = self._collect_file_paths_under(item)
            mark = bool(paths) and all(p in self.checked for p in paths)
            self._set_dir_check_mark(item, mark)

    def _set_item_check_mark(self, item: str, on: bool):
        text = self.tree.item(item, "text")
        name = text[2:] if text.startswith((CHECK_ON, CHECK_OFF)) else text
        self.tree.item(item, text=(CHECK_ON if on else CHECK_OFF) + name)

    def _set_dir_check_mark(self, item: str, on: bool):
        self._set_item_check_mark(item, on)

    def _update_check_label(self):
        self.check_label.config(text=f"{len(self.checked)} checked")

    def check_all_visible(self):
        for iid, path in self._item_path.items():
            self.checked.add(path)
            self._set_item_check_mark(iid, True)
        for iid, is_dir in self._item_is_dir.items():
            if is_dir:
                paths = self._collect_file_paths_under(iid)
                mark = bool(paths) and all(p in self.checked for p in paths)
                self._set_dir_check_mark(iid, mark)
        self._update_check_label()

    def uncheck_all(self):
        self.checked.clear()
        for iid in list(self._item_path.keys()) + [i for i, d in self._item_is_dir.items() if d]:
            text = self.tree.item(iid, "text")
            name = text[2:] if text.startswith((CHECK_ON, CHECK_OFF)) else text
            self.tree.item(iid, text=CHECK_OFF + name)
        self._update_check_label()

    def invert_checks(self):
        for iid, path in self._item_path.items():
            if path in self.checked:
                self.checked.discard(path)
                self._set_item_check_mark(iid, False)
            else:
                self.checked.add(path)
                self._set_item_check_mark(iid, True)
        for iid, is_dir in self._item_is_dir.items():
            if is_dir:
                paths = self._collect_file_paths_under(iid)
                mark = bool(paths) and all(p in self.checked for p in paths)
                self._set_dir_check_mark(iid, mark)
        self._update_check_label()

    # ----- Folder loading -----

    def open_folder(self):
        path = filedialog.askdirectory(title="Select extracted assets folder")
        if not path:
            return
        self.root_path = Path(path)
        self.checked.clear()
        self._item_path.clear()
        self._item_is_dir.clear()
        self.status_var.set("Scanning…")
        self.update_idletasks()
        threading.Thread(target=self._load_tree, daemon=True).start()

    def _load_tree(self):
        try:
            self.file_count = 0
            self.ext_counts.clear()
            all_files: List[Path] = []
            for dirpath, dirnames, filenames in os.walk(self.root_path):
                dirnames.sort(key=str.lower)
                for name in sorted(filenames, key=str.lower):
                    p = Path(dirpath) / name
                    all_files.append(p)
                    self.file_count += 1
                    ext = p.suffix.lower() or "(no ext)"
                    self.ext_counts[ext] = self.ext_counts.get(ext, 0) + 1
            self.after(0, lambda: self._populate_tree(all_files))
        except Exception as e:
            self.after(0, lambda: messagebox.showerror("Error", f"Failed to scan folder:\n{e}"))

    def _populate_tree(self, all_files: List[Path]):
        self.tree.delete(*self.tree.get_children())
        self._item_path.clear()
        self._item_is_dir.clear()
        if not self.root_path:
            return

        dir_nodes: Dict[str, str] = {}
        root_id = self.tree.insert("", "end", text=CHECK_OFF + self.root_path.name, values=("",), open=True)
        dir_nodes[""] = root_id
        self._item_is_dir[root_id] = True

        filter_ext = self.filter_var.get().strip().lower()
        search = self.search_var.get().strip().lower()

        shown = 0
        for full in all_files:
            try:
                rel = full.relative_to(self.root_path)
            except ValueError:
                continue

            ext = full.suffix.lower() or "(no ext)"
            if filter_ext and filter_ext != "*":
                if filter_ext == "(no ext)":
                    if full.suffix:
                        continue
                elif ext != filter_ext:
                    continue
            if search and search not in full.name.lower() and search not in str(rel).lower():
                continue

            parts = list(rel.parts[:-1])
            parent_id = root_id
            for i, part in enumerate(parts):
                key = "/".join(parts[: i + 1])
                if key not in dir_nodes:
                    nid = self.tree.insert(parent_id, "end", text=CHECK_OFF + part, values=("",), open=False)
                    dir_nodes[key] = nid
                    self._item_is_dir[nid] = True
                parent_id = dir_nodes[key]

            size_str = self._fmt_size(full.stat().st_size)
            checked = str(full) in self.checked
            mark = CHECK_ON if checked else CHECK_OFF
            iid = self.tree.insert(parent_id, "end", text=mark + full.name, values=(size_str,))
            self._item_path[iid] = str(full)
            self._item_is_dir[iid] = False
            shown += 1

        exts = sorted(self.ext_counts.keys(), key=lambda e: (-self.ext_counts[e], e))
        self.filter_combo["values"] = ["*"] + exts
        self.status_var.set(f"{self.root_path.name}  —  {self.file_count} files  |  showing {shown}")
        self.bottom.config(
            text="  |  ".join(f"{e}: {c}" for e, c in sorted(self.ext_counts.items(), key=lambda x: -x[1])[:12])
        )
        self._update_check_label()

    def _apply_filter(self):
        if self.root_path:
            self.status_var.set("Filtering…")
            self.update_idletasks()
            threading.Thread(target=self._load_tree, daemon=True).start()

    def _expand_all(self):
        def expand(item):
            self.tree.item(item, open=True)
            for child in self.tree.get_children(item):
                expand(child)
        for root in self.tree.get_children():
            expand(root)

    def _collapse_all(self):
        def collapse(item):
            self.tree.item(item, open=False)
            for child in self.tree.get_children(item):
                collapse(child)
        for root in self.tree.get_children():
            collapse(root)

    # ----- Selection / load file -----

    def _on_tree_select(self, event=None):
        sel = self.tree.selection()
        if not sel:
            return
        item = sel[0]
        if self._item_is_dir.get(item, False):
            return
        path = self._item_path.get(item)
        if path:
            self._load_file(Path(path))

    def _load_file(self, path: Path):
        self.current_file = path
        self.raw_data = None
        self.decoded_data = None
        self.wrapper_info = {}
        self._photo = None

        try:
            data = path.read_bytes()
        except Exception as e:
            messagebox.showerror("Read error", str(e))
            return

        self.raw_data = data
        decoded, info = decode_wrapper(data)
        self.decoded_data = decoded
        self.wrapper_info = info

        self._update_info_tab(path, data, decoded, info)
        self._update_hex_tab(self.hex_raw, data, "Raw file")
        if decoded is not None:
            self._update_hex_tab(self.hex_dec, decoded, "Decoded payload")
        else:
            self.hex_dec.delete("1.0", tk.END)
            self.hex_dec.insert(tk.END, "(decode failed or not applicable)\n")
            if info.get("error"):
                self.hex_dec.insert(tk.END, f"Error: {info['error']}\n")

        preview_src = decoded if decoded is not None else data
        self.text_preview.delete("1.0", tk.END)
        if is_mostly_ascii(preview_src[:4096], 0.75):
            self.text_preview.insert(tk.END, safe_text(preview_src))
        else:
            self.text_preview.insert(
                tk.END,
                "(does not look like text — switch to Hex / Texture tabs)\n\n"
                f"First 256 bytes as escaped:\n{safe_text(preview_src[:256])}"
            )

        self._update_texture_tab(path, decoded)
        self._update_model_from_file(path, decoded)
        self.status_var.set(f"{path.name}  —  {self._fmt_size(len(data))}")

    def _update_model_from_file(self, path: Path, decoded: Optional[bytes]):
        """When a single .rom/.shm is selected, show only that file's mesh(es)."""
        if not HAS_MESH or not HAS_NUMPY:
            return
        ext = path.suffix.lower()
        if ext not in (".rom", ".shm") or decoded is None:
            # Don't clear an existing folder view unless we're looking at a non-mesh file
            # and user explicitly needs single-file — clear only for non-mesh
            if ext not in (".rom", ".shm", ".bog", ".pts", ".params"):
                return
            if ext in (".bog", ".pts", ".params"):
                return
            return

        try:
            meshes = extract_meshes(decoded)
        except Exception as e:
            self.model_info.config(text=f"{path.name}: mesh parse error — {e}")
            return

        if not meshes:
            self._model_parts = []
            self.model_info.config(
                text=f"{path.name}: no triangle mesh blocks found in this file."
            )
            self.model_canvas.delete("all")
            return

        parts = []
        for mi, m in enumerate(meshes):
            m = dict(m)
            m["source"] = path.stem
            m["file"] = path.name
            m["part_index"] = mi
            m["name"] = f"{path.stem}_{mi}" if mi else path.stem
            parts.append(m)

        self._model_parts = parts
        self._model_folder = path.parent
        self._model_center, self._model_radius = folder_bounds(parts)
        # Keep camera if already set, otherwise defaults
        if not hasattr(self, "_model_yaw") or self._model_yaw is None:
            self._model_yaw = 35.0
            self._model_pitch = 20.0
            self._model_zoom = 1.0
        total_v = sum(m["V"] for m in parts)
        total_t = sum(m["T"] for m in parts)
        self.model_info.config(
            text=f"{path.name} (single file):  {len(parts)} mesh block(s), "
                 f"{total_v} verts, {total_t} tris   —  use “View Model Folder” for full vehicle"
        )
        self._redraw_model()

    def _update_texture_tab(self, path: Path, decoded: Optional[bytes]):
        self.tex_canvas.delete("all")
        if path.suffix.lower() != ".bog" or decoded is None:
            self.tex_info.config(text="Select a .bog file to preview texture.")
            return

        img_data, meta = bog_to_rgba(decoded)
        if img_data is None:
            self.tex_info.config(
                text=f"BOG: {meta.get('width', '?')}x{meta.get('height', '?')}  "
                     f"fmt=0x{meta.get('format', 0):x}  —  {meta.get('error', 'no preview')}"
            )
            return

        w, h, rgba = img_data
        fmt_name = meta.get("format_name", f"0x{meta.get('format', 0):x}")
        self.tex_info.config(text=f"{w}×{h}  {fmt_name}  ({len(rgba):,} bytes RGBA)")

        if not HAS_PIL:
            self.tex_canvas.create_text(
                20, 20, anchor=tk.NW, fill="white",
                text="Install Pillow for image preview:\n  pip install Pillow",
                font=("Consolas", 12),
            )
            return

        try:
            img = Image.frombytes("RGBA", (w, h), rgba)
            self.tex_canvas.update_idletasks()
            cw = max(self.tex_canvas.winfo_width(), 200)
            ch = max(self.tex_canvas.winfo_height(), 200)
            scale = min(cw / w, ch / h, 4.0)
            nw, nh = max(1, int(w * scale)), max(1, int(h * scale))
            if (nw, nh) != (w, h):
                img = img.resize((nw, nh), Image.NEAREST if scale >= 2 else Image.BILINEAR)
            self._photo = ImageTk.PhotoImage(img)
            self.tex_canvas.create_image(cw // 2, ch // 2, image=self._photo, anchor=tk.CENTER)
        except Exception as e:
            self.tex_info.config(text=f"Preview error: {e}")

    def _update_info_tab(self, path: Path, raw: bytes, decoded: Optional[bytes], info: Dict[str, Any]):
        self.info_text.delete("1.0", tk.END)
        lines = []
        lines.append(f"Path          : {path}")
        try:
            rel = path.relative_to(self.root_path) if self.root_path else path
            lines.append(f"Relative      : {rel}")
        except Exception:
            pass
        lines.append(f"Size (stored) : {len(raw):,} bytes  ({self._fmt_size(len(raw))})")
        lines.append(f"SHA-256 (16)  : {sha256_short(raw)}")
        lines.append("")

        ext = path.suffix.lower()
        hint = FORMAT_HINTS.get(ext, "No specific documentation entry yet.")
        lines.append(f"Extension     : {ext or '(none)'}")
        lines.append(f"Hint          : {hint}")
        lines.append("")

        lines.append("── Outer wrapper ──")
        if info.get("has_wrapper"):
            lines.append(
                f"  Flag        : {info['flag']}  "
                f"({'LZSS' if info.get('is_lzss') else 'raw' if info.get('is_raw') else 'unknown'})"
            )
            lines.append(f"  Declared    : {info['declared_size']:,} bytes")
            lines.append(f"  Stored body : {info['stored_payload_size']:,} bytes")
            if info.get("decoded_size") is not None:
                lines.append(f"  Decoded     : {info['decoded_size']:,} bytes")
            if info.get("trailing_bytes"):
                lines.append(f"  Trailing    : {info['trailing_bytes']} byte(s) after stream")
            if info.get("error"):
                lines.append(f"  Status      : NOTE — {info['error']}")
            else:
                lines.append("  Status      : OK")
        else:
            lines.append(f"  {info.get('error', 'No wrapper detected')}")
        lines.append("")

        if decoded is not None:
            lines.append("── Decoded payload ──")
            lines.append(f"  Size        : {len(decoded):,} bytes")
            lines.append(f"  SHA-256 (16): {sha256_short(decoded)}")
            lines.append(f"  Magic guess : {guess_magic(decoded)}")
            head = decoded[:64]
            lines.append(f"  Head (hex)  : {head.hex()}")
            if is_mostly_ascii(decoded[:128], 0.6):
                preview = safe_text(decoded[:200]).replace("\n", "\\n").replace("\r", "\\r")
                lines.append(f"  Head (text) : {preview[:120]}…")
            if ext == ".bog" and decoded.startswith(b"BOG "):
                fmt_code, w, h = struct.unpack_from("<III", decoded, 0x0C)
                lines.append(f"  BOG format  : 0x{fmt_code:x}  {w}×{h}")
            lines.append("")

        lines.append("Source files are never modified. Exports write new copies only.")
        self.info_text.insert(tk.END, "\n".join(lines))

    def _update_hex_tab(self, widget: scrolledtext.ScrolledText, data: bytes, label: str):
        widget.delete("1.0", tk.END)
        widget.insert(tk.END, f"{label} — {len(data):,} bytes\n\n")
        widget.insert(tk.END, hex_dump(data, length=8192))

    # ----- Model viewer (single file or multi-part folder) -----

    def _select_model_tab(self):
        for i in range(self.notebook.index("end")):
            if self.notebook.tab(i, "text") == "Model":
                self.notebook.select(i)
                break

    def view_model_file(self):
        """Show mesh(es) from the currently selected .rom / .shm only."""
        if not HAS_MESH or not HAS_NUMPY:
            messagebox.showerror(
                "Model viewer",
                "Needs mesh_tools.py + numpy (pip install numpy).",
            )
            return
        if not self.current_file:
            messagebox.showinfo("Model viewer", "Select a .rom or .shm file first.")
            return
        ext = self.current_file.suffix.lower()
        if ext not in (".rom", ".shm"):
            messagebox.showinfo(
                "Model viewer",
                f"{self.current_file.name} is not a .rom/.shm mesh file.\n"
                "Select a mesh file, or use “View whole folder”.",
            )
            return
        if not self.decoded_data:
            messagebox.showinfo("Model viewer", "Could not decode this file.")
            return
        self._update_model_from_file(self.current_file, self.decoded_data)
        if not self._model_parts:
            messagebox.showinfo(
                "Model viewer",
                f"No mesh blocks found in {self.current_file.name}.",
            )
            return
        self._model_yaw = 35.0
        self._model_pitch = 20.0
        self._model_zoom = 1.0
        self._select_model_tab()
        self._redraw_model()

    def view_model_folder(self):
        """Load all meshes from the folder containing the current file (or ask)."""
        if not HAS_MESH or not HAS_NUMPY:
            messagebox.showerror(
                "Model viewer",
                "Model viewing needs mesh_tools.py and numpy.\n"
                "Install:  pip install numpy\n"
                "Keep mesh_tools.py next to this script.",
            )
            return
        folder = None
        if self.current_file:
            folder = self.current_file.parent
        elif self.root_path:
            folder = self.root_path
        if folder is None:
            path = filedialog.askdirectory(title="Select a model folder (e.g. Cars/ATC)")
            if not path:
                return
            folder = Path(path)

        parts = load_folder_meshes(folder)
        if not parts:
            messagebox.showinfo(
                "Model viewer",
                f"No mesh blocks found in:\n{folder}\n\n"
                "Expected .rom / .shm with ROM 1.26 triangle meshes.",
            )
            return

        self._model_parts = parts
        self._model_folder = folder
        self._model_center, self._model_radius = folder_bounds(parts)
        self._model_yaw = 35.0
        self._model_pitch = 20.0
        self._model_zoom = 1.0
        total_v = sum(m["V"] for m in parts)
        total_t = sum(m["T"] for m in parts)
        names = ", ".join(sorted({m["source"] for m in parts})[:8])
        self.model_info.config(
            text=f"{folder.name} (whole folder):  {len(parts)} parts, "
                 f"{total_v} verts, {total_t} tris  [{names}]"
        )
        self._select_model_tab()
        self._redraw_model()

    def export_model_obj(self):
        if not self._model_parts:
            messagebox.showinfo("Export OBJ", "Load a model folder first (View Model Folder).")
            return
        path = filedialog.asksaveasfilename(
            title="Export combined OBJ",
            initialfile=(self._model_folder.name if self._model_folder else "model") + ".obj",
            defaultextension=".obj",
            filetypes=[("Wavefront OBJ", "*.obj"), ("All files", "*.*")],
        )
        if not path:
            return
        out = Path(path)
        mtl_name = out.stem + ".mtl"
        write_obj(self._model_parts, out, mtl_name=mtl_name)

        # MTL + texture PNG if a .bog exists in the folder
        mtl_path = out.with_suffix(".mtl")
        tex_note = ""
        if self._model_folder and HAS_PIL:
            bogs = list(self._model_folder.glob("*.bog"))
            if bogs:
                data = bogs[0].read_bytes()
                decoded, _ = decode_wrapper(data)
                if decoded:
                    img_data, meta = bog_to_rgba(decoded)
                    if img_data:
                        w, h, rgba = img_data
                        png_path = out.with_name(out.stem + "_texture.png")
                        Image.frombytes("RGBA", (w, h), rgba).save(png_path)
                        mtl_path.write_text(
                            f"newmtl material0\n"
                            f"Ka 1 1 1\nKd 1 1 1\nKs 0.1 0.1 0.1\n"
                            f"map_Kd {png_path.name}\n",
                            encoding="utf-8",
                        )
                        tex_note = f"\n+ texture {png_path.name}"
        if not tex_note:
            mtl_path.write_text("newmtl material0\nKd 0.8 0.8 0.8\n", encoding="utf-8")

        messagebox.showinfo(
            "Export OBJ",
            f"Wrote:\n{out}\n{mtl_path}{tex_note}\n\n"
            f"{len(self._model_parts)} parts, "
            f"{sum(m['V'] for m in self._model_parts)} verts.",
        )

    def _model_drag_start(self, event):
        self._model_drag = (event.x, event.y, self._model_yaw, self._model_pitch)

    def _model_drag_move(self, event):
        if not self._model_drag or not self._model_parts:
            return
        x0, y0, yaw0, pitch0 = self._model_drag
        self._model_yaw = yaw0 + (event.x - x0) * 0.4
        self._model_pitch = max(-89, min(89, pitch0 + (event.y - y0) * 0.3))
        self._redraw_model()

    def _model_drag_end(self, event):
        self._model_drag = None

    def _model_zoom(self, event):
        delta = 1 if event.delta > 0 else -1
        self._model_zoom_dir(delta)

    def _model_zoom_dir(self, direction: int):
        if not self._model_parts:
            return
        self._model_zoom *= 1.15 if direction > 0 else (1 / 1.15)
        self._model_zoom = max(0.15, min(8.0, self._model_zoom))
        self._redraw_model()

    def _redraw_model(self):
        if not self._model_parts or not HAS_MESH or not HAS_NUMPY:
            return
        self.model_canvas.update_idletasks()
        w = max(self.model_canvas.winfo_width(), 320)
        h = max(self.model_canvas.winfo_height(), 240)
        # Cap resolution for speed
        rw, rh = min(w, 800), min(h, 600)
        try:
            img = render_wireframe(
                self._model_parts,
                rw,
                rh,
                self._model_yaw,
                self._model_pitch,
                self._model_zoom,
                self._model_center,
                self._model_radius,
            )
        except Exception as e:
            self.model_info.config(text=f"Render error: {e}")
            return

        if HAS_PIL:
            pil = Image.fromarray(img, mode="RGB")
            if (rw, rh) != (w, h):
                pil = pil.resize((w, h), Image.BILINEAR)
            self._model_photo = ImageTk.PhotoImage(pil)
            self.model_canvas.delete("all")
            self.model_canvas.create_image(w // 2, h // 2, image=self._model_photo, anchor=tk.CENTER)
        else:
            self.model_canvas.delete("all")
            self.model_canvas.create_text(
                20, 20, anchor=tk.NW, fill="white",
                text="Pillow required to display the model render.",
            )

    # ----- Export / Convert -----

    def _rel_path(self, p: Path) -> Path:
        if self.root_path:
            try:
                return p.relative_to(self.root_path)
            except ValueError:
                pass
        return Path(p.name)

    def _gather_paths(self, only_ext: Optional[Set[str]] = None, use_checked: bool = False) -> List[Path]:
        """Collect files to process: checked set, or all under root (optionally filtered)."""
        if use_checked:
            paths = [Path(s) for s in sorted(self.checked)]
        else:
            if not self.root_path:
                return []
            paths = [p for p in self.root_path.rglob("*") if p.is_file()]
        if only_ext is not None:
            paths = [p for p in paths if p.suffix.lower() in only_ext]
        return paths

    def _run_batch(self, title: str, paths: List[Path], worker):
        """Generic progress dialog. worker(path, out_root) → (ok: bool, message: str)."""
        if not paths:
            messagebox.showinfo(title, "No files to process.")
            return
        out_dir = filedialog.askdirectory(title=f"{title} — choose output folder")
        if not out_dir:
            return
        out_root = Path(out_dir)
        ok = 0
        fail = 0
        skip = 0
        errors: List[str] = []

        progress = tk.Toplevel(self)
        progress.title(title)
        progress.geometry("480x130")
        progress.transient(self)
        lbl = ttk.Label(progress, text="Starting…")
        lbl.pack(pady=12, padx=12)
        bar = ttk.Progressbar(progress, mode="determinate", maximum=len(paths))
        bar.pack(fill=tk.X, padx=12, pady=8)
        progress.update()

        for i, p in enumerate(paths):
            lbl.config(text=f"{i + 1}/{len(paths)}  {p.name}")
            bar["value"] = i
            progress.update()
            try:
                status, msg = worker(p, out_root)
                if status == "ok":
                    ok += 1
                elif status == "skip":
                    skip += 1
                else:
                    fail += 1
                    errors.append(f"{p.name}: {msg}")
            except Exception as e:
                fail += 1
                errors.append(f"{p.name}: {e}")

        progress.destroy()
        summary = f"Done.\n\nOK: {ok}\nSkipped: {skip}\nFailed: {fail}\n\nOutput:\n{out_root}"
        if errors:
            summary += "\n\nFailures:\n" + "\n".join(errors[:20])
            if len(errors) > 20:
                summary += f"\n… and {len(errors) - 20} more"
        messagebox.showinfo(title, summary)

    @staticmethod
    def _is_sfnt(data: bytes) -> bool:
        """TrueType / OpenType scaler type at start."""
        if len(data) < 4:
            return False
        tag = data[:4]
        return tag in (b"\x00\x01\x00\x00", b"OTTO", b"true", b"typ1")

    @staticmethod
    def _looks_like_text(data: bytes) -> bool:
        if not data:
            return False
        return is_mostly_ascii(data[: min(4096, len(data))], 0.80)

    def convert_file_for_engine(self, src: Path, out_root: Path) -> Tuple[str, str]:
        """
        Convert one asset into a modern-engine-friendly form.
        Returns (status, message) where status is 'ok' | 'skip' | 'fail'.
        """
        ext = src.suffix.lower()
        rel = self._rel_path(src)
        data = src.read_bytes()

        # --- Textures: .bog → PNG ---
        if ext == ".bog":
            if not HAS_PIL:
                return "fail", "Pillow required for PNG export (pip install Pillow)"
            decoded, info = decode_wrapper(data)
            if decoded is None:
                return "fail", info.get("error") or "decode failed"
            img_data, meta = bog_to_rgba(decoded)
            if img_data is None:
                return "fail", meta.get("error") or "texture decode failed"
            w, h, rgba = img_data
            dest = (out_root / rel).with_suffix(".png")
            dest.parent.mkdir(parents=True, exist_ok=True)
            Image.frombytes("RGBA", (w, h), rgba).save(dest)
            return "ok", f"{w}x{h} PNG"

        # --- Font: already SFNT or wrapped ---
        if ext == ".ttf":
            payload = data
            if not self._is_sfnt(payload):
                decoded, info = decode_wrapper(payload)
                if decoded and self._is_sfnt(decoded):
                    payload = decoded
                elif decoded is None:
                    return "fail", info.get("error") or "font decode failed"
            dest = (out_root / rel).with_suffix(".ttf")
            dest.parent.mkdir(parents=True, exist_ok=True)
            dest.write_bytes(payload)
            return "ok", "TTF"

        # --- Known text-ish formats after unwrap ---
        text_exts = {".params", ".skel", ".asm", ".txt"}
        if ext in text_exts or ext == ".xml":
            decoded, info = decode_wrapper(data)
            payload = decoded if decoded is not None else data
            # Prefer .txt for params/skel/asm; keep .xml if it looks like XML
            if ext == ".xml" and (payload.startswith(b"<") or payload.startswith(b"<?xml")):
                dest = (out_root / rel).with_suffix(".xml")
            else:
                dest = (out_root / rel).with_suffix(".txt")
            dest.parent.mkdir(parents=True, exist_ok=True)
            dest.write_bytes(payload)
            return "ok", dest.suffix

        # --- Everything else: unwrap to .bin (or plain text if mostly ASCII) ---
        decoded, info = decode_wrapper(data)
        if decoded is None:
            # No common wrapper — copy original as-is under converted/
            dest = out_root / rel
            dest.parent.mkdir(parents=True, exist_ok=True)
            dest.write_bytes(data)
            return "ok", "copied raw (no wrapper)"

        if self._looks_like_text(decoded):
            dest = (out_root / rel).with_suffix(".txt")
            dest.parent.mkdir(parents=True, exist_ok=True)
            dest.write_bytes(decoded)
            return "ok", "text"

        dest = (out_root / rel).with_suffix(rel.suffix + ".bin" if rel.suffix else ".bin")
        # cleaner: stem_decoded.bin
        dest = out_root / rel.parent / (rel.stem + "_decoded.bin")
        dest.parent.mkdir(parents=True, exist_ok=True)
        dest.write_bytes(decoded)
        return "ok", "decoded bin"

    def convert_all_textures(self):
        """Bulk: every .bog under the opened folder (or only checked) → PNG."""
        if not self.root_path and not self.checked:
            messagebox.showinfo("Textures → PNG", "Open a folder first (or check some .bog files).")
            return
        use_checked = bool(self.checked)
        if use_checked:
            # only checked bogs
            paths = self._gather_paths(only_ext={".bog"}, use_checked=True)
            if not paths:
                messagebox.showinfo(
                    "Textures → PNG",
                    "Checked files include no .bog textures.\n"
                    "Either check some .bog files, or Uncheck All and run again to convert every texture in the folder.",
                )
                return
        else:
            paths = self._gather_paths(only_ext={".bog"}, use_checked=False)

        if not HAS_PIL:
            messagebox.showerror(
                "Textures → PNG",
                "Pillow is required for PNG export.\n\nInstall with:\n  pip install Pillow",
            )
            return

        def worker(p: Path, out_root: Path):
            return self.convert_file_for_engine(p, out_root)

        self._run_batch("Convert All Textures → PNG", paths, worker)

    def convert_for_engine(self):
        """
        Bulk convert for a new engine:
          .bog  → .png
          .params / .skel / .asm / text → .txt
          .xml (real) → .xml
          .ttf → .ttf
          other → decoded .bin
        Uses checked files if any are checked; otherwise the whole opened tree.
        """
        if not self.root_path and not self.checked:
            messagebox.showinfo("Convert for Engine", "Open a folder first.")
            return

        use_checked = bool(self.checked)
        paths = self._gather_paths(use_checked=use_checked)
        if not paths:
            messagebox.showinfo("Convert for Engine", "No files to convert.")
            return

        if any(p.suffix.lower() == ".bog" for p in paths) and not HAS_PIL:
            if not messagebox.askyesno(
                "Convert for Engine",
                "Pillow is not installed — .bog textures cannot become PNGs.\n"
                "Continue anyway (textures will fail, other types will convert)?\n\n"
                "Install later with:  pip install Pillow",
            ):
                return

        scope = f"{len(paths)} checked file(s)" if use_checked else f"entire tree ({len(paths)} files)"
        if not messagebox.askyesno(
            "Convert for Engine",
            f"Convert {scope} into modern-friendly formats?\n\n"
            "  .bog      → PNG textures\n"
            "  .params   → TXT\n"
            "  .skel/.asm→ TXT\n"
            "  .ttf      → TTF font\n"
            "  others    → decoded BIN (or TXT if text)\n\n"
            "Source files are never modified.",
        ):
            return

        def worker(p: Path, out_root: Path):
            return self.convert_file_for_engine(p, out_root)

        self._run_batch("Convert for Modern Engine", paths, worker)

    def export_decoded(self):
        if not self.decoded_data:
            messagebox.showinfo("Export", "No decoded payload for the current file.")
            return
        default = (self.current_file.stem + "_decoded.bin") if self.current_file else "decoded.bin"
        path = filedialog.asksaveasfilename(
            title="Export decoded payload",
            initialfile=default,
            defaultextension=".bin",
            filetypes=[("Binary", "*.bin"), ("All files", "*.*")],
        )
        if not path:
            return
        try:
            Path(path).write_bytes(self.decoded_data)
            messagebox.showinfo("Export", f"Wrote {len(self.decoded_data):,} bytes to:\n{path}")
        except Exception as e:
            messagebox.showerror("Export failed", str(e))

    def export_checked(self):
        """Raw decode dump of checked files (no smart conversion)."""
        if not self.checked:
            messagebox.showinfo(
                "Export Checked",
                "No files checked.\nClick ☐ next to files or folders to select them.\n\n"
                "Tip: use “Convert for Engine” or “Textures→PNG” for usable formats.",
            )
            return

        def worker(p: Path, out_root: Path):
            data = p.read_bytes()
            decoded, info = decode_wrapper(data)
            if decoded is None:
                return "fail", info.get("error") or "decode failed"
            rel = self._rel_path(p)
            dest = out_root / rel.parent / (rel.stem + "_decoded.bin")
            dest.parent.mkdir(parents=True, exist_ok=True)
            dest.write_bytes(decoded)
            return "ok", "bin"

        paths = [Path(s) for s in sorted(self.checked)]
        self._run_batch("Export Checked (raw decode)", paths, worker)

    @staticmethod
    def _fmt_size(n: int) -> str:
        if n < 1024:
            return f"{n} B"
        if n < 1024 * 1024:
            return f"{n / 1024:.1f} KB"
        return f"{n / (1024 * 1024):.2f} MB"

    def _show_about(self):
        pil = "Pillow available — texture preview/PNG ON" if HAS_PIL else "Pillow not found — install for PNG export"
        messagebox.showinfo(
            "About",
            "ATV Asset Browser\n\n"
            "Browse + convert extracted ATV.bah/ATV.bad assets.\n"
            "• Textures→PNG  (all .bog)\n"
            "• Convert for Engine  (PNG / TXT / TTF / BIN)\n"
            "• Tree checkboxes for selective batch work\n"
            "• Shared wrapper + LZSS decoder\n\n"
            f"{pil}\n\n"
            "Does not modify source files.",
        )


def main():
    app = AssetBrowser()
    app.mainloop()


if __name__ == "__main__":
    main()
