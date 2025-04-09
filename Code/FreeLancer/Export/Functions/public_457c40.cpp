#include "Freelancer-PCH.h"

PROC_DECLARE(0x457c40, internal_457c40, public_457c40);
extern "C" NAKED register_t __cdecl internal_457c40()
{
    __asm
    {
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x457c40)
    }
}
