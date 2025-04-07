#include "Alchemy-PCH.h"

PROC_DECLARE(0x623c6b0, internal_623c6b0, public_623c6b0);
extern "C" NAKED register_t __cdecl internal_623c6b0()
{
    __asm
    {
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x623c6b0)
    }
}
