#include "Alchemy-PCH.h"

PROC_DECLARE(0x62144c0, internal_62144c0, public_62144c0);
extern "C" NAKED register_t __cdecl internal_62144c0()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62144c0)
    }
}
