"""Mesh extraction from ATV .rom / .shm and simple software 3D helpers."""
from __future__ import annotations

import struct
import math
from pathlib import Path
from typing import List, Dict, Any, Optional, Tuple

import numpy as np


def decode_wrapper(data: bytes, max_output: int = 64 * 1024 * 1024):
    if len(data) < 8:
        return None, {"error": "short"}
    flag, declared = struct.unpack_from("<II", data, 0)
    if declared > max_output:
        return None, {"error": "too big"}
    if flag == 0:
        stored = data[8:]
        if len(stored) < declared:
            return stored, {"error": "short raw"}
        return stored[:declared], {}
    if flag != 1:
        return None, {"error": f"flag {flag}"}
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
                        raise ValueError("trunc")
                    value = src[pos]
                    pos += 1
                    out.append(value)
                    ring[write_pos] = value
                    write_pos = (write_pos + 1) & 0xFFF
                else:
                    if pos + 1 >= len(src):
                        raise ValueError("trunc")
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
        return (bytes(out) if out else None), {"error": str(e)}
    return bytes(out), {}


def extract_meshes(payload: bytes) -> List[Dict[str, Any]]:
    """Find triangle mesh blocks (56-byte verts) in a decoded ROM/SHM payload."""
    meshes: List[Dict[str, Any]] = []
    if not payload or len(payload) < 40:
        return meshes
    i = 0
    n = len(payload)
    while i + 40 <= n:
        w0, w1, w2, T, z0, z1, V = struct.unpack_from("<7I", payload, i)
        if w0 == 0xFFFFFFFF and w1 == 0xFFFFFFFF and 0 < T < 20000 and 0 < V < 20000:
            size = 40 + 12 * T + 56 * V
            if i + size <= n:
                ok = True
                for j in range(min(T, 8)):
                    a, b, c = struct.unpack_from("<3I", payload, i + 40 + 12 * j)
                    if a >= V or b >= V or c >= V:
                        ok = False
                        break
                if ok:
                    idx_off = i + 40
                    vtx_off = i + 40 + 12 * T
                    indices = np.frombuffer(payload, dtype="<u4", count=3 * T, offset=idx_off).copy()
                    # verts: pos3, nrm3, uv2, rest
                    pos = np.zeros((V, 3), dtype=np.float32)
                    nrm = np.zeros((V, 3), dtype=np.float32)
                    uv = np.zeros((V, 2), dtype=np.float32)
                    for v in range(V):
                        base = vtx_off + v * 56
                        pos[v] = struct.unpack_from("<3f", payload, base)
                        nrm[v] = struct.unpack_from("<3f", payload, base + 12)
                        uv[v] = struct.unpack_from("<2f", payload, base + 24)
                    meshes.append(
                        {
                            "offset": i,
                            "T": T,
                            "V": V,
                            "indices": indices,
                            "pos": pos,
                            "nrm": nrm,
                            "uv": uv,
                        }
                    )
                    i += size
                    continue
        i += 4
    return meshes


def load_folder_meshes(folder: Path) -> List[Dict[str, Any]]:
    """Load all mesh parts from .rom and .shm in a folder."""
    parts: List[Dict[str, Any]] = []
    files = sorted(folder.glob("*.rom")) + sorted(folder.glob("*.shm"))
    for p in files:
        data = p.read_bytes()
        decoded, info = decode_wrapper(data)
        if not decoded:
            continue
        for mi, m in enumerate(extract_meshes(decoded)):
            m["source"] = p.stem
            m["file"] = p.name
            m["part_index"] = mi
            m["name"] = f"{p.stem}_{mi}" if mi else p.stem
            parts.append(m)
    return parts


def folder_bounds(parts: List[Dict[str, Any]]):
    if not parts:
        return np.zeros(3), 1.0
    mins = np.array([1e9, 1e9, 1e9], dtype=np.float64)
    maxs = np.array([-1e9, -1e9, -1e9], dtype=np.float64)
    for m in parts:
        mins = np.minimum(mins, m["pos"].min(axis=0))
        maxs = np.maximum(maxs, m["pos"].max(axis=0))
    center = (mins + maxs) * 0.5
    radius = float(np.linalg.norm(maxs - mins) * 0.5) or 1.0
    return center, radius


def write_obj(parts: List[Dict[str, Any]], path: Path, mtl_name: Optional[str] = None):
    """Write combined OBJ (and optional MTL reference)."""
    with path.open("w", encoding="utf-8") as f:
        f.write("# ATV Asset Browser export\n")
        if mtl_name:
            f.write(f"mtllib {mtl_name}\n")
        vbase = 1
        for m in parts:
            f.write(f"o {m['name']}\n")
            if mtl_name:
                f.write("usemtl material0\n")
            for p in m["pos"]:
                f.write(f"v {p[0]:.6f} {p[1]:.6f} {p[2]:.6f}\n")
            for u in m["uv"]:
                f.write(f"vt {u[0]:.6f} {1.0 - u[1]:.6f}\n")
            for n in m["nrm"]:
                f.write(f"vn {n[0]:.6f} {n[1]:.6f} {n[2]:.6f}\n")
            idx = m["indices"]
            for t in range(m["T"]):
                a = int(idx[3 * t]) + vbase
                b = int(idx[3 * t + 1]) + vbase
                c = int(idx[3 * t + 2]) + vbase
                f.write(f"f {a}/{a}/{a} {b}/{b}/{b} {c}/{c}/{c}\n")
            vbase += m["V"]


def render_wireframe(
    parts: List[Dict[str, Any]],
    width: int,
    height: int,
    yaw_deg: float,
    pitch_deg: float,
    zoom: float,
    center: np.ndarray,
    radius: float,
) -> np.ndarray:
    """
    Software wireframe render → RGB uint8 array (H, W, 3).
    """
    img = np.zeros((height, width, 3), dtype=np.uint8)
    img[:] = (30, 30, 34)

    yaw = math.radians(yaw_deg)
    pitch = math.radians(pitch_deg)
    # camera basis
    cy, sy = math.cos(yaw), math.sin(yaw)
    cp, sp = math.cos(pitch), math.sin(pitch)
    # camera looks at center; orbit on sphere
    dist = radius * 2.8 / max(zoom, 0.05)
    eye = center + np.array([dist * cy * cp, dist * sp, dist * sy * cp])
    forward = center - eye
    forward = forward / (np.linalg.norm(forward) + 1e-9)
    world_up = np.array([0.0, 1.0, 0.0])
    right = np.cross(forward, world_up)
    rn = np.linalg.norm(right)
    if rn < 1e-6:
        right = np.array([1.0, 0.0, 0.0])
    else:
        right = right / rn
    up = np.cross(right, forward)

    fov = 50.0
    f = 0.5 * height / math.tan(math.radians(fov * 0.5))
    colors = [
        (180, 200, 220),
        (220, 180, 140),
        (140, 200, 160),
        (200, 160, 200),
        (160, 180, 220),
        (220, 200, 140),
    ]

    def project(p):
        v = p - eye
        x = np.dot(v, right)
        y = np.dot(v, up)
        z = np.dot(v, forward)
        if z <= 0.01:
            return None
        sx = width * 0.5 + f * x / z
        sy = height * 0.5 - f * y / z
        return sx, sy, z

    def draw_line(x0, y0, x1, y1, col):
        # Bresenham-ish via sampling
        steps = int(max(abs(x1 - x0), abs(y1 - y0), 1))
        for s in range(steps + 1):
            t = s / steps
            x = int(x0 + (x1 - x0) * t)
            y = int(y0 + (y1 - y0) * t)
            if 0 <= x < width and 0 <= y < height:
                img[y, x] = col

    for pi, m in enumerate(parts):
        col = colors[pi % len(colors)]
        pos = m["pos"]
        proj = [project(pos[i]) for i in range(m["V"])]
        idx = m["indices"]
        for t in range(m["T"]):
            a, b, c = int(idx[3 * t]), int(idx[3 * t + 1]), int(idx[3 * t + 2])
            pa, pb, pc = proj[a], proj[b], proj[c]
            if pa and pb:
                draw_line(pa[0], pa[1], pb[0], pb[1], col)
            if pb and pc:
                draw_line(pb[0], pb[1], pc[0], pc[1], col)
            if pc and pa:
                draw_line(pc[0], pc[1], pa[0], pa[1], col)

    return img
