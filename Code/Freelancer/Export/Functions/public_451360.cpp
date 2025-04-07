#include "Freelancer-PCH.h"

PROC_DECLARE(0x451360, internal_451360, public_451360);
extern "C" NAKED register_t __cdecl internal_451360()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x70]
        ret 
        UNREACHABLE_TRAP(0x451360)
    }
}
