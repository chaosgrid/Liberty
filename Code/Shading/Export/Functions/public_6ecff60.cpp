#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfc30);
CLANG_FORWARD_PROC_SYMBOL(public_6ecff60);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0400);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0440);

#define public_6ecff93 _public_6ecff93
#define public_6ecffa4 _public_6ecffa4
#define public_6ecffb5 _public_6ecffb5
#define public_6ecffcf _public_6ecffcf
#define public_6ecffed _public_6ecffed
#define public_6ecfff9 _public_6ecfff9
#define public_6ed0009 _public_6ed0009
#define public_6ed0022 _public_6ed0022
#define public_6ed0032 _public_6ed0032
#define public_6ed0066 _public_6ed0066
#define public_6ed0074 _public_6ed0074
#define public_6ed007f _public_6ed007f
#define public_6ed00a3 _public_6ed00a3
#define public_6ed00a7 _public_6ed00a7
#define public_6ed00ab _public_6ed00ab
#define public_6ed00af _public_6ed00af
#define public_6ed00b3 _public_6ed00b3
#define public_6ed00b7 _public_6ed00b7
#define public_6ed00d8 _public_6ed00d8
#define public_6ed00e0 _public_6ed00e0
#define public_6ed00f1 _public_6ed00f1
#define public_6ed00f5 _public_6ed00f5
#define public_6ed00fd _public_6ed00fd
#define public_6ed010d _public_6ed010d
#define public_6ed012a _public_6ed012a
#define public_6ed013e _public_6ed013e
#define public_6ed0153 _public_6ed0153
#define public_6ed015a _public_6ed015a
#define public_6ed016e _public_6ed016e
#define public_6ed0197 _public_6ed0197
#define public_6ed01a8 _public_6ed01a8
#define public_6ed01c1 _public_6ed01c1
#define public_6ed01df _public_6ed01df
#define public_6ed0210 _public_6ed0210
#define public_6ed0225 _public_6ed0225
#define public_6ed0229 _public_6ed0229
#define public_6ed0237 _public_6ed0237
#define public_6ed023d _public_6ed023d
#define public_6ed0259 _public_6ed0259

PROC_DECLARE(0x6ecff60, internal_6ecff60, public_6ecff60);
extern "C" NAKED register_t __cdecl internal_6ecff60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ebx], 0
        mov eax, dword ptr ds : [public_6ed5834]
        movsx ecx, byte ptr ds : [eax]
        push ebp
        inc eax
        cmp ecx, 0x7C
        push esi
        push edi
        mov dword ptr ds : [public_6ed5834], eax
        ja public_6ed01a8
/*FIXUP movzx ecx, byte ptr ds : [ecx+public_6ed0280] @0x6ecff85*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6ed0260] @0x6ecff8c*/
  JMPTB cmp ecx, 0
  JMPTB jne public_4c000000000010b0
  JMPTB mov ecx, 0
  JMPTB public_4c000000000010b0 : nop
        je public_6ed0153
  JMPTB cmp ecx, 1
  JMPTB jne public_4c000000000010ac
  JMPTB mov ecx, 7
  JMPTB public_4c000000000010ac : nop
        je public_6ed01a8
  JMPTB cmp ecx, 2
  JMPTB jne public_4c000000000010a8
  JMPTB mov ecx, 7
  JMPTB public_4c000000000010a8 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 3
  JMPTB jne public_4c000000000010a4
  JMPTB mov ecx, 7
  JMPTB public_4c000000000010a4 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 4
  JMPTB jne public_4c000000000010a0
  JMPTB mov ecx, 7
  JMPTB public_4c000000000010a0 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 5
  JMPTB jne public_4c0000000000109c
  JMPTB mov ecx, 7
  JMPTB public_4c0000000000109c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 6
  JMPTB jne public_4c00000000001098
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001098 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 7
  JMPTB jne public_4c00000000001094
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001094 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 8
  JMPTB jne public_4c00000000001090
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001090 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 9
  JMPTB jne public_4c0000000000108c
  JMPTB mov ecx, 7
  JMPTB public_4c0000000000108c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0xA
  JMPTB jne public_4c00000000001088
  JMPTB mov ecx, 0
  JMPTB public_4c00000000001088 : nop
        je public_6ed0153
  JMPTB cmp ecx, 0xB
  JMPTB jne public_4c00000000001084
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001084 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0xC
  JMPTB jne public_4c00000000001080
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001080 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0xD
  JMPTB jne public_4c0000000000107c
  JMPTB mov ecx, 7
  JMPTB public_4c0000000000107c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0xE
  JMPTB jne public_4c00000000001078
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001078 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0xF
  JMPTB jne public_4c00000000001074
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001074 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x10
  JMPTB jne public_4c00000000001070
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001070 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x11
  JMPTB jne public_4c0000000000106c
  JMPTB mov ecx, 7
  JMPTB public_4c0000000000106c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x12
  JMPTB jne public_4c00000000001068
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001068 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x13
  JMPTB jne public_4c00000000001064
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001064 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x14
  JMPTB jne public_4c00000000001060
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001060 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x15
  JMPTB jne public_4c0000000000105c
  JMPTB mov ecx, 7
  JMPTB public_4c0000000000105c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x16
  JMPTB jne public_4c00000000001058
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001058 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x17
  JMPTB jne public_4c00000000001054
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001054 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x18
  JMPTB jne public_4c00000000001050
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001050 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x19
  JMPTB jne public_4c0000000000104c
  JMPTB mov ecx, 7
  JMPTB public_4c0000000000104c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x1A
  JMPTB jne public_4c00000000001048
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001048 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x1B
  JMPTB jne public_4c00000000001044
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001044 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x1C
  JMPTB jne public_4c00000000001040
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001040 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x1D
  JMPTB jne public_4c0000000000103c
  JMPTB mov ecx, 7
  JMPTB public_4c0000000000103c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x1E
  JMPTB jne public_4c00000000001038
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001038 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x1F
  JMPTB jne public_4c00000000001034
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001034 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x20
  JMPTB jne public_4c00000000001030
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001030 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x21
  JMPTB jne public_4c0000000000102c
  JMPTB mov ecx, 7
  JMPTB public_4c0000000000102c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x22
  JMPTB jne public_4c00000000001028
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001028 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x23
  JMPTB jne public_4c00000000001024
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001024 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x24
  JMPTB jne public_4c00000000001020
  JMPTB mov ecx, 1
  JMPTB public_4c00000000001020 : nop
        je public_6ecffa4
  JMPTB cmp ecx, 0x25
  JMPTB jne public_4c0000000000101c
  JMPTB mov ecx, 7
  JMPTB public_4c0000000000101c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x26
  JMPTB jne public_4c00000000001018
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001018 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x27
  JMPTB jne public_4c00000000001014
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001014 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x28
  JMPTB jne public_4c00000000001010
  JMPTB mov ecx, 2
  JMPTB public_4c00000000001010 : nop
        je public_6ed013e
  JMPTB cmp ecx, 0x29
  JMPTB jne public_4c0000000000100c
  JMPTB mov ecx, 0
  JMPTB public_4c0000000000100c : nop
        je public_6ed0153
  JMPTB cmp ecx, 0x2A
  JMPTB jne public_4c00000000001008
  JMPTB mov ecx, 0
  JMPTB public_4c00000000001008 : nop
        je public_6ed0153
  JMPTB cmp ecx, 0x2B
  JMPTB jne public_4c00000000001004
  JMPTB mov ecx, 0
  JMPTB public_4c00000000001004 : nop
        je public_6ed0153
  JMPTB cmp ecx, 0x2C
  JMPTB jne public_4c00000000001000
  JMPTB mov ecx, 7
  JMPTB public_4c00000000001000 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x2D
  JMPTB jne public_4c00000000000ffc
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ffc : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x2E
  JMPTB jne public_4c00000000000ff8
  JMPTB mov ecx, 3
  JMPTB public_4c00000000000ff8 : nop
        je public_6ecffb5
  JMPTB cmp ecx, 0x2F
  JMPTB jne public_4c00000000000ff4
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ff4 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x30
  JMPTB jne public_4c00000000000ff0
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ff0 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x31
  JMPTB jne public_4c00000000000fec
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fec : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x32
  JMPTB jne public_4c00000000000fe8
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fe8 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x33
  JMPTB jne public_4c00000000000fe4
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fe4 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x34
  JMPTB jne public_4c00000000000fe0
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fe0 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x35
  JMPTB jne public_4c00000000000fdc
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fdc : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x36
  JMPTB jne public_4c00000000000fd8
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fd8 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x37
  JMPTB jne public_4c00000000000fd4
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fd4 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x38
  JMPTB jne public_4c00000000000fd0
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fd0 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x39
  JMPTB jne public_4c00000000000fcc
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fcc : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x3A
  JMPTB jne public_4c00000000000fc8
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fc8 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x3B
  JMPTB jne public_4c00000000000fc4
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fc4 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x3C
  JMPTB jne public_4c00000000000fc0
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fc0 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x3D
  JMPTB jne public_4c00000000000fbc
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fbc : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x3E
  JMPTB jne public_4c00000000000fb8
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fb8 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x3F
  JMPTB jne public_4c00000000000fb4
  JMPTB mov ecx, 0
  JMPTB public_4c00000000000fb4 : nop
        je public_6ed0153
  JMPTB cmp ecx, 0x40
  JMPTB jne public_4c00000000000fb0
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fb0 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x41
  JMPTB jne public_4c00000000000fac
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fac : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x42
  JMPTB jne public_4c00000000000fa8
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fa8 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x43
  JMPTB jne public_4c00000000000fa4
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fa4 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x44
  JMPTB jne public_4c00000000000fa0
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000fa0 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x45
  JMPTB jne public_4c00000000000f9c
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f9c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x46
  JMPTB jne public_4c00000000000f98
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f98 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x47
  JMPTB jne public_4c00000000000f94
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f94 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x48
  JMPTB jne public_4c00000000000f90
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f90 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x49
  JMPTB jne public_4c00000000000f8c
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f8c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x4A
  JMPTB jne public_4c00000000000f88
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f88 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x4B
  JMPTB jne public_4c00000000000f84
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f84 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x4C
  JMPTB jne public_4c00000000000f80
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f80 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x4D
  JMPTB jne public_4c00000000000f7c
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f7c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x4E
  JMPTB jne public_4c00000000000f78
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f78 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x4F
  JMPTB jne public_4c00000000000f74
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f74 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x50
  JMPTB jne public_4c00000000000f70
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f70 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x51
  JMPTB jne public_4c00000000000f6c
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f6c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x52
  JMPTB jne public_4c00000000000f68
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f68 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x53
  JMPTB jne public_4c00000000000f64
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f64 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x54
  JMPTB jne public_4c00000000000f60
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f60 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x55
  JMPTB jne public_4c00000000000f5c
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f5c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x56
  JMPTB jne public_4c00000000000f58
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f58 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x57
  JMPTB jne public_4c00000000000f54
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f54 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x58
  JMPTB jne public_4c00000000000f50
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f50 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x59
  JMPTB jne public_4c00000000000f4c
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f4c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x5A
  JMPTB jne public_4c00000000000f48
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f48 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x5B
  JMPTB jne public_4c00000000000f44
  JMPTB mov ecx, 4
  JMPTB public_4c00000000000f44 : nop
        je public_6ecffcf
  JMPTB cmp ecx, 0x5C
  JMPTB jne public_4c00000000000f40
  JMPTB mov ecx, 5
  JMPTB public_4c00000000000f40 : nop
        je public_6ed016e
  JMPTB cmp ecx, 0x5D
  JMPTB jne public_4c00000000000f3c
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f3c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x5E
  JMPTB jne public_4c00000000000f38
  JMPTB mov ecx, 6
  JMPTB public_4c00000000000f38 : nop
        je public_6ecff93
  JMPTB cmp ecx, 0x5F
  JMPTB jne public_4c00000000000f34
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f34 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x60
  JMPTB jne public_4c00000000000f30
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f30 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x61
  JMPTB jne public_4c00000000000f2c
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f2c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x62
  JMPTB jne public_4c00000000000f28
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f28 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x63
  JMPTB jne public_4c00000000000f24
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f24 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x64
  JMPTB jne public_4c00000000000f20
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f20 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x65
  JMPTB jne public_4c00000000000f1c
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f1c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x66
  JMPTB jne public_4c00000000000f18
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f18 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x67
  JMPTB jne public_4c00000000000f14
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f14 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x68
  JMPTB jne public_4c00000000000f10
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f10 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x69
  JMPTB jne public_4c00000000000f0c
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f0c : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x6A
  JMPTB jne public_4c00000000000f08
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f08 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x6B
  JMPTB jne public_4c00000000000f04
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f04 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x6C
  JMPTB jne public_4c00000000000f00
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000f00 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x6D
  JMPTB jne public_4c00000000000efc
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000efc : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x6E
  JMPTB jne public_4c00000000000ef8
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ef8 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x6F
  JMPTB jne public_4c00000000000ef4
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ef4 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x70
  JMPTB jne public_4c00000000000ef0
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ef0 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x71
  JMPTB jne public_4c00000000000eec
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000eec : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x72
  JMPTB jne public_4c00000000000ee8
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ee8 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x73
  JMPTB jne public_4c00000000000ee4
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ee4 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x74
  JMPTB jne public_4c00000000000ee0
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ee0 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x75
  JMPTB jne public_4c00000000000edc
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000edc : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x76
  JMPTB jne public_4c00000000000ed8
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ed8 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x77
  JMPTB jne public_4c00000000000ed4
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ed4 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x78
  JMPTB jne public_4c00000000000ed0
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ed0 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x79
  JMPTB jne public_4c00000000000ecc
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ecc : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x7A
  JMPTB jne public_4c00000000000ec8
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ec8 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x7B
  JMPTB jne public_4c00000000000ec4
  JMPTB mov ecx, 7
  JMPTB public_4c00000000000ec4 : nop
        je public_6ed01a8
  JMPTB cmp ecx, 0x7C
  JMPTB jne public_4c00000000000ec0
  JMPTB mov ecx, 0
  JMPTB public_4c00000000000ec0 : nop
        je public_6ed0153
  JMPTB int 3
        public_6ecff93 : nop
        push 1
        call public_6ed0400
        add esp, 4
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 
        public_6ecffa4 : nop
        push 2
        call public_6ed0400
        add esp, 4
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 
        public_6ecffb5 : nop
        push 3
        call public_6ed0400
        add esp, 4
        mov ebp, eax
        mov eax, dword ptr ds : [ebx]
        pop edi
        or eax, 3
        mov dword ptr ds : [ebx], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        public_6ecffcf : nop
        cmp byte ptr ds : [eax], 0x5E
        jne public_6ecffed
        push 5
        call public_6ed0400
        mov ebp, eax
        mov eax, dword ptr ds : [public_6ed5834]
        add esp, 4
        inc eax
        mov dword ptr ds : [public_6ed5834], eax
        jmp public_6ecfff9
        public_6ecffed : nop
        push 4
        call public_6ed0400
        add esp, 4
        mov ebp, eax
        public_6ecfff9 : nop
        mov edx, dword ptr ds : [public_6ed5834]
        mov al, byte ptr ds : [edx]
        cmp al, 0x5D
        je public_6ed0009
        cmp al, 0x2D
        jne public_6ed0022
        public_6ed0009 : nop
        mov edx, dword ptr ds : [public_6ed5834]
        movsx eax, al
        inc edx
        push eax
        mov dword ptr ds : [public_6ed5834], edx
        call public_6ed0440
        add esp, 4
        public_6ed0022 : nop
        mov ecx, dword ptr ds : [public_6ed5834]
        mov al, byte ptr ds : [ecx]
        test al, al
        je public_6ed010d
        public_6ed0032 : nop
        cmp al, 0x5D
        je public_6ed010d
        inc ecx
        cmp al, 0x2D
        mov dword ptr ds : [public_6ed5834], ecx
        jne public_6ed007f
        mov al, byte ptr ds : [ecx]
        cmp al, 0x5D
        je public_6ed00a3
        test al, al
        je public_6ed00a3
        movzx esi, byte ptr ds : [ecx-2]
        movzx edi, al
        inc esi
        lea eax, ds:[edi+1]
        cmp esi, eax
        jg public_6ed0153
        cmp esi, edi
        jg public_6ed0074
        public_6ed0066 : nop
        push esi
        call public_6ed0440
        add esp, 4
        inc esi
        cmp esi, edi
        jle public_6ed0066
        public_6ed0074 : nop
        inc dword ptr ds : [public_6ed5834]
        jmp public_6ed00fd
        public_6ed007f : nop
        cmp al, 0x5C
        jne public_6ed00f1
        movsx eax, byte ptr ds : [ecx]
        inc ecx
        sub eax, 0x2D
        cmp eax, 0x47
        mov dword ptr ds : [public_6ed5834], ecx
        ja public_6ed00fd
/*FIXUP movzx ecx, byte ptr ds : [eax+public_6ed0320] @0x6ed0095*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6ed0300] @0x6ed009c*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6ed00a3
  JMPTB cmp eax, 1
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 2
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 3
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 4
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 5
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 6
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 7
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 8
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 9
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 1
  JMPTB je public_6ed00b3
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 2
  JMPTB je public_6ed00d8
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 3
  JMPTB je public_6ed00a7
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 7
  JMPTB je public_6ed00fd
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 4
  JMPTB je public_6ed00af
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 5
  JMPTB je public_6ed00b7
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 6
  JMPTB je public_6ed00ab
  JMPTB int 3
        public_6ed00a3 : nop
        push 0x2D
        jmp public_6ed00f5
        public_6ed00a7 : nop
        push 0xA
        jmp public_6ed00f5
        public_6ed00ab : nop
        push 9
        jmp public_6ed00f5
        public_6ed00af : nop
        push 0xD
        jmp public_6ed00f5
        public_6ed00b3 : nop
        push 0x5C
        jmp public_6ed00f5
        public_6ed00b7 : nop
        push 0x20
        call public_6ed0440
        push 9
        call public_6ed0440
        push 0xA
        call public_6ed0440
        push 0xD
        call public_6ed0440
        add esp, 0x10
        jmp public_6ed00fd
        public_6ed00d8 : nop
        mov esi, 0x30
        lea ecx, ds:[ecx]
        public_6ed00e0 : nop
        push esi
        call public_6ed0440
        add esp, 4
        inc esi
        cmp esi, 0x39
        jle public_6ed00e0
        jmp public_6ed00fd
        public_6ed00f1 : nop
        movsx eax, al
        push eax
        public_6ed00f5 : nop
        call public_6ed0440
        add esp, 4
        public_6ed00fd : nop
        mov ecx, dword ptr ds : [public_6ed5834]
        mov al, byte ptr ds : [ecx]
        test al, al
        jne public_6ed0032
        public_6ed010d : nop
        push 0
        call public_6ed0440
        mov edx, dword ptr ds : [public_6ed5834]
        mov al, byte ptr ds : [edx]
        add esp, 4
        cmp al, 0x5D
        je public_6ed012a
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6ed012a : nop
        inc dword ptr ds : [public_6ed5834]
        mov eax, dword ptr ds : [ebx]
        pop edi
        or eax, 3
        mov dword ptr ds : [ebx], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        public_6ed013e : nop
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        call public_6ecfc30
        mov ebp, eax
        add esp, 8
        test ebp, ebp
        jne public_6ed015a
        public_6ed0153 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6ed015a : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx]
        and ecx, 5
        pop edi
        or eax, ecx
        mov dword ptr ds : [ebx], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        public_6ed016e : nop
        movsx ecx, byte ptr ds : [eax]
        inc eax
        sub ecx, 0
        mov dword ptr ds : [public_6ed5834], eax
        je public_6ed0153
        sub ecx, 0x3C
        je public_6ed0197
        sub ecx, 2
        jne public_6ed01a8
        push 0xD
        call public_6ed0400
        add esp, 4
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 
        public_6ed0197 : nop
        push 0xC
        call public_6ed0400
        add esp, 4
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 
        public_6ed01a8 : nop
        dec eax
        push 8
        mov dword ptr ds : [public_6ed5834], eax
        call public_6ed0400
        add esp, 4
        mov ebp, eax
        mov eax, dword ptr ds : [public_6ed5834]
        xor esi, esi
        public_6ed01c1 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [public_6ed5834], eax
        movsx eax, byte ptr ds : [eax]
        cmp eax, 0x7C
        ja public_6ed0210
/*FIXUP movzx edx, byte ptr ds : [eax+public_6ed0378] @0x6ed01d1*/
/*FIXUP jmp dword ptr ds : [edx*4+public_6ed0368] @0x6ed01d8*/
  JMPTB cmp eax, 0
  JMPTB mov edx, 0
  JMPTB je public_6ed0229
  JMPTB cmp eax, 1
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 2
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 3
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 4
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 5
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 6
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 7
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 8
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 9
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0xA
  JMPTB mov edx, 0
  JMPTB je public_6ed0229
  JMPTB cmp eax, 0xB
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0xC
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0xD
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0xE
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0xF
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x10
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x11
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x12
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x13
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x14
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x15
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x16
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x17
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x18
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x19
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x1A
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x1B
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x1C
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x1D
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x1E
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x1F
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x20
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x21
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x22
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x23
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x24
  JMPTB mov edx, 0
  JMPTB je public_6ed0229
  JMPTB cmp eax, 0x25
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x26
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x27
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x28
  JMPTB mov edx, 0
  JMPTB je public_6ed0229
  JMPTB cmp eax, 0x29
  JMPTB mov edx, 0
  JMPTB je public_6ed0229
  JMPTB cmp eax, 0x2A
  JMPTB mov edx, 1
  JMPTB je public_6ed0225
  JMPTB cmp eax, 0x2B
  JMPTB mov edx, 1
  JMPTB je public_6ed0225
  JMPTB cmp eax, 0x2C
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x2D
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x2E
  JMPTB mov edx, 0
  JMPTB je public_6ed0229
  JMPTB cmp eax, 0x2F
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x30
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x31
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x32
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x33
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x34
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x35
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x36
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x37
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x38
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x39
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x3A
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x3B
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x3C
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x3D
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x3E
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x3F
  JMPTB mov edx, 1
  JMPTB je public_6ed0225
  JMPTB cmp eax, 0x40
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x41
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x42
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x43
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x44
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x45
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x46
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x47
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x48
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x49
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x4A
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x4B
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x4C
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x4D
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x4E
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x4F
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x50
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x51
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x52
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x53
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x54
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x55
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x56
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x57
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x58
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x59
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x5A
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x5B
  JMPTB mov edx, 0
  JMPTB je public_6ed0229
  JMPTB cmp eax, 0x5C
  JMPTB mov edx, 2
  JMPTB je public_6ed01df
  JMPTB cmp eax, 0x5D
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x5E
  JMPTB mov edx, 0
  JMPTB je public_6ed0229
  JMPTB cmp eax, 0x5F
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x60
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x61
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x62
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x63
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x64
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x65
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x66
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x67
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x68
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x69
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x6A
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x6B
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x6C
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x6D
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x6E
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x6F
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x70
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x71
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x72
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x73
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x74
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x75
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x76
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x77
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x78
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x79
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x7A
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x7B
  JMPTB mov edx, 3
  JMPTB je public_6ed0210
  JMPTB cmp eax, 0x7C
  JMPTB mov edx, 0
  JMPTB je public_6ed0229
  JMPTB int 3
        public_6ed01df : nop
        movsx eax, cl
        push eax
        call public_6ed0440
        mov edx, dword ptr ds : [public_6ed5834]
        movsx ecx, byte ptr ds : [edx+1]
        lea eax, ds:[edx+1]
        add esp, 4
        sub ecx, 0
        je public_6ed023d
        sub ecx, 0x3C
        je public_6ed023d
        sub ecx, 2
        je public_6ed023d
        mov esi, edx
        mov dword ptr ds : [public_6ed5834], eax
        jmp public_6ed01c1
        public_6ed0210 : nop
        movsx ecx, cl
        push ecx
        call public_6ed0440
        mov eax, dword ptr ds : [public_6ed5834]
        add esp, 4
        mov esi, eax
        jmp public_6ed01c1
        public_6ed0225 : nop
        test esi, esi
        jne public_6ed0237
        public_6ed0229 : nop
        movsx edx, cl
        push edx
        call public_6ed0440
        add esp, 4
        jmp public_6ed023d
        public_6ed0237 : nop
        mov dword ptr ds : [public_6ed5834], esi
        public_6ed023d : nop
        push 0
        call public_6ed0440
        mov edx, dword ptr ds : [ebx]
        or edx, 1
        add esp, 4
        test esi, esi
        mov dword ptr ds : [ebx], edx
        mov eax, edx
        jne public_6ed0259
        or eax, 2
        mov dword ptr ds : [ebx], eax
        public_6ed0259 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ecff60)
        ASM_EXPORT_ENTRY_FIRST(0x6ecff93, public_6ecff93)
        ASM_EXPORT_ENTRY(0x6ecffa4, public_6ecffa4)
        ASM_EXPORT_ENTRY(0x6ecffb5, public_6ecffb5)
        ASM_EXPORT_ENTRY(0x6ecffcf, public_6ecffcf)
        ASM_EXPORT_ENTRY(0x6ed00a3, public_6ed00a3)
        ASM_EXPORT_ENTRY(0x6ed00a7, public_6ed00a7)
        ASM_EXPORT_ENTRY(0x6ed00ab, public_6ed00ab)
        ASM_EXPORT_ENTRY(0x6ed00af, public_6ed00af)
        ASM_EXPORT_ENTRY(0x6ed00b3, public_6ed00b3)
        ASM_EXPORT_ENTRY(0x6ed00b7, public_6ed00b7)
        ASM_EXPORT_ENTRY(0x6ed00d8, public_6ed00d8)
        ASM_EXPORT_ENTRY(0x6ed00fd, public_6ed00fd)
        ASM_EXPORT_ENTRY(0x6ed013e, public_6ed013e)
        ASM_EXPORT_ENTRY(0x6ed0153, public_6ed0153)
        ASM_EXPORT_ENTRY(0x6ed016e, public_6ed016e)
        ASM_EXPORT_ENTRY(0x6ed01a8, public_6ed01a8)
        ASM_EXPORT_ENTRY(0x6ed01df, public_6ed01df)
        ASM_EXPORT_ENTRY(0x6ed0210, public_6ed0210)
        ASM_EXPORT_ENTRY(0x6ed0225, public_6ed0225)
        ASM_EXPORT_ENTRY_LAST(0x6ed0229, public_6ed0229)
    }
}

#undef public_6ecff93
#undef public_6ecffa4
#undef public_6ecffb5
#undef public_6ecffcf
#undef public_6ecffed
#undef public_6ecfff9
#undef public_6ed0009
#undef public_6ed0022
#undef public_6ed0032
#undef public_6ed0066
#undef public_6ed0074
#undef public_6ed007f
#undef public_6ed00a3
#undef public_6ed00a7
#undef public_6ed00ab
#undef public_6ed00af
#undef public_6ed00b3
#undef public_6ed00b7
#undef public_6ed00d8
#undef public_6ed00e0
#undef public_6ed00f1
#undef public_6ed00f5
#undef public_6ed00fd
#undef public_6ed010d
#undef public_6ed012a
#undef public_6ed013e
#undef public_6ed0153
#undef public_6ed015a
#undef public_6ed016e
#undef public_6ed0197
#undef public_6ed01a8
#undef public_6ed01c1
#undef public_6ed01df
#undef public_6ed0210
#undef public_6ed0225
#undef public_6ed0229
#undef public_6ed0237
#undef public_6ed023d
#undef public_6ed0259

#pragma init_seg(compiler)
extern "C" void const* const public_6ecff93 = __AsmFindLabelExport(&internal_6ecff60, 0x6ecff93);
extern "C" void const* const public_6ecffa4 = __AsmFindLabelExport(&internal_6ecff60, 0x6ecffa4);
extern "C" void const* const public_6ecffb5 = __AsmFindLabelExport(&internal_6ecff60, 0x6ecffb5);
extern "C" void const* const public_6ecffcf = __AsmFindLabelExport(&internal_6ecff60, 0x6ecffcf);
extern "C" void const* const public_6ed00a3 = __AsmFindLabelExport(&internal_6ecff60, 0x6ed00a3);
extern "C" void const* const public_6ed00a7 = __AsmFindLabelExport(&internal_6ecff60, 0x6ed00a7);
extern "C" void const* const public_6ed00ab = __AsmFindLabelExport(&internal_6ecff60, 0x6ed00ab);
extern "C" void const* const public_6ed00af = __AsmFindLabelExport(&internal_6ecff60, 0x6ed00af);
extern "C" void const* const public_6ed00b3 = __AsmFindLabelExport(&internal_6ecff60, 0x6ed00b3);
extern "C" void const* const public_6ed00b7 = __AsmFindLabelExport(&internal_6ecff60, 0x6ed00b7);
extern "C" void const* const public_6ed00d8 = __AsmFindLabelExport(&internal_6ecff60, 0x6ed00d8);
extern "C" void const* const public_6ed00fd = __AsmFindLabelExport(&internal_6ecff60, 0x6ed00fd);
extern "C" void const* const public_6ed013e = __AsmFindLabelExport(&internal_6ecff60, 0x6ed013e);
extern "C" void const* const public_6ed0153 = __AsmFindLabelExport(&internal_6ecff60, 0x6ed0153);
extern "C" void const* const public_6ed016e = __AsmFindLabelExport(&internal_6ecff60, 0x6ed016e);
extern "C" void const* const public_6ed01a8 = __AsmFindLabelExport(&internal_6ecff60, 0x6ed01a8);
extern "C" void const* const public_6ed01df = __AsmFindLabelExport(&internal_6ecff60, 0x6ed01df);
extern "C" void const* const public_6ed0210 = __AsmFindLabelExport(&internal_6ecff60, 0x6ed0210);
extern "C" void const* const public_6ed0225 = __AsmFindLabelExport(&internal_6ecff60, 0x6ed0225);
extern "C" void const* const public_6ed0229 = __AsmFindLabelExport(&internal_6ecff60, 0x6ed0229);
