#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3810);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec3859 _public_6ec3859

PROC_DECLARE(0x6ec3810, internal_6ec3810, public_6ec3810);
extern "C" NAKED register_t __cdecl internal_6ec3810()
{
    __asm
    {
        push esi
        push edi
        call dword ptr ds : [public_6ed1008]
        mov edi, eax
        test edi, edi
        je public_6ec3859
        push 0xC
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ec3859
        push 0x80000000
/*FIXUP push offset public_6ed4bf0 @0x6ec3833*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4bf0
        push esi
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6ed4bf0
        mov dword ptr ds : [esi], offset public_6ed29ec
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        public_6ec3859 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec3810)
    }
}

#undef public_6ec3859
