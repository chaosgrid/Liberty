#include "Freelancer-PCH.h"

PROC_DECLARE(0x421150, internal_421150, public_421150);
extern "C" NAKED register_t __cdecl internal_421150()
{
    __asm
    {
        ret 
        UNREACHABLE_TRAP(0x421150)
    }
}
