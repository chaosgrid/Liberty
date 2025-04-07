#include "Alchemy-PCH.h"

PROC_DECLARE(0x621d950, internal_621d950, public_621d950);
extern "C" NAKED register_t __cdecl internal_621d950()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x621d950)
    }
}
