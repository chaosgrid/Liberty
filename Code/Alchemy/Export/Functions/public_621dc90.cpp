#include "Alchemy-PCH.h"

PROC_DECLARE(0x621dc90, internal_621dc90, public_621dc90);
extern "C" NAKED register_t __cdecl internal_621dc90()
{
    __asm
    {
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x621dc90)
    }
}
