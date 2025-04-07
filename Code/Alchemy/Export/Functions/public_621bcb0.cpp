#include "Alchemy-PCH.h"

PROC_DECLARE(0x621bcb0, internal_621bcb0, public_621bcb0);
extern "C" NAKED register_t __cdecl internal_621bcb0()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x621bcb0)
    }
}
