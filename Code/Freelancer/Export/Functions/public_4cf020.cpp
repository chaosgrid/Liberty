#include "Freelancer-PCH.h"

PROC_DECLARE(0x4cf020, internal_4cf020, public_4cf020);
extern "C" NAKED register_t __cdecl internal_4cf020()
{
    __asm
    {
        ret 
        UNREACHABLE_TRAP(0x4cf020)
    }
}
