#include "Alchemy-PCH.h"


#define public_621e7c0 _public_621e7c0

PROC_DECLARE(0x621e7b0, internal_621e7b0, public_621e7b0);
extern "C" NAKED register_t __cdecl internal_621e7b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_621e7c0
        mov eax, dword ptr ds : [public_624b028]
        public_621e7c0 : nop
        ret 4
        UNREACHABLE_TRAP(0x621e7b0)
    }
}

#undef public_621e7c0
