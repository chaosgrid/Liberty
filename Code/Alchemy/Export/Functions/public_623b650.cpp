#include "Alchemy-PCH.h"

PROC_DECLARE(0x623b650, internal_623b650, public_623b650);
extern "C" NAKED register_t __cdecl internal_623b650()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x623b650)
    }
}
