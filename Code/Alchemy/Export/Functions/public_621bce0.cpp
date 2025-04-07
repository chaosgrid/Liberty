#include "Alchemy-PCH.h"

PROC_DECLARE(0x621bce0, internal_621bce0, public_621bce0);
extern "C" NAKED register_t __cdecl internal_621bce0()
{
    __asm
    {
        mov eax, 0x12C
        ret 4
        UNREACHABLE_TRAP(0x621bce0)
    }
}
