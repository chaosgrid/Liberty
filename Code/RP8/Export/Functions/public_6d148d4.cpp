#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d17210);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d308fa);

#define public_6d14942 _public_6d14942
#define public_6d14972 _public_6d14972
#define public_6d149f5 _public_6d149f5
#define public_6d14a6f _public_6d14a6f
#define public_6d14ab5 _public_6d14ab5
#define public_6d14ae3 _public_6d14ae3
#define public_6d14aed _public_6d14aed
#define public_6d14b71 _public_6d14b71
#define public_6d14b76 _public_6d14b76
#define public_6d14c2c _public_6d14c2c
#define public_6d14c90 _public_6d14c90
#define public_6d14c9a _public_6d14c9a
#define public_6d14ca6 _public_6d14ca6
#define public_6d14cb1 _public_6d14cb1
#define public_6d14d02 _public_6d14d02
#define public_6d14d2d _public_6d14d2d
#define public_6d14d5f _public_6d14d5f
#define public_6d14d95 _public_6d14d95
#define public_6d14dcb _public_6d14dcb
#define public_6d14dd1 _public_6d14dd1

PROC_DECLARE(0x6d148d4, internal_6d148d4, public_6d148d4);
extern "C" NAKED register_t __cdecl internal_6d148d4()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x40C4
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x118], 0
        jne public_6d14942
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x20]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x20]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x20], ecx
/*FIXUP push offset public_6d6a640 @0x6d14918*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a640
        push 0x1265
/*FIXUP push offset public_6d6a678 @0x6d14922*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a678
/*FIXUP push offset public_6d6a6c4 @0x6d14927*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a6c4
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d14dd1
        public_6d14942 : nop
        lea ecx, ss:[ebp-8]
        mov dword ptr ss : [ebp-0x4030], ecx
        mov edx, dword ptr ss : [ebp-0x4030]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx], eax
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d14972
        mov ecx, dword ptr ss : [ebp-0x4030]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x4030]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+4]
        public_6d14972 : nop
        mov dword ptr ss : [ebp-0x18], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x14], 0
        mov dword ptr ss : [ebp-0xC], 0
/*FIXUP push offset public_6d6b0e4 @0x6d14987*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b0e4
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        lea ecx, ss:[ebp-0x4064]
        call public_6d17210
        mov dword ptr ss : [ebp-0x4034], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x4068], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x406C]
        mov dword ptr ss : [ebp-0x40A4], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x40A4], edx
        lea eax, ss:[ebp-0x4064]
        push eax
        mov ecx, dword ptr ss : [ebp-0x40A4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x40A4]
        push eax
        call dword ptr ds : [edx+0x7C]
        mov dword ptr ss : [ebp-0x18], eax
        cmp dword ptr ss : [ebp-0x18], 0xFFFFFFFF
        jne public_6d149f5
        mov dword ptr ss : [ebp-0x4068], 0xFFFFFFF8
        jmp public_6d14ab5
        public_6d149f5 : nop
        mov ecx, dword ptr ss : [ebp-0x4070]
        mov dword ptr ss : [ebp-0x40A8], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x40A8], edx
        push 0
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x40A8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x40A8]
        push eax
        call dword ptr ds : [edx+0x28]
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-0x4074]
        mov dword ptr ss : [ebp-0x40AC], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x40AC], edx
        push 0
        push 0
        push 0
        push 2
        push 0
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x40AC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x40AC]
        push eax
        call dword ptr ds : [edx+0x3C]
        mov dword ptr ss : [ebp-0x10], eax
        cmp dword ptr ss : [ebp-0x10], 0xFFFFFFFF
        jne public_6d14a6f
        mov dword ptr ss : [ebp-0x4068], 0xFFFFFFFA
        jmp public_6d14ab5
        public_6d14a6f : nop
        mov ecx, dword ptr ss : [ebp-0x4078]
        mov dword ptr ss : [ebp-0x40B0], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x40B0], edx
        push 0
        push 0
        push 0
        push 4
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x40B0]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x40B0]
        push eax
        call dword ptr ds : [edx+0x40]
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d14ab5
        mov dword ptr ss : [ebp-0x4068], 0
        public_6d14ab5 : nop
        mov ecx, dword ptr ss : [ebp-0x4068]
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ss : [ebp-4], 0
        jge public_6d14b76
        cmp dword ptr ss : [ebp-4], 0xFFFFFFFA
        jne public_6d14b71
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d14ae3
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-0x40B4], edx
        jmp public_6d14aed
        public_6d14ae3 : nop
        mov dword ptr ss : [ebp-0x40B4], offset public_6d6a6e0
        public_6d14aed : nop
        mov eax, dword ptr ss : [ebp-0x40B4]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
/*FIXUP push offset public_6d6a6e8 @0x6d14af8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a6e8
        lea edx, ss:[ebp-0x2020]
        push edx
        call public_6d168f0
        add esp, 0x10
        mov dword ptr ss : [ebp-0x407C], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2024]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2024], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2024]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2024], eax
        mov ecx, dword ptr ss : [ebp-0x407C]
        push ecx
        push 0x1271
/*FIXUP push offset public_6d6a718 @0x6d14b56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a718
/*FIXUP push offset public_6d6a764 @0x6d14b5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a764
        mov edx, dword ptr ss : [ebp-0x2024]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d14b71 : nop
        jmp public_6d14cb1
        public_6d14b76 : nop
        mov dword ptr ss : [ebp-0x1C], 0
        lea ecx, ss:[ebp-0x1C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x14]
        push edx
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x118]
        push edx
        call public_6d308fa
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jge public_6d14c2c
        mov eax, dword ptr ss : [ebp-4]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6a780 @0x6d14bb2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a780
        lea ecx, ss:[ebp-0x4024]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x4080], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x4028]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x4028], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x4028]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x4028], edx
        mov eax, dword ptr ss : [ebp-0x4080]
        push eax
        push 0x1278
/*FIXUP push offset public_6d6a798 @0x6d14c10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a798
/*FIXUP push offset public_6d6a7e4 @0x6d14c15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a7e4
        mov ecx, dword ptr ss : [ebp-0x4028]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d14c2c : nop
        cmp dword ptr ss : [ebp-4], 0
        jl public_6d14cb1
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x408C], eax
        mov dword ptr ss : [ebp-0x4084], 0
        cmp dword ptr ss : [ebp-0x408C], 0
        je public_6d14ca6
        push 8
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x4088], eax
        cmp dword ptr ss : [ebp-0x4088], 0
        je public_6d14c90
        mov ecx, dword ptr ss : [ebp-0x4088]
        mov edx, dword ptr ss : [ebp-0x408C]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x4088]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x4088]
        mov dword ptr ss : [ebp-0x40B8], ecx
        jmp public_6d14c9a
        public_6d14c90 : nop
        mov dword ptr ss : [ebp-0x40B8], 0
        public_6d14c9a : nop
        mov edx, dword ptr ss : [ebp-0x40B8]
        mov dword ptr ss : [ebp-0x4084], edx
        public_6d14ca6 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp-0x4084]
        mov dword ptr ds : [eax], ecx
        public_6d14cb1 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x402C], edx
        cmp dword ptr ss : [ebp-0x18], 0xFFFFFFFF
        je public_6d14d5f
        cmp dword ptr ss : [ebp-0x10], 0xFFFFFFFF
        je public_6d14d2d
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d14d02
        mov eax, dword ptr ss : [ebp-0x4090]
        mov dword ptr ss : [ebp-0x40BC], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x40BC], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ss : [ebp-0x40BC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x40BC]
        push edx
        call dword ptr ds : [ecx+0x44]
        mov dword ptr ss : [ebp-0xC], 0
        public_6d14d02 : nop
        mov eax, dword ptr ss : [ebp-0x4094]
        mov dword ptr ss : [ebp-0x40C0], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x40C0], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        mov eax, dword ptr ss : [ebp-0x40C0]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x40C0]
        push edx
        call dword ptr ds : [ecx+0x10]
        public_6d14d2d : nop
        mov eax, dword ptr ss : [ebp-0x4098]
        mov dword ptr ss : [ebp-0x40C4], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x40C4], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        mov eax, dword ptr ss : [ebp-0x40C4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x40C4]
        push edx
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [ebp-0x18], 0xFFFFFFFF
        public_6d14d5f : nop
        lea eax, ss:[ebp-8]
        mov dword ptr ss : [ebp-0x409C], eax
        mov ecx, dword ptr ss : [ebp-0x409C]
        cmp dword ptr ds : [ecx], 0
        je public_6d14d95
        mov edx, dword ptr ss : [ebp-0x409C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x409C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp-0x409C]
        mov dword ptr ds : [ecx], 0
        public_6d14d95 : nop
        lea edx, ss:[ebp-8]
        mov dword ptr ss : [ebp-0x40A0], edx
        mov eax, dword ptr ss : [ebp-0x40A0]
        cmp dword ptr ds : [eax], 0
        je public_6d14dcb
        mov ecx, dword ptr ss : [ebp-0x40A0]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x40A0]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-0x40A0]
        mov dword ptr ds : [eax], 0
        public_6d14dcb : nop
        mov eax, dword ptr ss : [ebp-0x402C]
        public_6d14dd1 : nop
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d148d4)
    }
}

#undef public_6d14942
#undef public_6d14972
#undef public_6d149f5
#undef public_6d14a6f
#undef public_6d14ab5
#undef public_6d14ae3
#undef public_6d14aed
#undef public_6d14b71
#undef public_6d14b76
#undef public_6d14c2c
#undef public_6d14c90
#undef public_6d14c9a
#undef public_6d14ca6
#undef public_6d14cb1
#undef public_6d14d02
#undef public_6d14d2d
#undef public_6d14d5f
#undef public_6d14d95
#undef public_6d14dcb
#undef public_6d14dd1
