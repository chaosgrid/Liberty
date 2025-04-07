#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2c487);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d0cec5 _public_6d0cec5
#define public_6d0cf93 _public_6d0cf93
#define public_6d0cf96 _public_6d0cf96

PROC_DECLARE(0x6d0ce57, internal_6d0ce57, public_6d0ce57);
extern "C" NAKED register_t __cdecl internal_6d0ce57()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2014
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0cec5
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0xC]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0xC]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0xC], ecx
/*FIXUP push offset public_6d66e20 @0x6d0ce9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66e20
        push 0xB8B
/*FIXUP push offset public_6d66e50 @0x6d0cea5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66e50
/*FIXUP push offset public_6d66e9c @0x6d0ceaa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66e9c
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0cf96
        public_6d0cec5 : nop
        push 0
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x21F4
        call public_6d2c487
        mov dword ptr ss : [ebp-4], eax
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp-4]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0xB0]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d0cf93
        mov eax, dword ptr ss : [ebp-8]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d66eb8 @0x6d0cf19*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66eb8
        lea ecx, ss:[ebp-0x200C]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2014], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x2010]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x2010], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x2010]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x2010], edx
        mov eax, dword ptr ss : [ebp-0x2014]
        push eax
        push 0xB96
/*FIXUP push offset public_6d66ec8 @0x6d0cf77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ec8
/*FIXUP push offset public_6d66f14 @0x6d0cf7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f14
        mov ecx, dword ptr ss : [ebp-0x2010]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d0cf93 : nop
        mov eax, dword ptr ss : [ebp-8]
        public_6d0cf96 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0ce57)
    }
}

#undef public_6d0cec5
#undef public_6d0cf93
#undef public_6d0cf96
