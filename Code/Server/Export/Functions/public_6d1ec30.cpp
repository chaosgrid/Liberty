#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1ec30);
CLANG_FORWARD_PROC_SYMBOL(public_6d22070);
CLANG_FORWARD_PROC_SYMBOL(public_6d226d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d22770);
CLANG_FORWARD_PROC_SYMBOL(public_6d29370);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62751);

#define public_6d1ec68 _public_6d1ec68
#define public_6d1ecb1 _public_6d1ecb1
#define public_6d1ecb7 _public_6d1ecb7
#define public_6d1ecd8 _public_6d1ecd8
#define public_6d1ecfb _public_6d1ecfb
#define public_6d1ed14 _public_6d1ed14
#define public_6d1ed2d _public_6d1ed2d
#define public_6d1ed46 _public_6d1ed46
#define public_6d1ed5e _public_6d1ed5e
#define public_6d1ed65 _public_6d1ed65
#define public_6d1ed6a _public_6d1ed6a
#define public_6d1ed6e _public_6d1ed6e
#define public_6d1ed81 _public_6d1ed81
#define public_6d1ed86 _public_6d1ed86
#define public_6d1ed8d _public_6d1ed8d
#define public_6d1ed92 _public_6d1ed92
#define public_6d1ed9c _public_6d1ed9c
#define public_6d1eda1 _public_6d1eda1
#define public_6d1edb0 _public_6d1edb0
#define public_6d1edc3 _public_6d1edc3
#define public_6d1edc9 _public_6d1edc9
#define public_6d1edd7 _public_6d1edd7
#define public_6d1ee01 _public_6d1ee01
#define public_6d1ee21 _public_6d1ee21
#define public_6d1ee3a _public_6d1ee3a
#define public_6d1ee57 _public_6d1ee57
#define public_6d1ee5d _public_6d1ee5d
#define public_6d1ee75 _public_6d1ee75
#define public_6d1ee98 _public_6d1ee98
#define public_6d1eeb1 _public_6d1eeb1
#define public_6d1eeca _public_6d1eeca
#define public_6d1eee3 _public_6d1eee3
#define public_6d1eefb _public_6d1eefb
#define public_6d1ef02 _public_6d1ef02
#define public_6d1ef07 _public_6d1ef07
#define public_6d1ef0c _public_6d1ef0c
#define public_6d1ef24 _public_6d1ef24
#define public_6d1ef28 _public_6d1ef28
#define public_6d1ef3b _public_6d1ef3b
#define public_6d1ef56 _public_6d1ef56
#define public_6d1efca _public_6d1efca
#define public_6d1efdf _public_6d1efdf
#define public_6d1eff6 _public_6d1eff6
#define public_6d1effc _public_6d1effc
#define public_6d1f006 _public_6d1f006
#define public_6d1f02f _public_6d1f02f
#define public_6d1f032 _public_6d1f032
#define public_6d1f047 _public_6d1f047
#define public_6d1f04f _public_6d1f04f
#define public_6d1f064 _public_6d1f064
#define public_6d1f081 _public_6d1f081
#define public_6d1f087 _public_6d1f087
#define public_6d1f09f _public_6d1f09f
#define public_6d1f0c2 _public_6d1f0c2
#define public_6d1f0db _public_6d1f0db
#define public_6d1f0f4 _public_6d1f0f4
#define public_6d1f10d _public_6d1f10d
#define public_6d1f125 _public_6d1f125
#define public_6d1f12c _public_6d1f12c
#define public_6d1f131 _public_6d1f131
#define public_6d1f136 _public_6d1f136
#define public_6d1f147 _public_6d1f147

PROC_DECLARE(0x6d1ec30, internal_6d1ec30, public_6d1ec30);
extern "C" NAKED register_t __cdecl internal_6d1ec30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6d62751 @0x6d1ec32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62751
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+0x28]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, edi
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6d1ec68
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ds:[eax+ecx*2]
        public_6d1ec68 : nop
        mov esi, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [esi]
        cmp dword ptr ds : [edx], eax
        je public_6d1efca
        mov ebp, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x18]
        test al, al
        jne public_6d1efca
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], edx
        mov byte ptr ss : [esp+0x12], al
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6d1ecb1
        xor esi, esi
        jmp public_6d1ecb7
        public_6d1ecb1 : nop
        mov ecx, dword ptr ds : [edi+8]
        lea esi, ds:[eax+ecx*2]
        public_6d1ecb7 : nop
        mov ebx, dword ptr ss : [esp+0x78]
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call public_6d226d0
        cmp eax, esi
        mov edx, 2
        jne public_6d1ecd8
        xor eax, eax
        jmp public_6d1ed6e
        public_6d1ecd8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        movzx ecx, word ptr ds : [ecx]
        add ecx, 0xFFFFFFD6
        xor eax, eax
        cmp ecx, 0x53
        ja public_6d1ed6e
/*FIXUP movzx ecx, byte ptr ds : [ecx+public_6d1f1ac] @0x6d1eced*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6d1f190] @0x6d1ecf4*/
  JMPTB cmp ecx, 0
  JMPTB jne public_4c00000000003028
  JMPTB mov ecx, 0
  JMPTB public_4c00000000003028 : nop
        je public_6d1ecfb
  JMPTB cmp ecx, 1
  JMPTB jne public_4c00000000003024
  JMPTB mov ecx, 1
  JMPTB public_4c00000000003024 : nop
        je public_6d1ed14
  JMPTB cmp ecx, 2
  JMPTB jne public_4c00000000003020
  JMPTB mov ecx, 2
  JMPTB public_4c00000000003020 : nop
        je public_6d1ed65
  JMPTB cmp ecx, 3
  JMPTB jne public_4c0000000000301c
  JMPTB mov ecx, 6
  JMPTB public_4c0000000000301c : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 4
  JMPTB jne public_4c00000000003018
  JMPTB mov ecx, 6
  JMPTB public_4c00000000003018 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 5
  JMPTB jne public_4c00000000003014
  JMPTB mov ecx, 6
  JMPTB public_4c00000000003014 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 6
  JMPTB jne public_4c00000000003010
  JMPTB mov ecx, 6
  JMPTB public_4c00000000003010 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 7
  JMPTB jne public_4c0000000000300c
  JMPTB mov ecx, 6
  JMPTB public_4c0000000000300c : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 8
  JMPTB jne public_4c00000000003008
  JMPTB mov ecx, 6
  JMPTB public_4c00000000003008 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 9
  JMPTB jne public_4c00000000003004
  JMPTB mov ecx, 6
  JMPTB public_4c00000000003004 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0xA
  JMPTB jne public_4c00000000003000
  JMPTB mov ecx, 6
  JMPTB public_4c00000000003000 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0xB
  JMPTB jne public_4c00000000002ffc
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002ffc : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0xC
  JMPTB jne public_4c00000000002ff8
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002ff8 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0xD
  JMPTB jne public_4c00000000002ff4
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002ff4 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0xE
  JMPTB jne public_4c00000000002ff0
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002ff0 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0xF
  JMPTB jne public_4c00000000002fec
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fec : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x10
  JMPTB jne public_4c00000000002fe8
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fe8 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x11
  JMPTB jne public_4c00000000002fe4
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fe4 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x12
  JMPTB jne public_4c00000000002fe0
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fe0 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x13
  JMPTB jne public_4c00000000002fdc
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fdc : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x14
  JMPTB jne public_4c00000000002fd8
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fd8 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x15
  JMPTB jne public_4c00000000002fd4
  JMPTB mov ecx, 3
  JMPTB public_4c00000000002fd4 : nop
        je public_6d1ed2d
  JMPTB cmp ecx, 0x16
  JMPTB jne public_4c00000000002fd0
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fd0 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x17
  JMPTB jne public_4c00000000002fcc
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fcc : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x18
  JMPTB jne public_4c00000000002fc8
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fc8 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x19
  JMPTB jne public_4c00000000002fc4
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fc4 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x1A
  JMPTB jne public_4c00000000002fc0
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fc0 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x1B
  JMPTB jne public_4c00000000002fbc
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fbc : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x1C
  JMPTB jne public_4c00000000002fb8
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fb8 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x1D
  JMPTB jne public_4c00000000002fb4
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fb4 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x1E
  JMPTB jne public_4c00000000002fb0
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fb0 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x1F
  JMPTB jne public_4c00000000002fac
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fac : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x20
  JMPTB jne public_4c00000000002fa8
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fa8 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x21
  JMPTB jne public_4c00000000002fa4
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fa4 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x22
  JMPTB jne public_4c00000000002fa0
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002fa0 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x23
  JMPTB jne public_4c00000000002f9c
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f9c : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x24
  JMPTB jne public_4c00000000002f98
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f98 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x25
  JMPTB jne public_4c00000000002f94
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f94 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x26
  JMPTB jne public_4c00000000002f90
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f90 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x27
  JMPTB jne public_4c00000000002f8c
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f8c : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x28
  JMPTB jne public_4c00000000002f88
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f88 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x29
  JMPTB jne public_4c00000000002f84
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f84 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x2A
  JMPTB jne public_4c00000000002f80
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f80 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x2B
  JMPTB jne public_4c00000000002f7c
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f7c : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x2C
  JMPTB jne public_4c00000000002f78
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f78 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x2D
  JMPTB jne public_4c00000000002f74
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f74 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x2E
  JMPTB jne public_4c00000000002f70
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f70 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x2F
  JMPTB jne public_4c00000000002f6c
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f6c : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x30
  JMPTB jne public_4c00000000002f68
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f68 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x31
  JMPTB jne public_4c00000000002f64
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f64 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x32
  JMPTB jne public_4c00000000002f60
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f60 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x33
  JMPTB jne public_4c00000000002f5c
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f5c : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x34
  JMPTB jne public_4c00000000002f58
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f58 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x35
  JMPTB jne public_4c00000000002f54
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f54 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x36
  JMPTB jne public_4c00000000002f50
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f50 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x37
  JMPTB jne public_4c00000000002f4c
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f4c : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x38
  JMPTB jne public_4c00000000002f48
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f48 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x39
  JMPTB jne public_4c00000000002f44
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f44 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x3A
  JMPTB jne public_4c00000000002f40
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f40 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x3B
  JMPTB jne public_4c00000000002f3c
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f3c : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x3C
  JMPTB jne public_4c00000000002f38
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f38 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x3D
  JMPTB jne public_4c00000000002f34
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f34 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x3E
  JMPTB jne public_4c00000000002f30
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f30 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x3F
  JMPTB jne public_4c00000000002f2c
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f2c : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x40
  JMPTB jne public_4c00000000002f28
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f28 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x41
  JMPTB jne public_4c00000000002f24
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f24 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x42
  JMPTB jne public_4c00000000002f20
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f20 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x43
  JMPTB jne public_4c00000000002f1c
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f1c : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x44
  JMPTB jne public_4c00000000002f18
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f18 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x45
  JMPTB jne public_4c00000000002f14
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f14 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x46
  JMPTB jne public_4c00000000002f10
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f10 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x47
  JMPTB jne public_4c00000000002f0c
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f0c : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x48
  JMPTB jne public_4c00000000002f08
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f08 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x49
  JMPTB jne public_4c00000000002f04
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f04 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x4A
  JMPTB jne public_4c00000000002f00
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002f00 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x4B
  JMPTB jne public_4c00000000002efc
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002efc : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x4C
  JMPTB jne public_4c00000000002ef8
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002ef8 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x4D
  JMPTB jne public_4c00000000002ef4
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002ef4 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x4E
  JMPTB jne public_4c00000000002ef0
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002ef0 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x4F
  JMPTB jne public_4c00000000002eec
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002eec : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x50
  JMPTB jne public_4c00000000002ee8
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002ee8 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x51
  JMPTB jne public_4c00000000002ee4
  JMPTB mov ecx, 4
  JMPTB public_4c00000000002ee4 : nop
        je public_6d1ed5e
  JMPTB cmp ecx, 0x52
  JMPTB jne public_4c00000000002ee0
  JMPTB mov ecx, 6
  JMPTB public_4c00000000002ee0 : nop
        je public_6d1ed6e
  JMPTB cmp ecx, 0x53
  JMPTB jne public_4c00000000002edc
  JMPTB mov ecx, 5
  JMPTB public_4c00000000002edc : nop
        je public_6d1ed46
  JMPTB int 3
        public_6d1ecfb : nop
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call public_6d22770
        neg al
        sbb eax, eax
        and eax, 3
        add eax, 0xA
        jmp public_6d1ed6e
        public_6d1ed14 : nop
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_6d22770
        neg al
        sbb eax, eax
        and eax, 3
        add eax, 9
        jmp public_6d1ed6e
        public_6d1ed2d : nop
        push esi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call public_6d22770
        neg al
        sbb eax, eax
        and eax, 3
        add eax, 0xB
        jmp public_6d1ed6e
        public_6d1ed46 : nop
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call public_6d22770
        neg al
        sbb eax, eax
        neg eax
        add eax, 0x11
        jmp public_6d1ed6e
        public_6d1ed5e : nop
        mov eax, 0xF
        jmp public_6d1ed6a
        public_6d1ed65 : nop
        mov eax, 0x10
        public_6d1ed6a : nop
        add dword ptr ss : [esp+0x14], edx
        public_6d1ed6e : nop
        sub eax, 9
        cmp eax, 6
        ja public_6d1efca
/*FIXUP jmp dword ptr ds : [eax*4+public_6d1f200] @0x6d1ed7a*/
  JMPTB cmp eax, 0
  JMPTB je public_6d1ed92
  JMPTB cmp eax, 1
  JMPTB je public_6d1ed86
  JMPTB cmp eax, 2
  JMPTB je public_6d1eda1
  JMPTB cmp eax, 3
  JMPTB je public_6d1ed8d
  JMPTB cmp eax, 4
  JMPTB je public_6d1ed81
  JMPTB cmp eax, 5
  JMPTB je public_6d1ed9c
  JMPTB cmp eax, 6
  JMPTB je public_6d1edb0
  JMPTB int 3
        public_6d1ed81 : nop
        mov byte ptr ss : [esp+0x12], 1
        public_6d1ed86 : nop
        xor esi, esi
        jmp public_6d1ef3b
        public_6d1ed8d : nop
        mov byte ptr ss : [esp+0x12], 1
        public_6d1ed92 : nop
        mov esi, 1
        jmp public_6d1ef3b
        public_6d1ed9c : nop
        mov byte ptr ss : [esp+0x12], 1
        public_6d1eda1 : nop
        xor esi, esi
        mov dword ptr ss : [esp+0x18], 1
        jmp public_6d1ef3b
        public_6d1edb0 : nop
        mov ecx, edi
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6d1edc3
        xor edx, edx
        jmp public_6d1edc9
        public_6d1edc3 : nop
        mov ecx, dword ptr ds : [edi+8]
        lea edx, ds:[eax+ecx*2]
        public_6d1edc9 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        xor ebp, ebp
        cmp ecx, edx
        mov dword ptr ss : [esp+0x78], ebp
        je public_6d1ee21
        public_6d1edd7 : nop
        mov ax, word ptr ds : [ecx]
        cmp ax, 0x30
        jb public_6d1ee01
        cmp ax, 0x39
        ja public_6d1ee01
        cmp ebp, 0xFFFFFFFF
        jae public_6d1ee01
        movzx eax, ax
        add ecx, 2
        cmp ecx, edx
        lea esi, ss:[ebp+ebp*4]
        lea ebp, ds:[eax+esi*2-0x30]
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6d1edd7
        public_6d1ee01 : nop
        cmp ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x78], ebp
        jbe public_6d1ee21
        mov eax, 0xCCCCCCCD
        mul ebp
        shr edx, 3
        mov ebp, edx
        sub ecx, 2
        mov dword ptr ss : [esp+0x78], ebp
        mov dword ptr ss : [esp+0x14], ecx
        public_6d1ee21 : nop
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], ebp
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6d1ee3a
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ds:[eax+ecx*2]
        public_6d1ee3a : nop
        cmp dword ptr ss : [esp+0x14], eax
        je public_6d1efca
        mov ecx, edi
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6d1ee57
        xor esi, esi
        jmp public_6d1ee5d
        public_6d1ee57 : nop
        mov edx, dword ptr ds : [edi+8]
        lea esi, ds:[eax+edx*2]
        public_6d1ee5d : nop
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_6d226d0
        cmp eax, esi
        jne public_6d1ee75
        xor eax, eax
        jmp public_6d1ef0c
        public_6d1ee75 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        movzx ecx, word ptr ds : [ecx]
        add ecx, 0xFFFFFFD6
        xor eax, eax
        cmp ecx, 0x53
        ja public_6d1ef0c
/*FIXUP movzx edx, byte ptr ds : [ecx+public_6d1f238] @0x6d1ee8a*/
/*FIXUP jmp dword ptr ds : [edx*4+public_6d1f21c] @0x6d1ee91*/
  JMPTB cmp ecx, 0
  JMPTB mov edx, 0
  JMPTB je public_6d1ee98
  JMPTB cmp ecx, 1
  JMPTB mov edx, 1
  JMPTB je public_6d1eeb1
  JMPTB cmp ecx, 2
  JMPTB mov edx, 2
  JMPTB je public_6d1ef02
  JMPTB cmp ecx, 3
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 4
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 5
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 6
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 7
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 8
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 9
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0xA
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0xB
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0xC
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0xD
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0xE
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0xF
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x10
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x11
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x12
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x13
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x14
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x15
  JMPTB mov edx, 3
  JMPTB je public_6d1eeca
  JMPTB cmp ecx, 0x16
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x17
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x18
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x19
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x1A
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x1B
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x1C
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x1D
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x1E
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x1F
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x20
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x21
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x22
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x23
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x24
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x25
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x26
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x27
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x28
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x29
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x2A
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x2B
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x2C
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x2D
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x2E
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x2F
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x30
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x31
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x32
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x33
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x34
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x35
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x36
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x37
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x38
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x39
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x3A
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x3B
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x3C
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x3D
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x3E
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x3F
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x40
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x41
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x42
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x43
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x44
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x45
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x46
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x47
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x48
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x49
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x4A
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x4B
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x4C
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x4D
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x4E
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x4F
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x50
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x51
  JMPTB mov edx, 4
  JMPTB je public_6d1eefb
  JMPTB cmp ecx, 0x52
  JMPTB mov edx, 6
  JMPTB je public_6d1ef0c
  JMPTB cmp ecx, 0x53
  JMPTB mov edx, 5
  JMPTB je public_6d1eee3
  JMPTB int 3
        public_6d1ee98 : nop
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_6d22770
        neg al
        sbb eax, eax
        and eax, 3
        add eax, 0xA
        jmp public_6d1ef0c
        public_6d1eeb1 : nop
        push esi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call public_6d22770
        neg al
        sbb eax, eax
        and eax, 3
        add eax, 9
        jmp public_6d1ef0c
        public_6d1eeca : nop
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call public_6d22770
        neg al
        sbb eax, eax
        and eax, 3
        add eax, 0xB
        jmp public_6d1ef0c
        public_6d1eee3 : nop
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_6d22770
        neg al
        sbb eax, eax
        neg eax
        add eax, 0x11
        jmp public_6d1ef0c
        public_6d1eefb : nop
        mov eax, 0xF
        jmp public_6d1ef07
        public_6d1ef02 : nop
        mov eax, 0x10
        public_6d1ef07 : nop
        add dword ptr ss : [esp+0x14], 2
        public_6d1ef0c : nop
        sub eax, 0x10
        je public_6d1efdf
        dec eax
        je public_6d1ef24
        dec eax
        jne public_6d1efca
        mov byte ptr ss : [esp+0x12], 1
        public_6d1ef24 : nop
        mov dword ptr ss : [esp+0x18], ebp
        public_6d1ef28 : nop
        cmp dword ptr ss : [esp+0x78], 0xFFFFFFFF
        je public_6d1efca
        mov ebp, dword ptr ss : [esp+0x70]
        mov esi, dword ptr ss : [esp+0x20]
        public_6d1ef3b : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        test al, al
        je public_6d1ef56
        cmp dword ptr ss : [esp+0x18], 0x10
        jbe public_6d1ef56
        mov eax, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [eax+0xE], 0
        public_6d1ef56 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov bl, byte ptr ss : [esp+0x12]
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx]
        add eax, 4
        push eax
        test bl, bl
        sete al
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push esi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ss : [esp+0x30], eax
        test eax, eax
        setne cl
        lea edx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], cl
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x6C], 1
        mov byte ptr ss : [ebp], 0
        mov byte ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], eax
        call public_6d22070
        lea ecx, ss:[esp+0x24]
        call public_6d29370
        mov eax, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x68], 0xFFFFFFFF
        call public_6d29370
        public_6d1efca : nop
        mov ecx, dword ptr ss : [esp+0x60]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x5C
        ret 0xC
        public_6d1efdf : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov ecx, edi
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6d1eff6
        xor edx, edx
        jmp public_6d1effc
        public_6d1eff6 : nop
        mov ecx, dword ptr ds : [edi+8]
        lea edx, ds:[eax+ecx*2]
        public_6d1effc : nop
        mov esi, dword ptr ss : [esp+0x14]
        xor ecx, ecx
        cmp esi, edx
        je public_6d1f047
        public_6d1f006 : nop
        mov ax, word ptr ds : [esi]
        cmp ax, 0x30
        jb public_6d1f02f
        cmp ax, 0x39
        ja public_6d1f02f
        cmp ecx, 0xFFFFFFFF
        jae public_6d1f032
        movzx eax, ax
        add esi, 2
        cmp esi, edx
        lea ecx, ds:[ecx+ecx*4]
        lea ecx, ds:[eax+ecx*2-0x30]
        mov dword ptr ss : [esp+0x14], esi
        jne public_6d1f006
        public_6d1f02f : nop
        cmp ecx, 0xFFFFFFFF
        public_6d1f032 : nop
        jbe public_6d1f047
        mov eax, 0xCCCCCCCD
        mul ecx
        shr edx, 3
        sub esi, 2
        mov ecx, edx
        mov dword ptr ss : [esp+0x14], esi
        public_6d1f047 : nop
        cmp esi, ebp
        je public_6d1f04f
        mov dword ptr ss : [esp+0x18], ecx
        public_6d1f04f : nop
        mov ecx, edi
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6d1f064
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ds:[eax+ecx*2]
        public_6d1f064 : nop
        cmp dword ptr ss : [esp+0x14], eax
        je public_6d1efca
        mov ecx, edi
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6d1f081
        xor esi, esi
        jmp public_6d1f087
        public_6d1f081 : nop
        mov edx, dword ptr ds : [edi+8]
        lea esi, ds:[eax+edx*2]
        public_6d1f087 : nop
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_6d226d0
        cmp eax, esi
        jne public_6d1f09f
        xor eax, eax
        jmp public_6d1f136
        public_6d1f09f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        movzx ecx, word ptr ds : [ecx]
        add ecx, 0xFFFFFFD6
        xor eax, eax
        cmp ecx, 0x53
        ja public_6d1f136
/*FIXUP movzx edx, byte ptr ds : [ecx+public_6d1f2a8] @0x6d1f0b4*/
/*FIXUP jmp dword ptr ds : [edx*4+public_6d1f28c] @0x6d1f0bb*/
  JMPTB cmp ecx, 0
  JMPTB mov edx, 0
  JMPTB je public_6d1f0c2
  JMPTB cmp ecx, 1
  JMPTB mov edx, 1
  JMPTB je public_6d1f0db
  JMPTB cmp ecx, 2
  JMPTB mov edx, 2
  JMPTB je public_6d1f12c
  JMPTB cmp ecx, 3
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 4
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 5
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 6
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 7
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 8
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 9
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0xA
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0xB
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0xC
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0xD
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0xE
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0xF
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x10
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x11
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x12
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x13
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x14
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x15
  JMPTB mov edx, 3
  JMPTB je public_6d1f0f4
  JMPTB cmp ecx, 0x16
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x17
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x18
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x19
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x1A
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x1B
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x1C
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x1D
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x1E
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x1F
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x20
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x21
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x22
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x23
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x24
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x25
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x26
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x27
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x28
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x29
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x2A
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x2B
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x2C
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x2D
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x2E
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x2F
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x30
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x31
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x32
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x33
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x34
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x35
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x36
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x37
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x38
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x39
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x3A
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x3B
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x3C
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x3D
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x3E
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x3F
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x40
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x41
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x42
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x43
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x44
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x45
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x46
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x47
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x48
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x49
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x4A
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x4B
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x4C
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x4D
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x4E
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x4F
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x50
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x51
  JMPTB mov edx, 4
  JMPTB je public_6d1f125
  JMPTB cmp ecx, 0x52
  JMPTB mov edx, 6
  JMPTB je public_6d1f136
  JMPTB cmp ecx, 0x53
  JMPTB mov edx, 5
  JMPTB je public_6d1f10d
  JMPTB int 3
        public_6d1f0c2 : nop
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_6d22770
        neg al
        sbb eax, eax
        and eax, 3
        add eax, 0xA
        jmp public_6d1f136
        public_6d1f0db : nop
        push esi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call public_6d22770
        neg al
        sbb eax, eax
        and eax, 3
        add eax, 9
        jmp public_6d1f136
        public_6d1f0f4 : nop
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call public_6d22770
        neg al
        sbb eax, eax
        and eax, 3
        add eax, 0xB
        jmp public_6d1f136
        public_6d1f10d : nop
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_6d22770
        neg al
        sbb eax, eax
        neg eax
        add eax, 0x11
        jmp public_6d1f136
        public_6d1f125 : nop
        mov eax, 0xF
        jmp public_6d1f131
        public_6d1f12c : nop
        mov eax, 0x10
        public_6d1f131 : nop
        add dword ptr ss : [esp+0x14], 2
        public_6d1f136 : nop
        sub eax, 0x11
        je public_6d1f147
        dec eax
        jne public_6d1efca
        mov byte ptr ss : [esp+0x12], 1
        public_6d1f147 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ss : [esp+0x78]
        jae public_6d1ef28
        lea edx, ss:[esp+0x13]
        push edx
/*FIXUP push offset public_6d68ba8 @0x6d1f15a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68ba8
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_6d64ac4]
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x6C], 0
        call public_6d1b8f0
/*FIXUP push offset public_6d72fc0 @0x6d1f17f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72fc0
        lea ecx, ss:[esp+0x48]
        push ecx
        call public_6d601a2
        UNREACHABLE_TRAP(0x6d1ec30)
        ASM_EXPORT_ENTRY_FIRST(0x6d1ecfb, public_6d1ecfb)
        ASM_EXPORT_ENTRY(0x6d1ed14, public_6d1ed14)
        ASM_EXPORT_ENTRY(0x6d1ed2d, public_6d1ed2d)
        ASM_EXPORT_ENTRY(0x6d1ed46, public_6d1ed46)
        ASM_EXPORT_ENTRY(0x6d1ed5e, public_6d1ed5e)
        ASM_EXPORT_ENTRY(0x6d1ed65, public_6d1ed65)
        ASM_EXPORT_ENTRY(0x6d1ed6e, public_6d1ed6e)
        ASM_EXPORT_ENTRY(0x6d1ed81, public_6d1ed81)
        ASM_EXPORT_ENTRY(0x6d1ed86, public_6d1ed86)
        ASM_EXPORT_ENTRY(0x6d1ed8d, public_6d1ed8d)
        ASM_EXPORT_ENTRY(0x6d1ed92, public_6d1ed92)
        ASM_EXPORT_ENTRY(0x6d1ed9c, public_6d1ed9c)
        ASM_EXPORT_ENTRY(0x6d1eda1, public_6d1eda1)
        ASM_EXPORT_ENTRY(0x6d1edb0, public_6d1edb0)
        ASM_EXPORT_ENTRY(0x6d1ee98, public_6d1ee98)
        ASM_EXPORT_ENTRY(0x6d1eeb1, public_6d1eeb1)
        ASM_EXPORT_ENTRY(0x6d1eeca, public_6d1eeca)
        ASM_EXPORT_ENTRY(0x6d1eee3, public_6d1eee3)
        ASM_EXPORT_ENTRY(0x6d1eefb, public_6d1eefb)
        ASM_EXPORT_ENTRY(0x6d1ef02, public_6d1ef02)
        ASM_EXPORT_ENTRY(0x6d1ef0c, public_6d1ef0c)
        ASM_EXPORT_ENTRY(0x6d1f0c2, public_6d1f0c2)
        ASM_EXPORT_ENTRY(0x6d1f0db, public_6d1f0db)
        ASM_EXPORT_ENTRY(0x6d1f0f4, public_6d1f0f4)
        ASM_EXPORT_ENTRY(0x6d1f10d, public_6d1f10d)
        ASM_EXPORT_ENTRY(0x6d1f125, public_6d1f125)
        ASM_EXPORT_ENTRY(0x6d1f12c, public_6d1f12c)
        ASM_EXPORT_ENTRY_LAST(0x6d1f136, public_6d1f136)
    }
}

#undef public_6d1ec68
#undef public_6d1ecb1
#undef public_6d1ecb7
#undef public_6d1ecd8
#undef public_6d1ecfb
#undef public_6d1ed14
#undef public_6d1ed2d
#undef public_6d1ed46
#undef public_6d1ed5e
#undef public_6d1ed65
#undef public_6d1ed6a
#undef public_6d1ed6e
#undef public_6d1ed81
#undef public_6d1ed86
#undef public_6d1ed8d
#undef public_6d1ed92
#undef public_6d1ed9c
#undef public_6d1eda1
#undef public_6d1edb0
#undef public_6d1edc3
#undef public_6d1edc9
#undef public_6d1edd7
#undef public_6d1ee01
#undef public_6d1ee21
#undef public_6d1ee3a
#undef public_6d1ee57
#undef public_6d1ee5d
#undef public_6d1ee75
#undef public_6d1ee98
#undef public_6d1eeb1
#undef public_6d1eeca
#undef public_6d1eee3
#undef public_6d1eefb
#undef public_6d1ef02
#undef public_6d1ef07
#undef public_6d1ef0c
#undef public_6d1ef24
#undef public_6d1ef28
#undef public_6d1ef3b
#undef public_6d1ef56
#undef public_6d1efca
#undef public_6d1efdf
#undef public_6d1eff6
#undef public_6d1effc
#undef public_6d1f006
#undef public_6d1f02f
#undef public_6d1f032
#undef public_6d1f047
#undef public_6d1f04f
#undef public_6d1f064
#undef public_6d1f081
#undef public_6d1f087
#undef public_6d1f09f
#undef public_6d1f0c2
#undef public_6d1f0db
#undef public_6d1f0f4
#undef public_6d1f10d
#undef public_6d1f125
#undef public_6d1f12c
#undef public_6d1f131
#undef public_6d1f136
#undef public_6d1f147

#pragma init_seg(compiler)
extern "C" void const* const public_6d1ecfb = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ecfb);
extern "C" void const* const public_6d1ed14 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ed14);
extern "C" void const* const public_6d1ed2d = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ed2d);
extern "C" void const* const public_6d1ed46 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ed46);
extern "C" void const* const public_6d1ed5e = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ed5e);
extern "C" void const* const public_6d1ed65 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ed65);
extern "C" void const* const public_6d1ed6e = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ed6e);
extern "C" void const* const public_6d1ed81 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ed81);
extern "C" void const* const public_6d1ed86 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ed86);
extern "C" void const* const public_6d1ed8d = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ed8d);
extern "C" void const* const public_6d1ed92 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ed92);
extern "C" void const* const public_6d1ed9c = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ed9c);
extern "C" void const* const public_6d1eda1 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1eda1);
extern "C" void const* const public_6d1edb0 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1edb0);
extern "C" void const* const public_6d1ee98 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ee98);
extern "C" void const* const public_6d1eeb1 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1eeb1);
extern "C" void const* const public_6d1eeca = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1eeca);
extern "C" void const* const public_6d1eee3 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1eee3);
extern "C" void const* const public_6d1eefb = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1eefb);
extern "C" void const* const public_6d1ef02 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ef02);
extern "C" void const* const public_6d1ef0c = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1ef0c);
extern "C" void const* const public_6d1f0c2 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1f0c2);
extern "C" void const* const public_6d1f0db = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1f0db);
extern "C" void const* const public_6d1f0f4 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1f0f4);
extern "C" void const* const public_6d1f10d = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1f10d);
extern "C" void const* const public_6d1f125 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1f125);
extern "C" void const* const public_6d1f12c = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1f12c);
extern "C" void const* const public_6d1f136 = __AsmFindLabelExport(&internal_6d1ec30, 0x6d1f136);
