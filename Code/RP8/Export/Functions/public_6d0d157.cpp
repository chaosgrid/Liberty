#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2c92a);

#define public_6d0d1b9 _public_6d0d1b9
#define public_6d0d1d6 _public_6d0d1d6

PROC_DECLARE(0x6d0d157, internal_6d0d157, public_6d0d157);
extern "C" NAKED register_t __cdecl internal_6d0d157()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0d1b9
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-4]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-4], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-4]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-4], ecx
/*FIXUP push offset public_6d67108 @0x6d0d192*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67108
        push 0xBC2
/*FIXUP push offset public_6d67140 @0x6d0d19c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67140
/*FIXUP push offset public_6d6718c @0x6d0d1a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6718c
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0d1d6
        public_6d0d1b9 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x21F4
        call public_6d2c92a
        xor edx, edx
        mov dl, al
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        public_6d0d1d6 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0d157)
    }
}

#undef public_6d0d1b9
#undef public_6d0d1d6
