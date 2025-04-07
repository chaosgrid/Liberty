#include "Content-PCH.h"


#define public_6f57c5c _public_6f57c5c

PROC_DECLARE(0x6f57c40, internal_6f57c40, public_6f57c40);
extern "C" NAKED register_t __cdecl internal_6f57c40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x16C]
        test ecx, ecx
        je public_6f57c5c
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x16C], 0
        public_6f57c5c : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f57c40)
    }
}

#undef public_6f57c5c
