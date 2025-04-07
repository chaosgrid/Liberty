#include "Alchemy-PCH.h"

PROC_DECLARE(0x621a7e0, internal_621a7e0, public_621a7e0);
extern "C" NAKED register_t __cdecl internal_621a7e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x621a7e0)
    }
}
