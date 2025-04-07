#include "Common-PCH.h"


#define public_633ba5c _public_633ba5c

PROC_DECLARE(0x633ba50, internal_633ba50, public_633ba50);
extern "C" NAKED register_t __cdecl internal_633ba50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        test eax, eax
        jne public_633ba5c
        mov eax, dword ptr ds : [public_63991d0]
        public_633ba5c : nop
        ret 
        UNREACHABLE_TRAP(0x633ba50)
    }
}

#undef public_633ba5c
