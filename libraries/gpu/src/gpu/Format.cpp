//
//  Created by Bradley Austin Davis on 2015/09/20
//  Copyright 2013-2015 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

#include "Format.h"

using namespace gpu;

const Element Element::COLOR_R_8 { SCALAR, NUINT8, RED };
const Element Element::COLOR_SR_8 { SCALAR, NUINT8, SRED };

const Element Element::COLOR_RGBA_32{ VEC4, NUINT8, RGBA };
const Element Element::COLOR_SRGBA_32{ VEC4, NUINT8, SRGBA };

const Element Element::COLOR_BGRA_32{ VEC4, NUINT8, BGRA };
const Element Element::COLOR_SBGRA_32{ VEC4, NUINT8, SBGRA };

const Element Element::COLOR_RGBA_2{ VEC4, NUINT2, RGBA };

const Element Element::COLOR_COMPRESSED_BCX_RED { TILE4x4, COMPRESSED, COMPRESSED_BC4_RED };
const Element Element::COLOR_COMPRESSED_BCX_SRGB { TILE4x4, COMPRESSED, COMPRESSED_BC1_SRGB };
const Element Element::COLOR_COMPRESSED_BCX_SRGBA_MASK { TILE4x4, COMPRESSED, COMPRESSED_BC1_SRGBA };
const Element Element::COLOR_COMPRESSED_BCX_SRGBA { TILE4x4, COMPRESSED, COMPRESSED_BC3_SRGBA };
const Element Element::COLOR_COMPRESSED_BCX_XY { TILE4x4, COMPRESSED, COMPRESSED_BC5_XY };
const Element Element::COLOR_COMPRESSED_BCX_SRGBA_HIGH { TILE4x4, COMPRESSED, COMPRESSED_BC7_SRGBA };
const Element Element::COLOR_COMPRESSED_BCX_HDR_RGB { TILE4x4, COMPRESSED, COMPRESSED_BC6_RGB };

const Element Element::COLOR_COMPRESSED_ETC2_RGB { TILE4x4, COMPRESSED, COMPRESSED_ETC2_RGB };
const Element Element::COLOR_COMPRESSED_ETC2_SRGB { TILE4x4, COMPRESSED, COMPRESSED_ETC2_SRGB };
const Element Element::COLOR_COMPRESSED_ETC2_RGB_PUNCHTHROUGH_ALPHA { TILE4x4, COMPRESSED, COMPRESSED_ETC2_RGB_PUNCHTHROUGH_ALPHA };
const Element Element::COLOR_COMPRESSED_ETC2_SRGB_PUNCHTHROUGH_ALPHA { TILE4x4, COMPRESSED, COMPRESSED_ETC2_SRGB_PUNCHTHROUGH_ALPHA };
const Element Element::COLOR_COMPRESSED_ETC2_RGBA { TILE4x4, COMPRESSED, COMPRESSED_ETC2_RGBA };
const Element Element::COLOR_COMPRESSED_ETC2_SRGBA { TILE4x4, COMPRESSED, COMPRESSED_ETC2_SRGBA };
const Element Element::COLOR_COMPRESSED_EAC_RED { TILE4x4, COMPRESSED, COMPRESSED_EAC_RED };
const Element Element::COLOR_COMPRESSED_EAC_RED_SIGNED { TILE4x4, COMPRESSED, COMPRESSED_EAC_RED_SIGNED };
const Element Element::COLOR_COMPRESSED_EAC_XY { TILE4x4, COMPRESSED, COMPRESSED_EAC_XY };
const Element Element::COLOR_COMPRESSED_EAC_XY_SIGNED { TILE4x4, COMPRESSED, COMPRESSED_EAC_XY_SIGNED };

const Element Element::VEC2NU8_XY{ VEC2, NUINT8, XY };

const Element Element::COLOR_R11G11B10{ SCALAR, FLOAT, R11G11B10 };
const Element Element::COLOR_RGB9E5{ SCALAR, FLOAT, RGB9E5 };
const Element Element::VEC4F_COLOR_RGBA{ VEC4, FLOAT, RGBA };
const Element Element::VEC2F_UV{ VEC2, FLOAT, UV };
const Element Element::VEC2F_XY{ VEC2, FLOAT, XY };
const Element Element::VEC3F_XYZ{ VEC3, FLOAT, XYZ };
const Element Element::VEC4F_XYZW{ VEC4, FLOAT, XYZW };
const Element Element::VEC4F_NORMALIZED_XYZ10W2{ VEC4, NINT2_10_10_10, XYZW };
const Element Element::INDEX_UINT16 { SCALAR, UINT16, INDEX };
const Element Element::INDEX_INT32 { SCALAR, INT32, INDEX };
const Element Element::PART_DRAWCALL{ VEC4, UINT32, PART };
