#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d0d388 _public_6d0d388
#define public_6d0d43b _public_6d0d43b
#define public_6d0d43e _public_6d0d43e

PROC_DECLARE(0x6d0d310, internal_6d0d310, public_6d0d310);
extern "C" NAKED register_t __cdecl internal_6d0d310()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2010
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0d388
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-8]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-8], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-8]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-8], eax
/*FIXUP push offset public_6d672d0 @0x6d0d35d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d672d0
        push 0xBDB
/*FIXUP push offset public_6d67310 @0x6d0d367*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67310
/*FIXUP push offset public_6d6735c @0x6d0d36c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6735c
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0d43e
        public_6d0d388 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0xAC]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jge public_6d0d43b
        mov eax, dword ptr ss : [ebp-4]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d67378 @0x6d0d3c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67378
        lea ecx, ss:[ebp-0x2008]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2010], eax
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
        mov eax, dword ptr ss : [ebp-0x2010]
        push eax
        push 0xBDF
/*FIXUP push offset public_6d67390 @0x6d0d41f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67390
/*FIXUP push offset public_6d673dc @0x6d0d424*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d673dc
        mov ecx, dword ptr ss : [ebp-0x200C]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d0d43b : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d0d43e : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0d310)
    }
}

#undef public_6d0d388
#undef public_6d0d43b
#undef public_6d0d43e
