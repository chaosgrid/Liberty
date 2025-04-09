#include "Freelancer-PCH.h"

PROC_DECLARE(0x53e180, internal_53e180, public_53e180);
extern "C" NAKED register_t __cdecl internal_53e180()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x53e180)
    }
}
