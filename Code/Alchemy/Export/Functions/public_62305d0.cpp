#include "Alchemy-PCH.h"

PROC_DECLARE(0x62305d0, internal_62305d0, public_62305d0);
extern "C" NAKED register_t __cdecl internal_62305d0()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62305d0)
    }
}
