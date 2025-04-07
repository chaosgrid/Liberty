#include "Freelancer-PCH.h"

PROC_DECLARE(0x451370, internal_451370, public_451370);
extern "C" NAKED register_t __cdecl internal_451370()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x451370)
    }
}
