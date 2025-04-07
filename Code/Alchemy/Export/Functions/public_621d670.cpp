#include "Alchemy-PCH.h"

PROC_DECLARE(0x621d670, internal_621d670, public_621d670);
extern "C" NAKED register_t __cdecl internal_621d670()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x621d670)
    }
}
