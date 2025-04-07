#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2f490);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2f4d2 _public_6c2f4d2

PROC_DECLARE(0x6c2f490, internal_6c2f490, public_6c2f490);
extern "C" NAKED register_t __cdecl internal_6c2f490()
{
    __asm
    {
        push esi
        push 0xC
        call public_6c34eac
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6c2f4d2
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6c376bc
        mov dword ptr ds : [esi], offset public_6c36520
        call dword ptr ds : [public_6c36004]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_6c376bc @0x6c2f4c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c376bc
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_6c2f4d2 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c2f490)
    }
}

#undef public_6c2f4d2
