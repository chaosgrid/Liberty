#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d17210);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3092a);

#define public_6d14e45 _public_6d14e45
#define public_6d14e8c _public_6d14e8c
#define public_6d14f0f _public_6d14f0f
#define public_6d14f89 _public_6d14f89
#define public_6d14fcf _public_6d14fcf
#define public_6d14ffd _public_6d14ffd
#define public_6d15007 _public_6d15007
#define public_6d1508b _public_6d1508b
#define public_6d15090 _public_6d15090
#define public_6d15145 _public_6d15145
#define public_6d151a9 _public_6d151a9
#define public_6d151b3 _public_6d151b3
#define public_6d151bf _public_6d151bf
#define public_6d151ca _public_6d151ca
#define public_6d15212 _public_6d15212
#define public_6d1523d _public_6d1523d
#define public_6d1526f _public_6d1526f
#define public_6d152a5 _public_6d152a5
#define public_6d152db _public_6d152db
#define public_6d152de _public_6d152de

PROC_DECLARE(0x6d14dd7, internal_6d14dd7, public_6d14dd7);
extern "C" NAKED register_t __cdecl internal_6d14dd7()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x40C0
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x118], 0
        jne public_6d14e45
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
/*FIXUP push offset public_6d6a800 @0x6d14e1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a800
        push 0x1286
/*FIXUP push offset public_6d6a838 @0x6d14e25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a838
/*FIXUP push offset public_6d6a884 @0x6d14e2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a884
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d152de
        public_6d14e45 : nop
        mov dword ptr ss : [ebp-4], 0xFFFFFFF9
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+0x404], 0
        je public_6d152db
        lea edx, ss:[ebp-8]
        mov dword ptr ss : [ebp-0x402C], edx
        mov eax, dword ptr ss : [ebp-0x402C]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d14e8c
        mov edx, dword ptr ss : [ebp-0x402C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x402C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+4]
        public_6d14e8c : nop
        mov dword ptr ss : [ebp-0x18], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x14], 0
        mov dword ptr ss : [ebp-0xC], 0
/*FIXUP push offset public_6d6b0e4 @0x6d14ea1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b0e4
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        lea ecx, ss:[ebp-0x4060]
        call public_6d17210
        mov dword ptr ss : [ebp-0x4030], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x4064], 0xFFFFFFFF
        mov edx, dword ptr ss : [ebp-0x4068]
        mov dword ptr ss : [ebp-0x40A0], edx
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x40A0], eax
        lea ecx, ss:[ebp-0x4060]
        push ecx
        mov edx, dword ptr ss : [ebp-0x40A0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x40A0]
        push ecx
        call dword ptr ds : [eax+0x7C]
        mov dword ptr ss : [ebp-0x18], eax
        cmp dword ptr ss : [ebp-0x18], 0xFFFFFFFF
        jne public_6d14f0f
        mov dword ptr ss : [ebp-0x4064], 0xFFFFFFF8
        jmp public_6d14fcf
        public_6d14f0f : nop
        mov edx, dword ptr ss : [ebp-0x406C]
        mov dword ptr ss : [ebp-0x40A4], edx
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x40A4], eax
        push 0
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        mov edx, dword ptr ss : [ebp-0x40A4]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x40A4]
        push ecx
        call dword ptr ds : [eax+0x28]
        mov dword ptr ss : [ebp-0x14], eax
        mov edx, dword ptr ss : [ebp-0x4070]
        mov dword ptr ss : [ebp-0x40A8], edx
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x40A8], eax
        push 0
        push 0
        push 0
        push 2
        push 0
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        mov edx, dword ptr ss : [ebp-0x40A8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x40A8]
        push ecx
        call dword ptr ds : [eax+0x3C]
        mov dword ptr ss : [ebp-0x10], eax
        cmp dword ptr ss : [ebp-0x10], 0xFFFFFFFF
        jne public_6d14f89
        mov dword ptr ss : [ebp-0x4064], 0xFFFFFFFA
        jmp public_6d14fcf
        public_6d14f89 : nop
        mov edx, dword ptr ss : [ebp-0x4074]
        mov dword ptr ss : [ebp-0x40AC], edx
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x40AC], eax
        push 0
        push 0
        push 0
        push 4
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        mov edx, dword ptr ss : [ebp-0x40AC]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x40AC]
        push ecx
        call dword ptr ds : [eax+0x40]
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d14fcf
        mov dword ptr ss : [ebp-0x4064], 0
        public_6d14fcf : nop
        mov edx, dword ptr ss : [ebp-0x4064]
        mov dword ptr ss : [ebp-4], edx
        cmp dword ptr ss : [ebp-4], 0
        jge public_6d15090
        cmp dword ptr ss : [ebp-4], 0xFFFFFFFA
        jne public_6d1508b
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d14ffd
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-0x40B0], eax
        jmp public_6d15007
        public_6d14ffd : nop
        mov dword ptr ss : [ebp-0x40B0], offset public_6d6a8a0
        public_6d15007 : nop
        mov ecx, dword ptr ss : [ebp-0x40B0]
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
/*FIXUP push offset public_6d6a8a8 @0x6d15012*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a8a8
        lea eax, ss:[ebp-0x2020]
        push eax
        call public_6d168f0
        add esp, 0x10
        mov dword ptr ss : [ebp-0x4078], eax
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x2024]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x2024], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x2024]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x2024], ecx
        mov edx, dword ptr ss : [ebp-0x4078]
        push edx
        push 0x1296
/*FIXUP push offset public_6d6a8e0 @0x6d1506f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a8e0
/*FIXUP push offset public_6d6a92c @0x6d15074*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a92c
        mov eax, dword ptr ss : [ebp-0x2024]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d1508b : nop
        jmp public_6d151ca
        public_6d15090 : nop
        mov dword ptr ss : [ebp-0x1C], 0
        lea edx, ss:[ebp-0x1C]
        push edx
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x118]
        push eax
        call public_6d3092a
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jge public_6d15145
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6a948 @0x6d150cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a948
        lea edx, ss:[ebp-0x4024]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x407C], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x4028]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x4028], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x4028]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x4028], eax
        mov ecx, dword ptr ss : [ebp-0x407C]
        push ecx
        push 0x129D
/*FIXUP push offset public_6d6a960 @0x6d1512a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a960
/*FIXUP push offset public_6d6a9ac @0x6d1512f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a9ac
        mov edx, dword ptr ss : [ebp-0x4028]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d15145 : nop
        cmp dword ptr ss : [ebp-4], 0
        jl public_6d151ca
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x4088], ecx
        mov dword ptr ss : [ebp-0x4080], 0
        cmp dword ptr ss : [ebp-0x4088], 0
        je public_6d151bf
        push 8
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x4084], eax
        cmp dword ptr ss : [ebp-0x4084], 0
        je public_6d151a9
        mov edx, dword ptr ss : [ebp-0x4084]
        mov eax, dword ptr ss : [ebp-0x4088]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-0x4084]
        mov dword ptr ds : [ecx+4], 1
        mov edx, dword ptr ss : [ebp-0x4084]
        mov dword ptr ss : [ebp-0x40B4], edx
        jmp public_6d151b3
        public_6d151a9 : nop
        mov dword ptr ss : [ebp-0x40B4], 0
        public_6d151b3 : nop
        mov eax, dword ptr ss : [ebp-0x40B4]
        mov dword ptr ss : [ebp-0x4080], eax
        public_6d151bf : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp-0x4080]
        mov dword ptr ds : [ecx], edx
        public_6d151ca : nop
        cmp dword ptr ss : [ebp-0x18], 0xFFFFFFFF
        je public_6d1526f
        cmp dword ptr ss : [ebp-0x10], 0xFFFFFFFF
        je public_6d1523d
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d15212
        mov eax, dword ptr ss : [ebp-0x408C]
        mov dword ptr ss : [ebp-0x40B8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x40B8], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ss : [ebp-0x40B8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x40B8]
        push edx
        call dword ptr ds : [ecx+0x44]
        mov dword ptr ss : [ebp-0xC], 0
        public_6d15212 : nop
        mov eax, dword ptr ss : [ebp-0x4090]
        mov dword ptr ss : [ebp-0x40BC], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x40BC], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        mov eax, dword ptr ss : [ebp-0x40BC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x40BC]
        push edx
        call dword ptr ds : [ecx+0x10]
        public_6d1523d : nop
        mov eax, dword ptr ss : [ebp-0x4094]
        mov dword ptr ss : [ebp-0x40C0], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x40C0], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        mov eax, dword ptr ss : [ebp-0x40C0]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x40C0]
        push edx
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [ebp-0x18], 0xFFFFFFFF
        public_6d1526f : nop
        lea eax, ss:[ebp-8]
        mov dword ptr ss : [ebp-0x4098], eax
        mov ecx, dword ptr ss : [ebp-0x4098]
        cmp dword ptr ds : [ecx], 0
        je public_6d152a5
        mov edx, dword ptr ss : [ebp-0x4098]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x4098]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp-0x4098]
        mov dword ptr ds : [ecx], 0
        public_6d152a5 : nop
        lea edx, ss:[ebp-8]
        mov dword ptr ss : [ebp-0x409C], edx
        mov eax, dword ptr ss : [ebp-0x409C]
        cmp dword ptr ds : [eax], 0
        je public_6d152db
        mov ecx, dword ptr ss : [ebp-0x409C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x409C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-0x409C]
        mov dword ptr ds : [eax], 0
        public_6d152db : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d152de : nop
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d14dd7)
    }
}

#undef public_6d14e45
#undef public_6d14e8c
#undef public_6d14f0f
#undef public_6d14f89
#undef public_6d14fcf
#undef public_6d14ffd
#undef public_6d15007
#undef public_6d1508b
#undef public_6d15090
#undef public_6d15145
#undef public_6d151a9
#undef public_6d151b3
#undef public_6d151bf
#undef public_6d151ca
#undef public_6d15212
#undef public_6d1523d
#undef public_6d1526f
#undef public_6d152a5
#undef public_6d152db
#undef public_6d152de
