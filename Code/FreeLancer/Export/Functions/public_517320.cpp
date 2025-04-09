#include "Freelancer-PCH.h"

PROC_DECLARE(0x517320, internal_517320, public_517320);
extern "C" NAKED register_t __cdecl internal_517320()
{
    __asm
    {
        mov eax, 2
        ret 
        UNREACHABLE_TRAP(0x517320)
    }
}
