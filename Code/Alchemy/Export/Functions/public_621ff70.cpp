#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621ff70);

#define public_621ff87 _public_621ff87

PROC_DECLARE(0x621ff70, internal_621ff70, public_621ff70);
extern "C" NAKED register_t __cdecl internal_621ff70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_621ff87
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], 0
        public_621ff87 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x621ff70)
    }
}

#undef public_621ff87
