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
//
ps_5_0
// Opaque Custom Data - XBOX Precompiled Shader Header
// First Precompiled Shader at offset:[97]
// Embedded Data:
//  0x00000061 - Offset To First Precompiled Shader
//  0x00000050 - Original Shader Descriptor
//  0x0000005c - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[32], dynamicIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear v1.xy
dcl_output o0.xyzw
dcl_temps 3
mov r0.xyzw, l(0,0,0,0)
mov r1.x, l(0)
loop 
  ige r1.y, r1.x, l(16)
  breakc_nz r1.y
  add r1.yz, v1.xxyx, cb0[r1.x + 0].xxyx
  sample_indexable(texture2d)(float,float,float,float) r2.xyzw, r1.yzyy, t0.xyzw, s0
  add r0.xyzw, r0.xyzw, r2.xyzw
  iadd r1.x, r1.x, l(1)
endloop 
mul o0.xyzw, r0.xyzw, l(0.062500, 0.062500, 0.062500, 0.062500)
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[97], bundle is:[241] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (PS)
// Shader Hw Stage           : (PS)
// PDB Filename              : C:\Repos\Xbox-ATG-Samples\Kits\DirectXTK\src\Shaders\Compiled\XboxOnePostProcess_PSDownScale4x4.pdb
// Shader Semantic Hash      : 0x3d277806c11dc301
//
// Shader Data:
; ----------------- PS Data ------------------------
; Input Semantic Mappings
;   [0] generic,  usageIdx 1, channelMask  3, param0, paramSlot1, DefaultVal={0,0,0,0}

codeLenInByte        = 712 bytes;

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
NumVgprs             = 38;
NumSgprs             = 52;
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
; CB_SHADER_MASK          = 0x0000000F
CB:OUTPUT0_ENABLE           = 15

; export table for mrt0 [patch@(bytes=0x2B4, dwords=0xAD)]
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
  exp           mrt0, v0, off, off, off done vm         // 000000000008: F8001801 00000000
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v0, v1, off, off done vm          // 000000000008: F8001803 00000100
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v0, v3, off, off done vm          // 000000000008: F8001803 00000300
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v0, v0, v1                       // 000000000000: 5E000300
  v_cvt_pkrtz_f16_f32  v1, v2, v3                       // 000000000004: 5E020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v0, v0, v1                      // 000000000000: 5C000300
  v_cvt_pknorm_u16_f32  v1, v2, v3                      // 000000000004: 5C020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v0, v0, v1                      // 000000000000: 5A000300
  v_cvt_pknorm_i16_f32  v1, v2, v3                      // 000000000004: 5A020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v0, v0, v1                          // 000000000000: 60000300
  v_cvt_pk_u16_u32  v1, v2, v3                          // 000000000004: 60020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v0, v0, v1                          // 000000000000: 62000300
  v_cvt_pk_i16_i32  v1, v2, v3                          // 000000000004: 62020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v0, v1, v2, v3 done vm            // 000000000008: F800180F 03020100
end

// Shader Instructions:
shader main
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_mov_b64     s[48:49], exec                          // 000000000000: BEB0047E
  s_wqm_b64     exec, exec // wrscc                     // 000000000004: BEFE0A7E
  s_mov_b32     s46, s2                                 // 000000000008: BEAE0302
  s_load_dwordx16  s[0:15], s[0:1], 0x00                // 00000000000C: C1000100
  s_waitcnt     lgkmcnt(0)                              // 000000000010: BF8C007F
  s_buffer_load_dwordx2  s[16:17], s[12:15], 0x00       // 000000000014: C2480D00
  s_buffer_load_dwordx2  s[18:19], s[12:15], 0x04       // 000000000018: C2490D04
  s_buffer_load_dwordx2  s[20:21], s[12:15], 0x08       // 00000000001C: C24A0D08
  s_buffer_load_dwordx2  s[22:23], s[12:15], 0x0c       // 000000000020: C24B0D0C
  s_buffer_load_dwordx2  s[24:25], s[12:15], 0x10       // 000000000024: C24C0D10
  s_buffer_load_dwordx2  s[26:27], s[12:15], 0x14       // 000000000028: C24D0D14
  s_buffer_load_dwordx2  s[28:29], s[12:15], 0x18       // 00000000002C: C24E0D18
  s_buffer_load_dwordx2  s[30:31], s[12:15], 0x1c       // 000000000030: C24F0D1C
  s_buffer_load_dwordx2  s[32:33], s[12:15], 0x20       // 000000000034: C2500D20
  s_buffer_load_dwordx2  s[34:35], s[12:15], 0x24       // 000000000038: C2510D24
  s_buffer_load_dwordx2  s[36:37], s[12:15], 0x28       // 00000000003C: C2520D28
  s_buffer_load_dwordx2  s[38:39], s[12:15], 0x2c       // 000000000040: C2530D2C
  s_buffer_load_dwordx2  s[40:41], s[12:15], 0x30       // 000000000044: C2540D30
  s_buffer_load_dwordx2  s[42:43], s[12:15], 0x34       // 000000000048: C2550D34
  s_buffer_load_dwordx2  s[44:45], s[12:15], 0x38       // 00000000004C: C2560D38
  s_buffer_load_dwordx2  s[12:13], s[12:15], 0x3c       // 000000000050: C2460D3C
  s_mov_b32     m0, s46                                 // 000000000054: BEFC032E
  v_interp_p1_f32  v32, v0, attr0.x                     // 000000000058: C8800000
  v_interp_p2_f32  v32, v1, attr0.x                     // 00000000005C: C8810001
  v_interp_p1_f32  v33, v0, attr0.y                     // 000000000060: C8840100
  v_interp_p2_f32  v33, v1, attr0.y                     // 000000000064: C8850101
  s_waitcnt     lgkmcnt(0)                              // 000000000068: BF8C007F
  v_add_f32     v0, s16, v32                            // 00000000006C: 06004010
  v_add_f32     v1, s17, v33                            // 000000000070: 06024211
  v_add_f32     v4, s18, v32                            // 000000000074: 06084012
  v_add_f32     v5, s19, v33                            // 000000000078: 060A4213
  v_add_f32     v8, s20, v32                            // 00000000007C: 06104014
  v_add_f32     v9, s21, v33                            // 000000000080: 06124215
  v_add_f32     v12, s22, v32                           // 000000000084: 06184016
  v_add_f32     v13, s23, v33                           // 000000000088: 061A4217
  v_add_f32     v16, s24, v32                           // 00000000008C: 06204018
  v_add_f32     v17, s25, v33                           // 000000000090: 06224219
  v_add_f32     v20, s26, v32                           // 000000000094: 0628401A
  v_add_f32     v21, s27, v33                           // 000000000098: 062A421B
  v_add_f32     v24, s28, v32                           // 00000000009C: 0630401C
  v_add_f32     v25, s29, v33                           // 0000000000A0: 0632421D
  v_add_f32     v28, s30, v32                           // 0000000000A4: 0638401E
  v_add_f32     v29, s31, v33                           // 0000000000A8: 063A421F
  image_sample  v[0:3], v[0:1], s[0:7], s[8:11] dmask:0xf // 0000000000AC: F0800F00 00400000
  image_sample  v[4:7], v[4:5], s[0:7], s[8:11] dmask:0xf // 0000000000B4: F0800F00 00400404
  image_sample  v[8:11], v[8:9], s[0:7], s[8:11] dmask:0xf // 0000000000BC: F0800F00 00400808
  image_sample  v[12:15], v[12:13], s[0:7], s[8:11] dmask:0xf // 0000000000C4: F0800F00 00400C0C
  image_sample  v[16:19], v[16:17], s[0:7], s[8:11] dmask:0xf // 0000000000CC: F0800F00 00401010
  image_sample  v[20:23], v[20:21], s[0:7], s[8:11] dmask:0xf // 0000000000D4: F0800F00 00401414
  image_sample  v[24:27], v[24:25], s[0:7], s[8:11] dmask:0xf // 0000000000DC: F0800F00 00401818
  image_sample  v[28:31], v[28:29], s[0:7], s[8:11] dmask:0xf // 0000000000E4: F0800F00 00401C1C
  s_waitcnt     vmcnt(6)                                // 0000000000EC: BF8C0F76
  v_add_f32     v0, v0, v4                              // 0000000000F0: 06000900
  v_add_f32     v1, v1, v5                              // 0000000000F4: 06020B01
  v_add_f32     v2, v2, v6                              // 0000000000F8: 06040D02
  v_add_f32     v3, v3, v7                              // 0000000000FC: 06060F03
  s_waitcnt     vmcnt(5)                                // 000000000100: BF8C0F75
  v_add_f32     v0, v0, v8                              // 000000000104: 06001100
  v_add_f32     v1, v1, v9                              // 000000000108: 06021301
  v_add_f32     v2, v2, v10                             // 00000000010C: 06041502
  v_add_f32     v3, v3, v11                             // 000000000110: 06061703
  s_waitcnt     vmcnt(4)                                // 000000000114: BF8C0F74
  v_add_f32     v0, v0, v12                             // 000000000118: 06001900
  v_add_f32     v1, v1, v13                             // 00000000011C: 06021B01
  v_add_f32     v2, v2, v14                             // 000000000120: 06041D02
  v_add_f32     v3, v3, v15                             // 000000000124: 06061F03
  s_waitcnt     vmcnt(3)                                // 000000000128: BF8C0F73
  v_add_f32     v0, v0, v16                             // 00000000012C: 06002100
  v_add_f32     v1, v1, v17                             // 000000000130: 06022301
  v_add_f32     v2, v2, v18                             // 000000000134: 06042502
  v_add_f32     v3, v3, v19                             // 000000000138: 06062703
  s_waitcnt     vmcnt(2)                                // 00000000013C: BF8C0F72
  v_add_f32     v0, v0, v20                             // 000000000140: 06002900
  v_add_f32     v1, v1, v21                             // 000000000144: 06022B01
  v_add_f32     v2, v2, v22                             // 000000000148: 06042D02
  v_add_f32     v3, v3, v23                             // 00000000014C: 06062F03
  s_waitcnt     vmcnt(1)                                // 000000000150: BF8C0F71
  v_add_f32     v0, v0, v24                             // 000000000154: 06003100
  v_add_f32     v1, v1, v25                             // 000000000158: 06023301
  v_add_f32     v2, v2, v26                             // 00000000015C: 06043502
  v_add_f32     v3, v3, v27                             // 000000000160: 06063703
  s_waitcnt     vmcnt(0)                                // 000000000164: BF8C0F70
  v_add_f32     v34, v0, v28                            // 000000000168: 06443900
  v_add_f32     v35, v1, v29                            // 00000000016C: 06463B01
  v_add_f32     v36, v2, v30                            // 000000000170: 06483D02
  v_add_f32     v37, v3, v31                            // 000000000174: 064A3F03
  v_add_f32     v0, s32, v32                            // 000000000178: 06004020
  v_add_f32     v1, s33, v33                            // 00000000017C: 06024221
  v_add_f32     v4, s34, v32                            // 000000000180: 06084022
  v_add_f32     v5, s35, v33                            // 000000000184: 060A4223
  v_add_f32     v8, s36, v32                            // 000000000188: 06104024
  v_add_f32     v9, s37, v33                            // 00000000018C: 06124225
  v_add_f32     v12, s38, v32                           // 000000000190: 06184026
  v_add_f32     v13, s39, v33                           // 000000000194: 061A4227
  v_add_f32     v16, s40, v32                           // 000000000198: 06204028
  v_add_f32     v17, s41, v33                           // 00000000019C: 06224229
  v_add_f32     v20, s42, v32                           // 0000000001A0: 0628402A
  v_add_f32     v21, s43, v33                           // 0000000001A4: 062A422B
  v_add_f32     v24, s44, v32                           // 0000000001A8: 0630402C
  v_add_f32     v25, s45, v33                           // 0000000001AC: 0632422D
  v_add_f32     v28, s12, v32                           // 0000000001B0: 0638400C
  v_add_f32     v29, s13, v33                           // 0000000001B4: 063A420D
  image_sample  v[0:3], v[0:1], s[0:7], s[8:11] dmask:0xf // 0000000001B8: F0800F00 00400000
  image_sample  v[4:7], v[4:5], s[0:7], s[8:11] dmask:0xf // 0000000001C0: F0800F00 00400404
  image_sample  v[8:11], v[8:9], s[0:7], s[8:11] dmask:0xf // 0000000001C8: F0800F00 00400808
  image_sample  v[12:15], v[12:13], s[0:7], s[8:11] dmask:0xf // 0000000001D0: F0800F00 00400C0C
  image_sample  v[16:19], v[16:17], s[0:7], s[8:11] dmask:0xf // 0000000001D8: F0800F00 00401010
  image_sample  v[20:23], v[20:21], s[0:7], s[8:11] dmask:0xf // 0000000001E0: F0800F00 00401414
  image_sample  v[24:27], v[24:25], s[0:7], s[8:11] dmask:0xf // 0000000001E8: F0800F00 00401818
  image_sample  v[28:31], v[28:29], s[0:7], s[8:11] dmask:0xf // 0000000001F0: F0800F00 00401C1C
  s_waitcnt     vmcnt(7)                                // 0000000001F8: BF8C0F77
  v_add_f32     v0, v34, v0                             // 0000000001FC: 06000122
  v_add_f32     v1, v35, v1                             // 000000000200: 06020323
  v_add_f32     v2, v36, v2                             // 000000000204: 06040524
  v_add_f32     v3, v37, v3                             // 000000000208: 06060725
  s_waitcnt     vmcnt(6)                                // 00000000020C: BF8C0F76
  v_add_f32     v0, v0, v4                              // 000000000210: 06000900
  v_add_f32     v1, v1, v5                              // 000000000214: 06020B01
  v_add_f32     v2, v2, v6                              // 000000000218: 06040D02
  v_add_f32     v3, v3, v7                              // 00000000021C: 06060F03
  s_waitcnt     vmcnt(5)                                // 000000000220: BF8C0F75
  v_add_f32     v0, v0, v8                              // 000000000224: 06001100
  v_add_f32     v1, v1, v9                              // 000000000228: 06021301
  v_add_f32     v2, v2, v10                             // 00000000022C: 06041502
  v_add_f32     v3, v3, v11                             // 000000000230: 06061703
  s_waitcnt     vmcnt(4)                                // 000000000234: BF8C0F74
  v_add_f32     v0, v0, v12                             // 000000000238: 06001900
  v_add_f32     v1, v1, v13                             // 00000000023C: 06021B01
  v_add_f32     v2, v2, v14                             // 000000000240: 06041D02
  v_add_f32     v3, v3, v15                             // 000000000244: 06061F03
  s_waitcnt     vmcnt(3)                                // 000000000248: BF8C0F73
  v_add_f32     v0, v0, v16                             // 00000000024C: 06002100
  v_add_f32     v1, v1, v17                             // 000000000250: 06022301
  v_add_f32     v2, v2, v18                             // 000000000254: 06042502
  v_add_f32     v3, v3, v19                             // 000000000258: 06062703
  s_waitcnt     vmcnt(2)                                // 00000000025C: BF8C0F72
  v_add_f32     v0, v0, v20                             // 000000000260: 06002900
  v_add_f32     v1, v1, v21                             // 000000000264: 06022B01
  v_add_f32     v2, v2, v22                             // 000000000268: 06042D02
  v_add_f32     v3, v3, v23                             // 00000000026C: 06062F03
  s_waitcnt     vmcnt(1)                                // 000000000270: BF8C0F71
  v_add_f32     v0, v0, v24                             // 000000000274: 06003100
  v_add_f32     v1, v1, v25                             // 000000000278: 06023301
  v_add_f32     v2, v2, v26                             // 00000000027C: 06043502
  v_add_f32     v3, v3, v27                             // 000000000280: 06063703
  s_waitcnt     vmcnt(0)                                // 000000000284: BF8C0F70
  v_add_f32     v0, v0, v28                             // 000000000288: 06003900
  v_add_f32     v1, v1, v29                             // 00000000028C: 06023B01
  v_add_f32     v2, v2, v30                             // 000000000290: 06043D02
  v_add_f32     v3, v3, v31                             // 000000000294: 06063F03
  s_mov_b32     s0, 0x3d800000                          // 000000000298: BE8003FF 3D800000
  v_mul_legacy_f32  v0, s0, v0                          // 0000000002A0: 0E000000
  v_mul_legacy_f32  v1, s0, v1                          // 0000000002A4: 0E020200
  v_mul_legacy_f32  v2, s0, v2                          // 0000000002A8: 0E040400
  v_mul_legacy_f32  v3, s0, v3                          // 0000000002AC: 0E060600
  s_mov_b64     exec, s[48:49]                          // 0000000002B0: BEFE0430
  v_cvt_pkrtz_f16_f32  v0, v0, v1                       // 0000000002B4: 5E000300
  v_cvt_pkrtz_f16_f32  v1, v2, v3                       // 0000000002B8: 5E020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 0000000002BC: F8001C0F 00000100
  s_endpgm                                              // 0000000002C4: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         24
//  WorkgroupSize:              64
//  NumVRegs:                   38
//  NumSRegs:                   52
//  NumActiveWaveFrontByVReg:   24
//  NumActiveWaveFrontBySReg:   36
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   198
//  CycleSimNWaves:             198
//  Code Size:                  712
//Assembler Counts:
//  num_32bit_ops                     : 143
//  num_64bit_ops                     : 17
//  num_alu                           : 102
//  num_fc                            : 41
//  num_inst_exp                      : 1
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 16
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 18
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 6
//  num_inst_sop2                     : 0
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 0
//  num_inst_vop2                     : 98
//  num_inst_vop3                     : 0
//  num_inst_vopc                     : 0
//  num_inst_vintrp                   : 4
//  constant_literal_operands         : 0
//  num_tex                           : 17
//  num_vmem_group                    : 2
//  vmem_grouping_started             : 0
//
//Compilation Notes:
//
//  PS has no UAV writes, consider forcing REZ/LATEZ.
// Shader Statistics:
// m_uNumActiveWaveFront             : 24
// m_uVRegLimit                      : 47
// m_uSRegLimit                      : 100
// m_uNumVRegs                       : 38
// m_uNumSRegs                       : 52
// m_uSCCodeSize                     : 712
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 24
// m_uNumActiveWaveFrontBySReg       : 36
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 198
// m_uCycleSimNWaves                 : 198

// Assembler Counts:
// num_32bit_ops                     : 143
// num_64bit_ops                     : 17
// num_alu                           : 102
// num_fc                            : 41
// num_inst_exp                      : 1
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 16
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 18
// num_inst_sopc                     : 0
// num_inst_sop1                     : 6
// num_inst_sop2                     : 0
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 0
// num_inst_vop2                     : 98
// num_inst_vop3                     : 0
// num_inst_vopc                     : 0
// num_inst_vintrp                   : 4
// num_inst_smem                     : 17
// constant_literal_operands         : 0
// num_tex                           : 17
// num_vmem_group                    : 2
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

const BYTE PostProcess_PSDownScale4x4[] =
{
     68,  88,  66,  67, 233, 191, 
     16, 246, 192, 188, 145,   7, 
    169, 241, 166,  14,  55, 196, 
    122, 168,   1,   0,   0,   0, 
    147,   6,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    140,   0,   0,   0, 192,   0, 
      0,   0,  24,   6,   0,   0, 
     40,   6,   0,   0,  73,  83, 
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
     44,   0,   0,   0,   1,   0, 
      0,   0,   8,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     83,  86,  95,  84,  97, 114, 
    103, 101, 116,   0, 171, 171, 
     83,  72,  69,  88,  80,   5, 
      0,   0,  80,   0,   0,   0, 
     84,   1,   0,   0,  53,  16, 
      0,   0,   5,   0,   0,   0, 
     97,   0,   0,   0,  80,   0, 
      0,   0,  92,   0,   0,   0, 
    106,   8,   0,   1,  89,   8, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0,  32,   0, 
      0,   0,  90,   0,   0,   3, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  88,  24,   0,   4, 
      0, 112,  16,   0,   0,   0, 
      0,   0,  85,  85,   0,   0, 
     98,  16,   0,   3,  50,  16, 
     16,   0,   1,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   0,   0,   0,   0, 
    104,   0,   0,   2,   3,   0, 
      0,   0,  54,   0,   0,   8, 
    242,   0,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   5,  18,   0,  16,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     48,   0,   0,   1,  33,   0, 
      0,   7,  34,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   1,   0,   0,   0, 
      1,  64,   0,   0,  16,   0, 
      0,   0,   3,   0,   4,   3, 
     26,   0,  16,   0,   1,   0, 
      0,   0,   0,   0,   0,   9, 
     98,   0,  16,   0,   1,   0, 
      0,   0,   6,  17,  16,   0, 
      1,   0,   0,   0,   6, 129, 
     32,   4,   0,   0,   0,   0, 
     10,   0,  16,   0,   1,   0, 
      0,   0,  69,   0,   0, 139, 
    194,   0,   0, 128,  67,  85, 
     21,   0, 242,   0,  16,   0, 
      2,   0,   0,   0, 150,   5, 
     16,   0,   1,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,   0,  96,  16,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   7, 242,   0,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0,  30,   0,   0,   7, 
     18,   0,  16,   0,   1,   0, 
      0,   0,  10,   0,  16,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,   1,   0,   0,   0, 
     22,   0,   0,   1,  56,   0, 
      0,  10, 242,  32,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
    128,  61,   0,   0, 128,  61, 
      0,   0, 128,  61,   0,   0, 
    128,  61,  62,   0,   0,   1, 
     53,  16,   0,   0, 243,   0, 
      0,   0,  23,   0,   1,   0, 
     41,  32,  19,   0, 120,   1, 
    237,  88, 203, 110,  19,  73, 
     20, 173, 126, 112,  99, 192, 
    101,  59,  15,   6, 135,  56, 
    131,  73,  28, 146,   0,  33, 
      1, 194, 155, 136,  30,  39, 
    226,  21,  24,   2, 206, 140, 
     16, 106,  49, 121, 184,  71, 
     19,  41,  96, 227,  54, 144, 
     85,  48,  18, 236, 144,  96, 
    131,  52, 203,  89,  32, 118, 
    131, 242,   1, 200,  25,  26, 
      9, 249,  71, 144,  88, 176, 
     96,   7,  11,   4, 156, 219, 
    174,  14,  38,  12,  59,  75, 
    160,  25,  31, 233, 212, 237, 
    123, 186,  92, 117, 251,  84, 
    203, 234, 170, 100, 171, 240, 
    241, 228,  81, 236,  13, 199, 
     23,  15, 158, 237, 203, 107, 
     66, 172, 193,  53, 130,  31, 
     25, 127,  74, 110, 133,  88, 
    138, 113,  43,  68,  28,  28, 
      4, 179, 224,  86, 112,  24, 
    172, 232,  66,  88, 136, 124, 
     47,   5, 246, 129, 194, 106, 
     31,  21, 165, 142,  81, 190, 
    220,   5, 246, 128, 207,  21, 
    239, 129, 205, 224, 239,  96, 
     63, 200, 243,  49, 212,  20, 
     62,  90, 184,   1, 136, 155, 
     85, 152, 225,  70, 193,   4, 
    121,  44,   6,  71, 148, 242, 
      9,  14,  55, 255, 142, 191, 
     64, 174, 255, 107, 224, 218, 
    130, 122, 184,  62, 174, 147, 
    193, 207, 251, 173,  81, 245, 
    235,  83, 203,  12, 214, 137, 
    193, 235,  81, 139,   8, 200, 
    125,  24,  83, 234, 161,  12, 
    110, 128, 162, 202, 131, 181, 
    252,   7, 252,  26,  62,   0, 
    170, 251,  10, 130, 156, 199, 
     39,  13, 163, 134, 112, 241, 
     63,   5, 191, 139,  12, 246, 
    130, 151, 128, 189, 137, 130, 
      1, 130, 251, 127, 115,  35, 
     74, 203, 204, 251, 113, 241, 
    150, 179,  32, 215,  86, 229, 
      6, 231,  60,  96, 109, 206, 
    139, 103, 136,  75, 122, 147, 
    126,  41, 154,  80, 247,  13, 
     97,  35, 183, 107, 242, 139, 
    200,  47, 214, 228,  83, 200, 
    167, 106, 242,  25, 228,  51, 
     43, 185,  26,  63, 234, 207, 
    167,  27, 188, 214,  16,  23, 
    191, 103,  54, 106, 172,  15, 
     27,  53, 214, 135, 141,  26, 
    235, 195,  70, 141, 245,  97, 
    163, 198, 250, 176,  81,  99, 
    125, 216, 168, 177, 110,  20, 
    139, 230,  82, 121, 113, 221, 
    251, 178, 110,  60,  46, 227, 
    251, 237, 233,  77, 113, 119, 
     89, 200,  19, 158,  41,  79, 
    122,  33, 121, 202,  11, 203, 
    113,  47,  38,  79, 123, 109, 
    242, 140,  23, 151,  63, 123, 
      9, 121, 214,  75, 202,   9, 
     47,  37, 207, 121, 125, 242, 
    188, 183,  67, 102, 188,  33, 
     57, 233,  13, 203,  95, 188, 
      3, 242,  87, 239, 136,  60, 
    230, 237,  52, 222, 149, 241, 
     13,  88, 209, 196, 173, 138, 
    208, 110,  87,  52, 237,  78, 
    133, 199, 141,  89, 130, 154, 
    211,  58, 181,  88,  33, 106, 
     77, 175, 163,  54,  43,  70, 
     27, 210,  45, 244, 131,  21, 
    167, 141, 233,  77,  20, 183, 
    146, 212, 158, 238, 162,  77, 
     86,  31, 117, 164, 183,  81, 
    194,  26, 162, 206, 244, 110, 
    250, 209,  58,  64, 155, 211, 
    135,  72,  68,  75, 175, 253, 
     29,  34, 162, 105,  86,  99, 
     40,  84, 141, 225, 112,  53, 
    198,  48,   9, 199, 182, 182, 
    106, 140, 199, 171,  49, 145, 
    176, 196, 245,  40, 158, 109, 
     45, 182,  23, 235, 117, 210, 
    165,  73,  70, 148, 232,  26, 
    107, 205, 208,  90, 161, 109, 
    128, 182, 145, 168, 200,  90, 
     59, 180,  14, 104, 157, 208, 
     54,  19, 185, 172, 109, 129, 
    214,  13, 173,   7,  90,  47, 
     81, 129, 181, 126, 104, 219, 
    161,  13,  64,  27,  36, 186, 
    202, 218,  46, 104, 123, 160, 
    237, 133, 182, 159,  40, 207, 
    218, 193,  49, 210,  14,  31, 
     35, 125, 228,   4,  25,  71, 
     79,  81,  18,  94, 108, 129, 
     23,  93, 240, 162,  27,  94, 
    164, 224,  69,  15, 188, 216, 
     10,  47, 122, 225,  69,  31, 
    188, 232, 135,  23, 219, 224, 
    197, 118, 120, 177,   3,  94, 
     12, 192, 139,  48, 188, 144, 
    117, 240, 226,   6, 106, 234, 
    210,   4, 117,  27,  58, 165, 
    214, 152, 212, 211,  68, 244, 
    109, 253, 129, 118,  24, 218, 
      8, 180, 163,  68,  31, 140, 
     18, 191,  67,  35, 120,  69, 
     35,  66, 215,  35, 194,  52, 
     35, 130,  40,  50, 100, 190, 
     47,  99, 207, 241, 249, 158, 
     69, 220,  90, 110, 231, 184, 
    106, 191, 234,  35, 228, 119, 
     88, 129, 159, 153, 218, 103, 
    219,  75, 255, 103, 208, 194, 
     28,  21,  94, 169,  13, 105, 
     69,  69,  62, 143,  88,  11, 
    106, 152, 156, 145,   4,  77, 
    117, 170, 160,  61, 235, 124, 
     74,  11, 189,  92, 171, 143, 
    148,  58,  72,  48,  85, 228, 
    190, 193, 216, 131, 152,  46, 
     43,  30, 242, 229,  23,  56, 
    173, 250,  31,  81, 145, 167, 
    230, 189,  94,  68, 157, 162, 
    148,  34,  83,  28, 196, 188, 
    186, 159,  85, 145, 159, 101, 
     61,  24, 212, 241,  82, 233, 
    183,  85, 228,  51,  22, 174, 
    116, 244, 144, 125, 222, 201, 
    231,  92, 251, 194,  76, 110, 
     97, 224, 167, 201, 227,   3, 
    153, 233, 203, 249, 121, 199, 
    181, 199, 231, 138, 174,  61, 
     54,  87, 112, 102, 139,  23, 
     38, 199, 109, 183,  48, 107, 
    103, 254, 152, 206,  58,   5, 
    215,  30, 205,  93, 206, 207, 
    205,  59,  89, 255,  71, 103, 
    175,  56,  19,  57, 183,  56, 
     81, 200, 205,  58, 174, 251, 
    219,  68, 102,  44, 119, 227, 
     74, 102, 118, 122, 222,  25, 
     94,  24, 222, 153, 207, 214, 
    156, 168, 168, 131,  23, 222, 
    132, 178,  99, 236,  59, 255, 
     39, 154, 254,  85, 224,   3, 
     16, 179, 154, 212,  17, 210, 
    127,  16,  66, 124,   4,  66, 
    114,  83, 225,   0,   0,   0, 
     88,  72,  83,  72,   8,   0, 
      0,   0,   1, 195,  29, 193, 
      6, 120,  39,  61,  88,  80, 
     68,  80,  99,   0,   0,   0, 
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
     79, 110, 101,  80, 111, 115, 
    116,  80, 114, 111,  99, 101, 
    115, 115,  95,  80,  83,  68, 
    111, 119, 110,  83,  99,  97, 
    108, 101,  52, 120,  52,  46, 
    112, 100,  98
};