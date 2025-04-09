#include "Freelancer-PCH.h"

PROC_DECLARE(0x4b5010, internal_4b5010, public_4b5010);
extern "C" NAKED register_t __cdecl internal_4b5010()
{
    __asm
    {
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x4b5010)
    }
}
