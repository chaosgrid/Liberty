#include "Alchemy-PCH.h"

PROC_DECLARE(0x623bf80, internal_623bf80, public_623bf80);
extern "C" NAKED register_t __cdecl internal_623bf80()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x623bf80)
    }
}
