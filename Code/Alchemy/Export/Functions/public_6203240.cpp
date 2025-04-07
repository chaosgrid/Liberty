#include "Alchemy-PCH.h"

PROC_DECLARE(0x6203240, internal_6203240, public_6203240);
extern "C" NAKED register_t __cdecl internal_6203240()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x6203240)
    }
}
