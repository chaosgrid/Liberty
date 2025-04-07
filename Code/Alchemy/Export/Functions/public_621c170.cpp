#include "Alchemy-PCH.h"

PROC_DECLARE(0x621c170, internal_621c170, public_621c170);
extern "C" NAKED register_t __cdecl internal_621c170()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x621c170)
    }
}
