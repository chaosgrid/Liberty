#include "Freelancer-PCH.h"

PROC_DECLARE(0x43d2e0, internal_43d2e0, public_43d2e0);
extern "C" NAKED register_t __cdecl internal_43d2e0()
{
    __asm
    {
        mov eax, 3
        ret 
        UNREACHABLE_TRAP(0x43d2e0)
    }
}
