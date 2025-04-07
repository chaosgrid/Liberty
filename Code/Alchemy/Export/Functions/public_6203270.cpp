#include "Alchemy-PCH.h"

PROC_DECLARE(0x6203270, internal_6203270, public_6203270);
extern "C" NAKED register_t __cdecl internal_6203270()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x6203270)
    }
}
