#include "Alchemy-PCH.h"

PROC_DECLARE(0x621c4b0, internal_621c4b0, public_621c4b0);
extern "C" NAKED register_t __cdecl internal_621c4b0()
{
    __asm
    {
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x621c4b0)
    }
}
