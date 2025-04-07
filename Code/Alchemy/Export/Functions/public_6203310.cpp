#include "Alchemy-PCH.h"

PROC_DECLARE(0x6203310, internal_6203310, public_6203310);
extern "C" NAKED register_t __cdecl internal_6203310()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6203310)
    }
}
