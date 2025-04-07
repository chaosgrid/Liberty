#include "Alchemy-PCH.h"

PROC_DECLARE(0x6202690, internal_6202690, public_6202690);
extern "C" NAKED register_t __cdecl internal_6202690()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x6202690)
    }
}
