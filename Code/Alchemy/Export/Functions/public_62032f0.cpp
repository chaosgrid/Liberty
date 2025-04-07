#include "Alchemy-PCH.h"

PROC_DECLARE(0x62032f0, internal_62032f0, public_62032f0);
extern "C" NAKED register_t __cdecl internal_62032f0()
{
    __asm
    {
        xor eax, eax
        ret 0x20
        UNREACHABLE_TRAP(0x62032f0)
    }
}
