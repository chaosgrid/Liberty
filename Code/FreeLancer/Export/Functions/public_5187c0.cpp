#include "Freelancer-PCH.h"

PROC_DECLARE(0x5187c0, internal_5187c0, public_5187c0);
extern "C" NAKED register_t __cdecl internal_5187c0()
{
    __asm
    {
        mov eax, offset public_5dbb94
        ret 
        UNREACHABLE_TRAP(0x5187c0)
    }
}
