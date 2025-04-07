#include "Freelancer-PCH.h"

PROC_DECLARE(0x51ad70, internal_51ad70, public_51ad70);
extern "C" NAKED register_t __cdecl internal_51ad70()
{
    __asm
    {
        mov eax, offset public_5dbea4
        ret 
        UNREACHABLE_TRAP(0x51ad70)
    }
}
