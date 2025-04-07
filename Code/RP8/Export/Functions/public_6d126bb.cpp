#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d162b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16310);
CLANG_FORWARD_PROC_SYMBOL(public_6d163b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d1272b _public_6d1272b
#define public_6d1275c _public_6d1275c
#define public_6d12763 _public_6d12763
#define public_6d12795 _public_6d12795
#define public_6d1283b _public_6d1283b
#define public_6d1286d _public_6d1286d
#define public_6d1294b _public_6d1294b
#define public_6d12968 _public_6d12968
#define public_6d129ca _public_6d129ca
#define public_6d129e7 _public_6d129e7
#define public_6d129f0 _public_6d129f0
#define public_6d12a80 _public_6d12a80
#define public_6d12a83 _public_6d12a83

PROC_DECLARE(0x6d126bb, internal_6d126bb, public_6d126bb);
extern "C" NAKED register_t __cdecl internal_6d126bb()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x4044
        call public_6d2f270
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x120], 0
        jne public_6d1272b
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x10]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x10]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x10], ecx
/*FIXUP push offset public_6d69680 @0x6d12701*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69680
        push 0x105D
/*FIXUP push offset public_6d696b0 @0x6d1270b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d696b0
/*FIXUP push offset public_6d696fc @0x6d12710*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d696fc
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d12a83
        public_6d1272b : nop
        mov dword ptr ss : [ebp-4], 0x80004005
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d12a80
        cmp dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        je public_6d12a80
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0xC], ecx
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d1275c
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-8], eax
        jmp public_6d12763
        public_6d1275c : nop
        mov dword ptr ss : [ebp-8], 0
        public_6d12763 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov dl, byte ptr ds : [ecx+0x118]
        shr dl, 1
        and dl, 1
        mov byte ptr ss : [ebp-0x403D], dl
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x403C], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        cmp dword ptr ds : [ecx+0x20], 0
        jne public_6d12795
        mov dword ptr ss : [ebp-4], 0x80004005
        jmp public_6d129f0
        public_6d12795 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+8]
        cmp eax, dword ptr ss : [ebp+0x18]
        jae public_6d1283b
        mov ecx, dword ptr ss : [ebp+0x18]
        push ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+8]
        push eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+0x20]
        push edx
/*FIXUP push offset public_6d6b098 @0x6d127b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b098
        lea eax, ss:[ebp-0x4028]
        push eax
        call public_6d168f0
        add esp, 0x14
        mov dword ptr ss : [ebp-0x4030], eax
        mov ecx, 3
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x402C]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x402C], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x402C]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x402C], ecx
        mov edx, dword ptr ss : [ebp-0x4030]
        push edx
        push 0xA9
/*FIXUP push offset public_6d6b040 @0x6d12813*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b040
/*FIXUP push offset public_6d6b020 @0x6d12818*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b020
        mov eax, dword ptr ss : [ebp-0x402C]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov dword ptr ss : [ebp-4], 0x80004005
        jmp public_6d129f0
        public_6d1283b : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x4038], eax
        mov dword ptr ss : [ebp-0x4034], 0
        mov ecx, dword ptr ss : [ebp-0x4038]
        and ecx, 0x10
        test ecx, ecx
        je public_6d1286d
        mov edx, dword ptr ss : [ebp-0x4034]
        add edx, 0xC
        mov dword ptr ss : [ebp-0x4034], edx
        public_6d1286d : nop
        mov eax, dword ptr ss : [ebp-0x4038]
        push eax
        call public_6d16310
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr ss : [ebp-0x4038]
        push ecx
        call public_6d163b0
        add esp, 4
        mov edi, eax
        mov edx, dword ptr ss : [ebp-0x4038]
        push edx
        call public_6d162b0
        add esp, 4
        add eax, dword ptr ss : [ebp-0x4034]
        add eax, edi
        add eax, esi
        mov dword ptr ss : [ebp-0x2024], eax
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-0x2024]
        imul ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x2020], ecx
        mov edx, dword ptr ss : [ebp+0x18]
        imul edx, dword ptr ss : [ebp-0x2024]
        mov dword ptr ss : [ebp-0x201C], edx
        movzx eax, byte ptr ss : [ebp-0x403D]
        neg eax
        sbb eax, eax
        and eax, 0xFFFFF800
        add eax, 0x800
        mov dword ptr ss : [ebp-0x2018], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        and edx, 0x200
        neg edx
        sbb edx, edx
        neg edx
        xor eax, eax
        mov al, dl
        test eax, eax
        je public_6d12968
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        add edx, dword ptr ss : [ebp-0x201C]
        cmp edx, dword ptr ss : [ebp-0x2020]
        jbe public_6d1294b
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ss : [ebp-0x2018]
        or edx, 0x2000
        mov dword ptr ss : [ebp-0x2018], edx
        mov dword ptr ss : [ebp-0x403C], 0
        jmp public_6d12968
        public_6d1294b : nop
        mov eax, dword ptr ss : [ebp-0x2018]
        or eax, 0x1000
        mov dword ptr ss : [ebp-0x2018], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [ebp-0x403C], edx
        public_6d12968 : nop
        mov eax, dword ptr ss : [ebp-0x2018]
        push eax
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0x10
        push ecx
        mov edx, dword ptr ss : [ebp-0x201C]
        push edx
        mov eax, dword ptr ss : [ebp-0x403C]
        push eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x2C]
        mov dword ptr ss : [ebp-0x2028], eax
        cmp dword ptr ss : [ebp-0x2028], 0
        jl public_6d129e7
        mov eax, dword ptr ss : [ebp-0x403C]
        xor edx, edx
        div dword ptr ss : [ebp-0x2024]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx+0x1C], eax
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d129ca
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [edx], ecx
        public_6d129ca : nop
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x403C]
        add edx, dword ptr ss : [ebp-0x201C]
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax+0xC], edx
        public_6d129e7 : nop
        mov ecx, dword ptr ss : [ebp-0x2028]
        mov dword ptr ss : [ebp-4], ecx
        public_6d129f0 : nop
        cmp dword ptr ss : [ebp-4], 0
        jge public_6d12a80
        mov edx, dword ptr ss : [ebp-4]
        push edx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d69718 @0x6d12a07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69718
        lea eax, ss:[ebp-0x2010]
        push eax
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x4044], eax
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x2014]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x2014], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x2014]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x2014], ecx
        mov edx, dword ptr ss : [ebp-0x4044]
        push edx
        push 0x1075
/*FIXUP push offset public_6d69728 @0x6d12a64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69728
/*FIXUP push offset public_6d69774 @0x6d12a69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69774
        mov eax, dword ptr ss : [ebp-0x2014]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d12a80 : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d12a83 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d126bb)
    }
}

#undef public_6d1272b
#undef public_6d1275c
#undef public_6d12763
#undef public_6d12795
#undef public_6d1283b
#undef public_6d1286d
#undef public_6d1294b
#undef public_6d12968
#undef public_6d129ca
#undef public_6d129e7
#undef public_6d129f0
#undef public_6d12a80
#undef public_6d12a83
