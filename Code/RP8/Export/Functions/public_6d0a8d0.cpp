#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d0a93e _public_6d0a93e
#define public_6d0a9af _public_6d0a9af
#define public_6d0aa19 _public_6d0aa19
#define public_6d0aa22 _public_6d0aa22
#define public_6d0aab3 _public_6d0aab3
#define public_6d0aab6 _public_6d0aab6

PROC_DECLARE(0x6d0a8d0, internal_6d0a8d0, public_6d0a8d0);
extern "C" NAKED register_t __cdecl internal_6d0a8d0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x201C
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0a93e
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-8]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-8], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-8]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-8], ecx
/*FIXUP push offset public_6d660c8 @0x6d0a914*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d660c8
        push 0xA2B
/*FIXUP push offset public_6d66100 @0x6d0a91e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66100
/*FIXUP push offset public_6d6614c @0x6d0a923*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6614c
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0aab6
        public_6d0a93e : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0x2018], edx
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x22C8
        mov dword ptr ss : [ebp-0x2014], eax
        mov ecx, dword ptr ss : [ebp-0x2014]
        movzx edx, byte ptr ds : [ecx+0x19]
        test edx, edx
        je public_6d0a9af
        xor eax, eax
        test eax, eax
        jne public_6d0a9af
        mov ecx, dword ptr ss : [ebp-0x2014]
        mov edx, dword ptr ss : [ebp+0xC]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d0a9af
        mov eax, dword ptr ss : [ebp-0x2014]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d0a9af
        mov edx, dword ptr ss : [ebp-0x2014]
        mov eax, dword ptr ss : [ebp+0x14]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d0a9af
        mov ecx, dword ptr ss : [ebp-0x2014]
        mov edx, dword ptr ss : [ebp+0x18]
        cmp edx, dword ptr ds : [ecx+0xC]
        jne public_6d0a9af
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d0aa22
        public_6d0a9af : nop
        mov eax, dword ptr ss : [ebp-0x2014]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x2014]
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0x2014]
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x2014]
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ss : [ebp-0x2014]
        push edx
        mov eax, dword ptr ss : [ebp-0x2018]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x2018]
        push edx
        call dword ptr ds : [ecx+0xA0]
        mov dword ptr ss : [ebp-0x2010], eax
        cmp dword ptr ss : [ebp-0x2010], 0
        jl public_6d0aa19
        xor eax, eax
        neg eax
        sbb eax, eax
        inc eax
        mov ecx, dword ptr ss : [ebp-0x2014]
        mov byte ptr ds : [ecx+0x19], al
        public_6d0aa19 : nop
        mov edx, dword ptr ss : [ebp-0x2010]
        mov dword ptr ss : [ebp-4], edx
        public_6d0aa22 : nop
        cmp dword ptr ss : [ebp-4], 0
        jge public_6d0aab3
        mov eax, dword ptr ss : [ebp-4]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d66168 @0x6d0aa39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66168
        lea ecx, ss:[ebp-0x2008]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x201C], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x200C]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x200C], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x200C]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x200C], edx
        mov eax, dword ptr ss : [ebp-0x201C]
        push eax
        push 0xA2E
/*FIXUP push offset public_6d66180 @0x6d0aa97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66180
/*FIXUP push offset public_6d661cc @0x6d0aa9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d661cc
        mov ecx, dword ptr ss : [ebp-0x200C]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d0aab3 : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d0aab6 : nop
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d0a8d0)
    }
}

#undef public_6d0a93e
#undef public_6d0a9af
#undef public_6d0aa19
#undef public_6d0aa22
#undef public_6d0aab3
#undef public_6d0aab6
