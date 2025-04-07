#include "Alchemy-PCH.h"

PROC_DECLARE(0x623b660, internal_623b660, public_623b660);
extern "C" NAKED register_t __cdecl internal_623b660()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x623b660)
    }
}
