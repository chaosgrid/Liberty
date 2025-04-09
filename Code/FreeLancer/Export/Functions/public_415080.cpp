#include "Freelancer-PCH.h"

PROC_DECLARE(0x415080, internal_415080, public_415080);
extern "C" NAKED register_t __cdecl internal_415080()
{
    __asm
    {
        mov eax, offset public_5c8ce0
        ret 
        UNREACHABLE_TRAP(0x415080)
    }
}
