#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427a70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8c3f);

#define public_427ae7 _public_427ae7
#define public_427b10 _public_427b10
#define public_427b35 _public_427b35
#define public_427b56 _public_427b56
#define public_427b77 _public_427b77
#define public_427b98 _public_427b98
#define public_427bb9 _public_427bb9
#define public_427bda _public_427bda
#define public_427bfb _public_427bfb
#define public_427c1c _public_427c1c
#define public_427c3d _public_427c3d
#define public_427c5e _public_427c5e
#define public_427c7f _public_427c7f
#define public_427ca0 _public_427ca0
#define public_427cc1 _public_427cc1
#define public_427cdf _public_427cdf
#define public_427d15 _public_427d15
#define public_427d4d _public_427d4d
#define public_427d5b _public_427d5b
#define public_427d6d _public_427d6d
#define public_427dad _public_427dad
#define public_427df9 _public_427df9
#define public_427e36 _public_427e36
#define public_427e47 _public_427e47
#define public_427e5e _public_427e5e
#define public_427e60 _public_427e60
#define public_427e83 _public_427e83
#define public_427ea8 _public_427ea8
#define public_427eb1 _public_427eb1
#define public_427f15 _public_427f15
#define public_427f1f _public_427f1f
#define public_427f53 _public_427f53
#define public_427f59 _public_427f59
#define public_427f81 _public_427f81
#define public_427f8c _public_427f8c
#define public_427f9b _public_427f9b
#define public_427fb9 _public_427fb9
#define public_427fd9 _public_427fd9
#define public_427fe2 _public_427fe2

PROC_DECLARE(0x427a70, internal_427a70, public_427a70);
extern "C" NAKED register_t __cdecl internal_427a70()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5b8c3f @0x427a78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8c3f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1570
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call dword ptr ds : [public_5c605c]
        mov eax, dword ptr ss : [esp+0x1590]
        xor ebx, ebx
        push ebx
        push eax
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x1590], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_427d6d
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_427d6d
        mov edi, dword ptr ds : [public_5c669c]
        mov esi, dword ptr ds : [public_5c6cf4]
/*FIXUP public_427ae7 : nop
        push offset public_5c9e78 @0x427ae7*/
  FIXUP public_427ae7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9e78
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_427d5b
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x10], ebx
        call edi
        test al, al
        je public_427d5b
/*FIXUP public_427b10 : nop
        push offset public_5c9e64 @0x427b10*/
  FIXUP public_427b10 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9e64
        lea ecx, ss:[esp+0x1C]
        call esi
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_427b35
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_667c9c]
        jmp public_427d4d
/*FIXUP public_427b35 : nop
        push offset public_5c9e50 @0x427b35*/
  FIXUP public_427b35 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9e50
        call esi
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_427b56
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_6108d8]
        jmp public_427d4d
/*FIXUP public_427b56 : nop
        push offset public_5c9e38 @0x427b56*/
  FIXUP public_427b56 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9e38
        call esi
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_427b77
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_6108dc]
        jmp public_427d4d
/*FIXUP public_427b77 : nop
        push offset public_5c9e24 @0x427b77*/
  FIXUP public_427b77 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9e24
        call esi
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_427b98
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_6108e0]
        jmp public_427d4d
/*FIXUP public_427b98 : nop
        push offset public_5c9e08 @0x427b98*/
  FIXUP public_427b98 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9e08
        call esi
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_427bb9
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_6108e4]
        jmp public_427d4d
/*FIXUP public_427bb9 : nop
        push offset public_5c9de8 @0x427bb9*/
  FIXUP public_427bb9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9de8
        call esi
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_427bda
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_6108e8]
        jmp public_427d4d
/*FIXUP public_427bda : nop
        push offset public_5c9dcc @0x427bda*/
  FIXUP public_427bda : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9dcc
        call esi
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_427bfb
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_6108ec]
        jmp public_427d4d
/*FIXUP public_427bfb : nop
        push offset public_5c9db4 @0x427bfb*/
  FIXUP public_427bfb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9db4
        call esi
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_427c1c
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_6108f0]
        jmp public_427d4d
/*FIXUP public_427c1c : nop
        push offset public_5c9d9c @0x427c1c*/
  FIXUP public_427c1c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9d9c
        call esi
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_427c3d
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_6108f4]
        jmp public_427d4d
/*FIXUP public_427c3d : nop
        push offset public_5c9d84 @0x427c3d*/
  FIXUP public_427c3d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9d84
        call esi
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_427c5e
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_6108f8]
        jmp public_427d4d
/*FIXUP public_427c5e : nop
        push offset public_5c9d74 @0x427c5e*/
  FIXUP public_427c5e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9d74
        call esi
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_427c7f
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_6108d0]
        jmp public_427d4d
/*FIXUP public_427c7f : nop
        push offset public_5c9d60 @0x427c7f*/
  FIXUP public_427c7f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9d60
        call esi
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_427ca0
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_6108d4]
        jmp public_427d4d
/*FIXUP public_427ca0 : nop
        push offset public_5c9d40 @0x427ca0*/
  FIXUP public_427ca0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9d40
        call esi
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_427cc1
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_6108fc]
        jmp public_427d4d
/*FIXUP public_427cc1 : nop
        push offset public_5c9d20 @0x427cc1*/
  FIXUP public_427cc1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9d20
        call esi
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_427cdf
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_610900]
        jmp public_427d4d
/*FIXUP public_427cdf : nop
        push offset public_5c9d0c @0x427cdf*/
  FIXUP public_427cdf : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9d0c
        call esi
        test al, al
        je public_427d15
        mov ecx, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ebx
        je public_427d4d
        mov ebp, dword ptr ds : [eax]
        push ebx
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [edx]
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        call dword ptr ss : [ebp+0x48]
        jmp public_427d4d
/*FIXUP public_427d15 : nop
        push offset public_5c9cf8 @0x427d15*/
  FIXUP public_427d15 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9cf8
        lea ecx, ss:[esp+0x1C]
        call esi
        test al, al
        je public_427d4d
        mov ecx, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ebx
        je public_427d4d
        mov ebp, dword ptr ds : [eax]
        push ebx
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [edx]
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        call dword ptr ss : [ebp+0x4C]
        public_427d4d : nop
        lea ecx, ss:[esp+0x18]
        call edi
        test al, al
        jne public_427b10
        public_427d5b : nop
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_427ae7
        public_427d6d : nop
        lea ecx, ss:[esp+0x1440]
        mov dword ptr ss : [esp+0x1588], 1
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [public_5c7080]
        mov edi, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x1440]
        mov byte ptr ss : [esp+0x1588], 2
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [esp+0x1448]
        cmp eax, edi
        jae public_427dad
        mov edi, eax
        public_427dad : nop
        cmp edi, ebx
        mov ebp, dword ptr ds : [public_5c709c]
        jbe public_427df9
        mov ecx, dword ptr ss : [esp+0x1444]
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call ebp
        mov esi, dword ptr ss : [esp+0x1454]
        add esp, 0xC
        push ebx
        sub esi, edi
        push esi
        lea ecx, ss:[esp+0x1448]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_427df9
        mov eax, dword ptr ss : [esp+0x1444]
        mov dword ptr ss : [esp+0x1448], esi
        mov byte ptr ds : [eax+esi], 0
        public_427df9 : nop
        cmp dword ptr ss : [esp+0x1450], 0xFFFFFFFF
        mov ebx, dword ptr ds : [public_5c6ef8]
        je public_427e5e
        mov eax, dword ptr ss : [esp+0x1454]
        xor esi, esi
        cmp eax, esi
        je public_427e47
        mov eax, dword ptr ss : [esp+0x1458]
        cmp eax, esi
        je public_427e36
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x1458], esi
        mov dword ptr ss : [esp+0x145C], esi
        public_427e36 : nop
        mov ecx, dword ptr ss : [esp+0x1454]
        push ecx
        call ebx
        mov dword ptr ss : [esp+0x1454], esi
        public_427e47 : nop
        mov edx, dword ptr ss : [esp+0x1450]
        push edx
        call ebx
        mov dword ptr ss : [esp+0x1450], 0xFFFFFFFF
        jmp public_427e60
        public_427e5e : nop
        xor esi, esi
        public_427e60 : nop
        mov eax, dword ptr ss : [esp+0x1458]
        cmp eax, esi
        je public_427e83
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x1458], esi
        mov dword ptr ss : [esp+0x145C], esi
        public_427e83 : nop
        mov eax, dword ptr ss : [esp+0x1444]
        cmp eax, esi
        mov dword ptr ss : [esp+0x1460], esi
        je public_427eb1
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_427ea8
        cmp cl, 0xFF
        je public_427ea8
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_427eb1
        public_427ea8 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_427eb1 : nop
        mov dword ptr ss : [esp+0x1444], esi
        mov dword ptr ss : [esp+0x1448], esi
        mov dword ptr ss : [esp+0x144C], esi
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, esi
        mov eax, dword ptr ds : [public_5c7080]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1588], 3
        je public_427f15
        mov al, byte ptr ds : [ecx-1]
        test al, al
        je public_427f15
        cmp al, 0xFF
        je public_427f15
        mov esi, ecx
        push 1
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c7084]
        push esi
        call dword ptr ds : [public_5c6f94]
        add esp, 4
        push eax
        push esi
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c7088]
        mov ecx, dword ptr ss : [esp+0x1C]
        xor esi, esi
        public_427f15 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, edi
        jae public_427f1f
        mov edi, eax
        public_427f1f : nop
        cmp edi, esi
        jbe public_427f59
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call ebp
        mov esi, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        push 0
        sub esi, edi
        push esi
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_427f53
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], esi
        mov byte ptr ds : [eax+esi], 0
        public_427f53 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        xor esi, esi
        public_427f59 : nop
        mov eax, dword ptr ss : [esp+0x28]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_427f9b
        cmp dword ptr ss : [esp+0x2C], esi
        je public_427f8c
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, esi
        je public_427f81
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        public_427f81 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        call ebx
        mov dword ptr ss : [esp+0x2C], esi
        public_427f8c : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x28], edi
        public_427f9b : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, esi
        je public_427fb9
        push eax
        call dword ptr ds : [public_5c71d8]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        public_427fb9 : nop
        pop edi
        mov dword ptr ss : [esp+0x34], esi
        cmp ecx, esi
        pop esi
        pop ebp
        pop ebx
        je public_427fe2
        lea eax, ds:[ecx-1]
        mov cl, byte ptr ds : [eax]
        test cl, cl
        je public_427fd9
        cmp cl, 0xFF
        je public_427fd9
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_427fe2
        public_427fd9 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_427fe2 : nop
        mov ecx, dword ptr ss : [esp+0x1570]
        mov eax, dword ptr ss : [esp]
        mov dword ptr fs : [0], ecx
        add esp, 0x157C
        ret 
        UNREACHABLE_TRAP(0x427a70)
    }
}

#undef public_427ae7
#undef public_427b10
#undef public_427b35
#undef public_427b56
#undef public_427b77
#undef public_427b98
#undef public_427bb9
#undef public_427bda
#undef public_427bfb
#undef public_427c1c
#undef public_427c3d
#undef public_427c5e
#undef public_427c7f
#undef public_427ca0
#undef public_427cc1
#undef public_427cdf
#undef public_427d15
#undef public_427d4d
#undef public_427d5b
#undef public_427d6d
#undef public_427dad
#undef public_427df9
#undef public_427e36
#undef public_427e47
#undef public_427e5e
#undef public_427e60
#undef public_427e83
#undef public_427ea8
#undef public_427eb1
#undef public_427f15
#undef public_427f1f
#undef public_427f53
#undef public_427f59
#undef public_427f81
#undef public_427f8c
#undef public_427f9b
#undef public_427fb9
#undef public_427fd9
#undef public_427fe2
