#include "Alchemy-PCH.h"

PROC_DECLARE(0x620e990, internal_620e990, public_620e990);
extern "C" NAKED register_t __cdecl internal_620e990()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x620e990)
    }
}
