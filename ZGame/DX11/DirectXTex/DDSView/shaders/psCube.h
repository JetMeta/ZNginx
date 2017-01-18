﻿#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//
//   fxc ddsview.fx /nologo /EPS_Cube /Tps_4_1 /Fhshaders\psCube.h
//
//
// Buffer Definitions:
//
// cbuffer cbArrayControl
// {
//
//   float Index;                       // Offset:    0 Size:     4
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// samLinear                         sampler      NA          NA    0        1
// tx2DArray                         texture  float4     2darray    0        1
// cbArrayControl                    cbuffer      NA          NA    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_POSITION              0   xyzw        0      POS  float
// TEXCOORD                 0   xyzw        1     NONE  float   xyz
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_Target                0   xyzw        0   TARGET  float   xyzw
//
ps_4_1
dcl_globalFlags refactoringAllowed
dcl_constantbuffer cb0[1], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2darray (float,float,float,float) t0
dcl_input_ps linear v1.xyz
dcl_output o0.xyzw
dcl_temps 1
mad r0.z, cb0[0].x, l(6.000000), v1.z
mov r0.xy, v1.xyxx
sample o0.xyzw, r0.xyzx, t0.xyzw, s0
ret
// Approximately 4 instruction slots used
#endif

const BYTE g_PS_Cube[] =
{
    68,  88,  66,  67, 255,  88,
    222, 202,  51, 233, 113, 192,
    119,  52,  43, 119,  92,  83,
    243, 127,   1,   0,   0,   0,
    36,   3,   0,   0,   5,   0,
    0,   0,  52,   0,   0,   0,
    88,   1,   0,   0, 176,   1,
    0,   0, 228,   1,   0,   0,
    168,   2,   0,   0,  82,  68,
    69,  70,  28,   1,   0,   0,
    1,   0,   0,   0, 160,   0,
    0,   0,   3,   0,   0,   0,
    28,   0,   0,   0,   1,   4,
    255, 255,   0,   1,   0,   0,
    232,   0,   0,   0, 124,   0,
    0,   0,   3,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   1,   0,
    0,   0,   1,   0,   0,   0,
    134,   0,   0,   0,   2,   0,
    0,   0,   5,   0,   0,   0,
    5,   0,   0,   0, 255, 255,
    255, 255,   0,   0,   0,   0,
    1,   0,   0,   0,  13,   0,
    0,   0, 144,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   1,   0,   0,   0,
    1,   0,   0,   0, 115,  97,
    109,  76, 105, 110, 101,  97,
    114,   0, 116, 120,  50,  68,
    65, 114, 114,  97, 121,   0,
    99,  98,  65, 114, 114,  97,
    121,  67, 111, 110, 116, 114,
    111, 108,   0, 171, 144,   0,
    0,   0,   1,   0,   0,   0,
    184,   0,   0,   0,  16,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0, 208,   0,
    0,   0,   0,   0,   0,   0,
    4,   0,   0,   0,   2,   0,
    0,   0, 216,   0,   0,   0,
    0,   0,   0,   0,  73, 110,
    100, 101, 120,   0, 171, 171,
    0,   0,   3,   0,   1,   0,
    1,   0,   0,   0,   0,   0,
    0,   0,   0,   0,  77, 105,
    99, 114, 111, 115, 111, 102,
    116,  32,  40,  82,  41,  32,
    72,  76,  83,  76,  32,  83,
    104,  97, 100, 101, 114,  32,
    67, 111, 109, 112, 105, 108,
    101, 114,  32,  57,  46,  50,
    57,  46,  57,  53,  50,  46,
    51,  49,  49,  49,   0, 171,
    171, 171,  73,  83,  71,  78,
    80,   0,   0,   0,   2,   0,
    0,   0,   8,   0,   0,   0,
    56,   0,   0,   0,   0,   0,
    0,   0,   1,   0,   0,   0,
    3,   0,   0,   0,   0,   0,
    0,   0,  15,   0,   0,   0,
    68,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    3,   0,   0,   0,   1,   0,
    0,   0,  15,   7,   0,   0,
    83,  86,  95,  80,  79,  83,
    73,  84,  73,  79,  78,   0,
    84,  69,  88,  67,  79,  79,
    82,  68,   0, 171, 171, 171,
    79,  83,  71,  78,  44,   0,
    0,   0,   1,   0,   0,   0,
    8,   0,   0,   0,  32,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   3,   0,
    0,   0,   0,   0,   0,   0,
    15,   0,   0,   0,  83,  86,
    95,  84,  97, 114, 103, 101,
    116,   0, 171, 171,  83,  72,
    68,  82, 188,   0,   0,   0,
    65,   0,   0,   0,  47,   0,
    0,   0, 106,   8,   0,   1,
    89,   0,   0,   4,  70, 142,
    32,   0,   0,   0,   0,   0,
    1,   0,   0,   0,  90,   0,
    0,   3,   0,  96,  16,   0,
    0,   0,   0,   0,  88,  64,
    0,   4,   0, 112,  16,   0,
    0,   0,   0,   0,  85,  85,
    0,   0,  98,  16,   0,   3,
    114,  16,  16,   0,   1,   0,
    0,   0, 101,   0,   0,   3,
    242,  32,  16,   0,   0,   0,
    0,   0, 104,   0,   0,   2,
    1,   0,   0,   0,  50,   0,
    0,  10,  66,   0,  16,   0,
    0,   0,   0,   0,  10, 128,
    32,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   1,  64,
    0,   0,   0,   0, 192,  64,
    42,  16,  16,   0,   1,   0,
    0,   0,  54,   0,   0,   5,
    50,   0,  16,   0,   0,   0,
    0,   0,  70,  16,  16,   0,
    1,   0,   0,   0,  69,   0,
    0,   9, 242,  32,  16,   0,
    0,   0,   0,   0,  70,   2,
    16,   0,   0,   0,   0,   0,
    70, 126,  16,   0,   0,   0,
    0,   0,   0,  96,  16,   0,
    0,   0,   0,   0,  62,   0,
    0,   1,  83,  84,  65,  84,
    116,   0,   0,   0,   4,   0,
    0,   0,   1,   0,   0,   0,
    0,   0,   0,   0,   2,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   1,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    1,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   1,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0
};
