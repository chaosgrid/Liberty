#include "Freelancer-PCH.h"

PROC_DECLARE(0x53f780, internal_53f780, public_53f780);
extern "C" NAKED register_t __cdecl internal_53f780()
{
    __asm
    {
        ret 0xC
        UNREACHABLE_TRAP(0x53f780)
    }
}
