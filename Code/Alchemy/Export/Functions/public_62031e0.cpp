#include "Alchemy-PCH.h"

PROC_DECLARE(0x62031e0, internal_62031e0, public_62031e0);
extern "C" NAKED register_t __cdecl internal_62031e0()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62031e0)
    }
}
