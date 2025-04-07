#include "Movie-PCH.h"


#define public_6ac1422 _public_6ac1422

PROC_DECLARE(0x6ac1400, internal_6ac1400, public_6ac1400);
extern "C" NAKED register_t __cdecl internal_6ac1400()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ac1422
        mov eax, dword ptr ds : [esi+8]
        push eax
        call dword ptr ds : [public_6ada184]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        public_6ac1422 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ac1400)
    }
}

#undef public_6ac1422
