#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0      POS   float       
// TEXCOORD                 0   xy          1     NONE   float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xyzw        0   TARGET   float   xyzw
// SV_Target                1   xyzw        1   TARGET   float   xyzw
//
ps_5_0
// Opaque Custom Data - XBOX Precompiled Shader Header
// First Precompiled Shader at offset:[206]
// Embedded Data:
//  0x000000ce - Offset To First Precompiled Shader
//  0x00000050 - Original Shader Descriptor
//  0x000000c9 - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[1], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear v1.xy
dcl_output o0.xyzw
dcl_output o1.xyzw
dcl_temps 3
sample_indexable(texture2d)(float,float,float,float) r0.xyzw, v1.xyxx, t0.xyzw, s0
dp3 r1.x, l(0.627404, 0.329282, 0.043314, 0.000000), r0.xyzx
dp3 r1.y, l(0.069097, 0.919540, 0.011361, 0.000000), r0.xyzx
dp3 r1.z, l(0.016392, 0.088013, 0.895595, 0.000000), r0.xyzx
mul r1.xyz, r1.xyzx, cb0[0].yyyy
mul r1.xyz, r1.xyzx, l(0.000100, 0.000100, 0.000100, 0.000000)
log r1.xyz, |r1.xyzx|
mul r1.xyz, r1.xyzx, l(0.159302, 0.159302, 0.159302, 0.000000)
exp r1.xyz, r1.xyzx
mad r2.xyz, r1.xyzx, l(18.851563, 18.851563, 18.851563, 0.000000), l(0.835938, 0.835938, 0.835938, 0.000000)
mad r1.xyz, r1.xyzx, l(18.687500, 18.687500, 18.687500, 0.000000), l(1.000000, 1.000000, 1.000000, 0.000000)
div r1.xyz, r2.xyzx, r1.xyzx
log r1.xyz, r1.xyzx
mul r1.xyz, r1.xyzx, l(78.843750, 78.843750, 78.843750, 0.000000)
exp o0.xyz, r1.xyzx
mul_sat r0.xyz, r0.xyzx, cb0[0].xxxx
log r0.xyz, r0.xyzx
mul r0.xyz, r0.xyzx, l(0.454545, 0.454545, 0.454545, 0.000000)
exp o1.xyz, r0.xyzx
mov o0.w, r0.w
mov o1.w, r0.w
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[206], bundle is:[231] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (PS)
// Shader Hw Stage           : (PS)
// PDB Filename              : C:\Repos\Xbox-ATG-Samples\Kits\DirectXTK\src\Shaders\Compiled\XboxOneToneMap_PSHDR10_Saturate_SRGB.pdb
// Shader Semantic Hash      : 0xee54ecf3a9db4743
//
// Shader Data:
; ----------------- PS Data ------------------------
; Input Semantic Mappings
;   [0] generic,  usageIdx 1, channelMask  3, param0, paramSlot1, DefaultVal={0,0,0,0}

codeLenInByte        = 460 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 1;
;  userElements[0]      = PTR_EXTENDED_USER_DATA, ReferencedExtUserElements=1, s[0x0:1]
extUserElementCount  = 3;
;  extUserElements 1[0] = IMM_RESOURCE 0, offset 0x0:7 dwords
;  extUserElements 1[1] = IMM_SAMPLER 0, offset 0x8:11 dwords
;  extUserElements 1[2] = IMM_CONST_BUFFER 0, offset 0xc:15 dwords
NumVgprs             = 11;
NumSgprs             = 24;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000001
; constBufUsage           = 0x00000001

; SPI_SHADER_PGM_RSRC2_PS = 0x00000004
SSPRP:SCRATCH_EN            = 0
SSPRP:USER_SGPR             = 2
SSPRP:TRAP_PRESENT          = 0
SSPRP:WAVE_CNT_EN           = 0
SSPRP:EXTRA_LDS_SIZE        = 0
SSPRP:EXCP_EN               = 0
; SPI_SHADER_Z_FORMAT     = 0x00000000
SPZF:Z_EXPORT_FORMAT        = 0; SPI_SHADER_ZERO
; SPI_PS_IN_CONTROL       = 0x00000001
SPIC:NUM_INTERP             = 1
SPIC:PARAM_GEN              = 0
SPIC:FOG_ADDR               = 0
SPIC:BC_OPTIMIZE_DISABLE    = 0
SPIC:PASS_FOG_THROUGH_PS    = 0
; SPI_PS_INPUT_ADDR       = 0x00000002
SPIA:PERSP_CENTER_ENA       = 1
; DB_SHADER_CONTROL       = 0x00000010
DB:Z_ORDER                  = 1
DB:CONSERVATIVE_Z_EXPORT    = 0; EXPORT_ANY_Z
; CB_SHADER_MASK          = 0x000000FF
CB:OUTPUT0_ENABLE           = 15
CB:OUTPUT1_ENABLE           = 15

; export table for mrt0 [patch@(bytes=0x1B8, dwords=0x6E)]
// Export Patch Code (FMT_ZERO):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           null, off, off, off, off done vm        // 000000000008: F8001890 00000000
end
// Export Patch Code (FMT_32_R):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v4, off, off, off done vm         // 000000000008: F8001801 00000004
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v4, v5, off, off done vm          // 000000000008: F8001803 00000504
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v4, v3, off, off done vm          // 000000000008: F8001803 00000304
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v4, v4, v5                       // 000000000000: 5E080B04
  v_cvt_pkrtz_f16_f32  v5, v6, v3                       // 000000000004: 5E0A0706
  exp           mrt0, v4, v4, v5, v5 done compr vm      // 000000000008: F8001C0F 00000504
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v4, v4, v5                      // 000000000000: 5C080B04
  v_cvt_pknorm_u16_f32  v5, v6, v3                      // 000000000004: 5C0A0706
  exp           mrt0, v4, v4, v5, v5 done compr vm      // 000000000008: F8001C0F 00000504
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v4, v4, v5                      // 000000000000: 5A080B04
  v_cvt_pknorm_i16_f32  v5, v6, v3                      // 000000000004: 5A0A0706
  exp           mrt0, v4, v4, v5, v5 done compr vm      // 000000000008: F8001C0F 00000504
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v4, v4, v5                          // 000000000000: 60080B04
  v_cvt_pk_u16_u32  v5, v6, v3                          // 000000000004: 600A0706
  exp           mrt0, v4, v4, v5, v5 done compr vm      // 000000000008: F8001C0F 00000504
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v4, v4, v5                          // 000000000000: 62080B04
  v_cvt_pk_i16_i32  v5, v6, v3                          // 000000000004: 620A0706
  exp           mrt0, v4, v4, v5, v5 done compr vm      // 000000000008: F8001C0F 00000504
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v4, v5, v6, v3 done vm            // 000000000008: F800180F 03060504
end

; export table for mrt1 [patch@(bytes=0x1A8, dwords=0x6A)]
// Export Patch Code (FMT_ZERO):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  s_nop         0x0000                                  // 000000000008: BF800000
  s_nop         0x0000                                  // 00000000000C: BF800000
end
// Export Patch Code (FMT_32_R):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt1, v0, off, off, off vm              // 000000000008: F8001011 00000000
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt1, v0, v1, off, off vm               // 000000000008: F8001013 00000100
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt1, v0, v3, off, off vm               // 000000000008: F8001013 00000300
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v0, v0, v1                       // 000000000000: 5E000300
  v_cvt_pkrtz_f16_f32  v1, v2, v3                       // 000000000004: 5E020702
  exp           mrt1, v0, v0, v1, v1 compr vm           // 000000000008: F800141F 00000100
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v0, v0, v1                      // 000000000000: 5C000300
  v_cvt_pknorm_u16_f32  v1, v2, v3                      // 000000000004: 5C020702
  exp           mrt1, v0, v0, v1, v1 compr vm           // 000000000008: F800141F 00000100
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v0, v0, v1                      // 000000000000: 5A000300
  v_cvt_pknorm_i16_f32  v1, v2, v3                      // 000000000004: 5A020702
  exp           mrt1, v0, v0, v1, v1 compr vm           // 000000000008: F800141F 00000100
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v0, v0, v1                          // 000000000000: 60000300
  v_cvt_pk_u16_u32  v1, v2, v3                          // 000000000004: 60020702
  exp           mrt1, v0, v0, v1, v1 compr vm           // 000000000008: F800141F 00000100
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v0, v0, v1                          // 000000000000: 62000300
  v_cvt_pk_i16_i32  v1, v2, v3                          // 000000000004: 62020702
  exp           mrt1, v0, v0, v1, v1 compr vm           // 000000000008: F800141F 00000100
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt1, v0, v1, v2, v3 vm                 // 000000000008: F800101F 03020100
end

// Shader Instructions:
shader main
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_mov_b64     s[20:21], exec                          // 000000000000: BE94047E
  s_wqm_b64     exec, exec // wrscc                     // 000000000004: BEFE0A7E
  s_load_dwordx16  s[4:19], s[0:1], 0x00                // 000000000008: C1020100
  s_mov_b32     m0, s2                                  // 00000000000C: BEFC0302
  v_interp_p1_f32  v2, v0, attr0.x                      // 000000000010: C8080000
  v_interp_p1_f32  v3, v0, attr0.y                      // 000000000014: C80C0100
  v_interp_p2_f32  v2, v1, attr0.x                      // 000000000018: C8090001
  v_interp_p2_f32  v3, v1, attr0.y                      // 00000000001C: C80D0101
  s_waitcnt     lgkmcnt(0)                              // 000000000020: BF8C007F
  image_sample  v[0:3], v[2:3], s[4:11], s[12:15] dmask:0xf // 000000000024: F0800F00 00610002
  s_buffer_load_dwordx2  s[0:1], s[16:19], 0x00         // 00000000002C: C2401100
  s_waitcnt     vmcnt(0)                                // 000000000030: BF8C0F70
  s_nop         0x0000                                  // 000000000034: BF800000
  v_mul_legacy_f32  v4, 0x3d31699a, v2                  // 000000000038: 0E0804FF 3D31699A
  v_mul_legacy_f32  v5, 0x3c3a2454, v2                  // 000000000040: 0E0A04FF 3C3A2454
  v_mul_legacy_f32  v6, 0x3f6545b7, v2                  // 000000000048: 0E0C04FF 3F6545B7
  v_madmk_f32   v4, v1, 0x3ea897a6, v4                  // 000000000050: 40080901 3EA897A6
  v_madmk_f32   v5, v1, 0x3f6b66f9, v5                  // 000000000058: 400A0B01 3F6B66F9
  v_madmk_f32   v6, v1, 0x3db44044, v6                  // 000000000060: 400C0D01 3DB44044
  v_madmk_f32   v4, v0, 0x3f209d8c, v4                  // 000000000068: 40080900 3F209D8C
  v_madmk_f32   v5, v0, 0x3d8d82ba, v5                  // 000000000070: 400A0B00 3D8D82BA
  v_madmk_f32   v6, v0, 0x3c8647ad, v6                  // 000000000078: 400C0D00 3C8647AD
  s_waitcnt     lgkmcnt(0)                              // 000000000080: BF8C007F
  v_mul_legacy_f32  v4, s1, v4                          // 000000000084: 0E080801
  v_mul_legacy_f32  v5, s1, v5                          // 000000000088: 0E0A0A01
  v_mul_legacy_f32  v6, s1, v6                          // 00000000008C: 0E0C0C01
  s_mov_b32     s1, 0x38d1b717                          // 000000000090: BE8103FF 38D1B717
  v_mul_legacy_f32  v4, s1, v4                          // 000000000098: 0E080801
  v_mul_legacy_f32  v5, s1, v5                          // 00000000009C: 0E0A0A01
  v_mul_legacy_f32  v6, s1, v6                          // 0000000000A0: 0E0C0C01
  v_log_f32     v4, abs(v4)                             // 0000000000A4: D34E0104 00000104
  v_log_f32     v5, abs(v5)                             // 0000000000AC: D34E0105 00000105
  v_log_f32     v6, abs(v6)                             // 0000000000B4: D34E0106 00000106
  s_mov_b32     s1, 0x3e232000                          // 0000000000BC: BE8103FF 3E232000
  v_mul_legacy_f32  v4, s1, v4                          // 0000000000C4: 0E080801
  v_mul_legacy_f32  v5, s1, v5                          // 0000000000C8: 0E0A0A01
  v_mul_legacy_f32  v6, s1, v6                          // 0000000000CC: 0E0C0C01
  v_exp_f32     v4, v4                                  // 0000000000D0: 7E084B04
  v_exp_f32     v5, v5                                  // 0000000000D4: 7E0A4B05
  v_exp_f32     v6, v6                                  // 0000000000D8: 7E0C4B06
  s_mov_b32     s1, 0x41958000                          // 0000000000DC: BE8103FF 41958000
  v_mov_b32     v7, 0x4196d000                          // 0000000000E4: 7E0E02FF 4196D000
  v_mad_f32     v8, v4, s1, 1.0                         // 0000000000EC: D2820008 03C80304
  v_mad_f32     v9, v5, s1, 1.0                         // 0000000000F4: D2820009 03C80305
  v_mad_f32     v10, v6, s1, 1.0                        // 0000000000FC: D282000A 03C80306
  v_madak_f32   v4, v4, v7, 0x3f560000                  // 000000000104: 42080F04 3F560000
  v_madak_f32   v5, v5, v7, 0x3f560000                  // 00000000010C: 420A0F05 3F560000
  v_madak_f32   v6, v6, v7, 0x3f560000                  // 000000000114: 420C0F06 3F560000
  v_rcp_f32     v7, v8                                  // 00000000011C: 7E0E5508
  v_rcp_f32     v8, v9                                  // 000000000120: 7E105509
  v_rcp_f32     v9, v10                                 // 000000000124: 7E12550A
  v_mul_f32     v4, v4, v7                              // 000000000128: 10080F04
  v_mul_f32     v5, v5, v8                              // 00000000012C: 100A1105
  v_mul_f32     v6, v6, v9                              // 000000000130: 100C1306
  v_mul_legacy_f32  v0, v0, s0 clamp                    // 000000000134: D20E0800 00000100
  v_mul_legacy_f32  v1, v1, s0 clamp                    // 00000000013C: D20E0801 00000101
  v_mul_legacy_f32  v2, v2, s0 clamp                    // 000000000144: D20E0802 00000102
  v_log_f32     v4, v4                                  // 00000000014C: 7E084F04
  v_log_f32     v5, v5                                  // 000000000150: 7E0A4F05
  v_log_f32     v6, v6                                  // 000000000154: 7E0C4F06
  s_mov_b32     s0, 0x429db000                          // 000000000158: BE8003FF 429DB000
  v_log_f32     v0, v0                                  // 000000000160: 7E004F00
  v_log_f32     v1, v1                                  // 000000000164: 7E024F01
  v_log_f32     v2, v2                                  // 000000000168: 7E044F02
  s_mov_b32     s1, 0x3ee8ba2f                          // 00000000016C: BE8103FF 3EE8BA2F
  v_mul_legacy_f32  v4, s0, v4                          // 000000000174: 0E080800
  v_mul_legacy_f32  v5, s0, v5                          // 000000000178: 0E0A0A00
  v_mul_legacy_f32  v6, s0, v6                          // 00000000017C: 0E0C0C00
  v_mul_legacy_f32  v0, s1, v0                          // 000000000180: 0E000001
  v_mul_legacy_f32  v1, s1, v1                          // 000000000184: 0E020201
  v_mul_legacy_f32  v2, s1, v2                          // 000000000188: 0E040401
  v_exp_f32     v4, v4                                  // 00000000018C: 7E084B04
  v_exp_f32     v5, v5                                  // 000000000190: 7E0A4B05
  v_exp_f32     v6, v6                                  // 000000000194: 7E0C4B06
  v_exp_f32     v0, v0                                  // 000000000198: 7E004B00
  v_exp_f32     v1, v1                                  // 00000000019C: 7E024B01
  v_exp_f32     v2, v2                                  // 0000000001A0: 7E044B02
  s_mov_b64     exec, s[20:21]                          // 0000000001A4: BEFE0414
  v_cvt_pkrtz_f16_f32  v0, v0, v1                       // 0000000001A8: 5E000300
  v_cvt_pkrtz_f16_f32  v1, v2, v3                       // 0000000001AC: 5E020702
  exp           mrt1, v0, v0, v1, v1 compr vm           // 0000000001B0: F800141F 00000100
  v_cvt_pkrtz_f16_f32  v4, v4, v5                       // 0000000001B8: 5E080B04
  v_cvt_pkrtz_f16_f32  v5, v6, v3                       // 0000000001BC: 5E0A0706
  exp           mrt0, v4, v4, v5, v5 done compr vm      // 0000000001C0: F8001C0F 00000504
  s_endpgm                                              // 0000000001C8: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   11
//  NumSRegs:                   24
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   132
//  CycleSimNWaves:             132
//  Code Size:                  460
//Assembler Counts:
//  num_32bit_ops                     : 73
//  num_64bit_ops                     : 12
//  num_alu                           : 66
//  num_fc                            : 16
//  num_inst_exp                      : 2
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 1
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 5
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 9
//  num_inst_sop2                     : 0
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 19
//  num_inst_vop2                     : 34
//  num_inst_vop3                     : 0
//  num_inst_vopc                     : 0
//  num_inst_vintrp                   : 4
//  constant_literal_operands         : 0
//  num_tex                           : 3
//  num_vmem_group                    : 1
//  vmem_grouping_started             : 0
//
//Compilation Notes:
//
//  PS has no UAV writes, consider forcing REZ/LATEZ.
// Shader Statistics:
// m_uNumActiveWaveFront             : 40
// m_uVRegLimit                      : 256
// m_uSRegLimit                      : 512
// m_uNumVRegs                       : 11
// m_uNumSRegs                       : 24
// m_uSCCodeSize                     : 460
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 132
// m_uCycleSimNWaves                 : 132

// Assembler Counts:
// num_32bit_ops                     : 73
// num_64bit_ops                     : 12
// num_alu                           : 66
// num_fc                            : 16
// num_inst_exp                      : 2
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 1
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 5
// num_inst_sopc                     : 0
// num_inst_sop1                     : 9
// num_inst_sop2                     : 0
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 19
// num_inst_vop2                     : 34
// num_inst_vop3                     : 0
// num_inst_vopc                     : 0
// num_inst_vintrp                   : 4
// num_inst_smem                     : 2
// constant_literal_operands         : 0
// num_tex                           : 3
// num_vmem_group                    : 1
// vmem_grouping_started             : 0
// m_fFullPrecompilePromise          : 0
// m_fIntegerDivideExpansion         : 0
// m_fIntegerModExpansion            : 0
// m_fDoubleDivideExpansion          : 0
// m_fUsesScratch                    : 0
// m_fPerThreadIndirection           : 0
// m_fUsingTableLoads                : 0
// m_fUsingSHmemLoads                : 1
// fSemanticHashFlagOverrideApplied  : 0
// fPSHasNoUAVWrite                  : 1
// m_fRenderTargetsCanBeCompacted    : 0
// version                           : 3
// fCodePatched                      : 0

// Approximately 0 instruction slots used
#endif

const BYTE ToneMap_PSHDR10_Saturate_SRGB[] =
{
     68,  88,  66,  67,  12,  57, 
     51, 139,  44,  73,   0, 136, 
    215, 196, 100,  32, 203, 229, 
    247,   2,   1,   0,   0,   0, 
     58,   8,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    140,   0,   0,   0, 216,   0, 
      0,   0, 188,   7,   0,   0, 
    204,   7,   0,   0,  73,  83, 
     71,  78,  80,   0,   0,   0, 
      2,   0,   0,   0,   8,   0, 
      0,   0,  56,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  68,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   3,   3, 
      0,   0,  83,  86,  95,  80, 
    111, 115, 105, 116, 105, 111, 
    110,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
    171, 171,  79,  83,  71,  78, 
     68,   0,   0,   0,   2,   0, 
      0,   0,   8,   0,   0,   0, 
     56,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     56,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,  15,   0,   0,   0, 
     83,  86,  95,  84,  97, 114, 
    103, 101, 116,   0, 171, 171, 
     83,  72,  69,  88, 220,   6, 
      0,   0,  80,   0,   0,   0, 
    183,   1,   0,   0,  53,  16, 
      0,   0,   5,   0,   0,   0, 
    206,   0,   0,   0,  80,   0, 
      0,   0, 201,   0,   0,   0, 
    106,   8,   0,   1,  89,   0, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  90,   0,   0,   3, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  88,  24,   0,   4, 
      0, 112,  16,   0,   0,   0, 
      0,   0,  85,  85,   0,   0, 
     98,  16,   0,   3,  50,  16, 
     16,   0,   1,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   0,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   1,   0,   0,   0, 
    104,   0,   0,   2,   3,   0, 
      0,   0,  69,   0,   0, 139, 
    194,   0,   0, 128,  67,  85, 
     21,   0, 242,   0,  16,   0, 
      0,   0,   0,   0,  70,  16, 
     16,   0,   1,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,   0,  96,  16,   0, 
      0,   0,   0,   0,  16,   0, 
      0,  10,  18,   0,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0, 140, 157,  32,  63, 
    166, 151, 168,  62, 154, 105, 
     49,  61,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  16,   0,   0,  10, 
     34,   0,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
    186, 130, 141,  61, 249, 102, 
    107,  63,  84,  36,  58,  60, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     16,   0,   0,  10,  66,   0, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0, 173,  71, 
    134,  60,  68,  64, 180,  61, 
    183,  69, 101,  63,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   8, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     86, 133,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     56,   0,   0,  10, 114,   0, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
     23, 183, 209,  56,  23, 183, 
    209,  56,  23, 183, 209,  56, 
      0,   0,   0,   0,  47,   0, 
      0,   6, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16, 128, 129,   0,   0,   0, 
      1,   0,   0,   0,  56,   0, 
      0,  10, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,  32, 
     35,  62,   0,  32,  35,  62, 
      0,  32,  35,  62,   0,   0, 
      0,   0,  25,   0,   0,   5, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  15, 114,   0,  16,   0, 
      2,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0, 208, 
    150,  65,   0, 208, 150,  65, 
      0, 208, 150,  65,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,  86,  63,   0,   0, 
     86,  63,   0,   0,  86,  63, 
      0,   0,   0,   0,  50,   0, 
      0,  15, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0, 128, 
    149,  65,   0, 128, 149,  65, 
      0, 128, 149,  65,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128,  63,   0,   0, 
    128,  63,   0,   0, 128,  63, 
      0,   0,   0,   0,  14,   0, 
      0,   7, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   2,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  47,   0,   0,   5, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  56,   0, 
      0,  10, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0, 176, 
    157,  66,   0, 176, 157,  66, 
      0, 176, 157,  66,   0,   0, 
      0,   0,  25,   0,   0,   5, 
    114,  32,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  56,  32, 
      0,   8, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
      6, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     47,   0,   0,   5, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,  10, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,  47, 186, 232,  62, 
     47, 186, 232,  62,  47, 186, 
    232,  62,   0,   0,   0,   0, 
     25,   0,   0,   5, 114,  32, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
    130,  32,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   5, 130,  32,  16,   0, 
      1,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  53,  16, 
      0,   0, 233,   0,   0,   0, 
     23,   0,   1,   0,  41,  23, 
     17,   0, 120,   1, 237,  87, 
     79, 104,  19,  89,  28, 254, 
    189, 153, 151, 113,  50, 157, 
    206, 164,  86,  80,  65, 176, 
    104,  65,  47, 186, 235,  77, 
    196, 182, 105,  83, 169,  18, 
    214,  72, 147, 138, 150, 161, 
    109,  98, 199, 181, 254, 105, 
     67,  83, 193, 211,  88,  69, 
    100,  23,  20,  60, 168, 187, 
     44, 120,  19, 217,  61,   8, 
     30,   4, 193,  67, 170, 158, 
    114, 168, 160, 245, 232,  93, 
     68,  68,   4,  47,  46,  44, 
    155, 253, 126, 211, 121, 235, 
    164, 234,  45, 160,  98,  62, 
    248, 222, 151, 239, 253, 249, 
    189, 223, 188, 153, 192, 251, 
    173, 237, 160,  16,  91, 142, 
    223, 250, 149, 181, 251, 176, 
    251, 170,  91,  39,  74, 224, 
    183,   0,  89,  25, 191, 183, 
    115,  75, 116, 215, 229, 150, 
    104,  43,  55,  60,  65,  35, 
    106, 131, 172,   3,  23, 225, 
    211,  80,  30,  83, 124, 188, 
    152, 200,  28, 125,  97, 102, 
    120,  42, 111, 197, 115,  47, 
     68, 220,   7, 218, 224,   0, 
    152,   2,  17,  42,   4, 207, 
     85,  80, 251,  39, 185, 137, 
    161,  19, 220,   4,  42,  72, 
     80, 173,  71, 250,  13,  49, 
    200, 231, 230, 211,  24,   1, 
     57, 167, 207, 129, 115,  83, 
    177,  56,  62, 231, 201, 224, 
    231, 253, 210,  88, 206, 235, 
     67, 203,  84, 239, 137, 193, 
    239,  35,  14,   7,  84,  93, 
    147, 209, 123, 228, 179,  98, 
    156, 137,  60, 159,   5,  63, 
    219,   3, 240, 115, 168,   3, 
    234,  28,  20, 148, 231, 248, 
    134,  64,  84,  19,  63, 190, 
     83, 240, 183, 200, 224, 179, 
     80, 223,  76,  29,  84,  80, 
    227, 211, 220, 208, 252,   2, 
    243, 202,  58, 122, 207,  78, 
    121,   1, 191,  60, 111, 217, 
    235, 236, 195,  63,  67, 204, 
    227, 152, 101, 155,  57, 102, 
    172, 178, 198, 220,  13, 203, 
    227, 240,  30, 188,  23, 243, 
    163, 240, 163,  49,  63,   1, 
     63,  17, 243,  37, 248, 146, 
    242,  42, 190,  27, 238, 103, 
    232, 199, 185,  43, 234,  91, 
    201, 142,  84,  99, 206, 157, 
    236, 249, 161, 227,  30,  57, 
    130,  99, 218,  42, 109, 108, 
    227, 154, 104,  92,  39,  15, 
    222, 139, 249,  81, 248, 209, 
    152, 159, 128, 159, 136, 249, 
     18, 124, 233, 127,  31, 197, 
    223,  24, 238, 167, 233, 252, 
     61, 162,  51, 248, 154, 217, 
    202, 177,  57, 108, 229, 216, 
     28, 182, 114, 108,  14,  91, 
     57,  54, 135, 173,  28, 155, 
    195,  86, 142, 205, 225, 183, 
    144,  35,  72, 129, 188,  90, 
     13, 172, 127, 171, 184,   7, 
     61, 212, 244, 127, 170, 184, 
    120, 215,  72, 216,  53,  65, 
    201, 154,  16, 237, 181, 179, 
    116, 105, 129, 220, 249, 183, 
     26,  21,  81, 128, 165,  31, 
    149,  93, 120, 220, 157, 234, 
    210, 116, 254, 152, 218, 209, 
     83, 151, 150,  83, 232, 222, 
    181, 187,  46, 109, 231, 222, 
     30, 191,  79,  36, 205, 244, 
    173, 223, 254, 236,  21, 109, 
     86, 250, 239, 163,  39, 250, 
     68, 187, 157,  30,  76, 223, 
    237,  33, 244,  95, 186, 209, 
    213,  71, 232, 191, 127, 254, 
    114,  15, 161, 255, 246, 208, 
    197, 221,  28,  95, 152, 166, 
     35,  44, 203,  17, 182, 237, 
    212, 245, 115, 213, 181, 247, 
    158, 238, 140, 247,  73, 177, 
    255, 153, 196, 189,  45,   1, 
     77,  64,  13, 168,   1, 229, 
    185, 212, 181, 185, 183,  97, 
    110, 214,  12,  18,  89,  43, 
     48, 178, 118,  16, 142, 207, 
     95, 235, 175, 107,  78,  64, 
     79, 174, 247, 155, 116, 126, 
     73, 234,  53,  61,   9,  77, 
     64,  45, 168,   1, 149, 174, 
    137,  50, 237,  96,  95, 194, 
    181,  66,  53,  92,  59,  84, 
    115, 196,   9, 146,  35, 169, 
    192,  26,  89,  29,  96,  78, 
     42, 209,  97, 165, 140,  78, 
     59,  69, 166, 179, 196, 247, 
     72,   1,  21,  80,  13, 170, 
     65, 101,  14, 123, 231, 176, 
    119, 142, 247, 158, 175, 210, 
    157,  27,   3, 148, 163,  64, 
    228, 180,  64, 203, 201,  48, 
    159,  31, 238, 191, 236,  37, 
    228,  75, 200, 151, 144,  47, 
    150,  57,  66, 211,  28,  33, 
    101,  67, 238, 148, 197, 186, 
     44, 214, 101, 101, 176,  70, 
    226, 253, 172, 184,   3, 227, 
    222, 221, 112, 111,  39,  58, 
    183, 176,  30, 253,  97, 193, 
    176,  18,  38,  15, 124,  64, 
    232, 112, 160, 241,  18,  43, 
     92, 134,  62, 174, 167,  21, 
    222,  70,  53, 221,  98, 164, 
    221,  32, 215, 209,   2, 201, 
     48,  56, 142,  36,   3,  45, 
     81, 102, 232, 249,  95, 239, 
     94,  23, 222, 240, 111, 198, 
    214, 168, 160,  51,  35, 237, 
      2, 227, 177, 137, 110, 114, 
    243,  17,  14,  68, 243, 211, 
    145, 178, 112,  29, 227, 168, 
     74, 158, 139,  80, 160,  28, 
    141,  31, 139, 148, 159, 133, 
    107, 207, 149, 121, 252,  18, 
    141, 255,  12, 114, 166, 153, 
     93, 222, 176,  95, 158, 169, 
    120, 135,  74,  51, 103, 182, 
    245,  23, 134, 182, 229, 139, 
    167, 202,  39, 253, 138, 151, 
    157, 154, 171, 120, 131,  83, 
    179, 254, 145, 185,  67, 133, 
    172,  87, 153,  61, 226, 229, 
    143,  21,  39, 253, 217, 138, 
    151, 153,  57,  85, 158,  58, 
    233,  79, 134, 139, 114, 211, 
    126,  97, 102, 218, 255, 169, 
     88,  30,  63, 144, 223,  59, 
     56, 188, 227, 199, 241, 124, 
    113, 238, 244, 108, 113, 206, 
     31, 207,  15,  15,  13, 108, 
     47,  79, 150, 232,  63, 244, 
    174,  57,  48,   0,   0,   0, 
     88,  72,  83,  72,   8,   0, 
      0,   0,  67,  71, 219, 169, 
    243, 236,  84, 238,  88,  80, 
     68,  80, 102,   0,   0,   0, 
     67,  58,  92,  82, 101, 112, 
    111, 115,  92,  88,  98, 111, 
    120,  45,  65,  84,  71,  45, 
     83,  97, 109, 112, 108, 101, 
    115,  92,  75, 105, 116, 115, 
     92,  68, 105, 114, 101,  99, 
    116,  88,  84,  75,  92, 115, 
    114,  99,  92,  83, 104,  97, 
    100, 101, 114, 115,  92,  67, 
    111, 109, 112, 105, 108, 101, 
    100,  92,  88,  98, 111, 120, 
     79, 110, 101,  84, 111, 110, 
    101,  77,  97, 112,  95,  80, 
     83,  72,  68,  82,  49,  48, 
     95,  83,  97, 116, 117, 114, 
     97, 116, 101,  95,  83,  82, 
     71,  66,  46, 112, 100,  98
};
