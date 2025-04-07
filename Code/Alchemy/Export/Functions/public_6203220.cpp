#include "Alchemy-PCH.h"

PROC_DECLARE(0x6203220, internal_6203220, public_6203220);
extern "C" NAKED register_t __cdecl internal_6203220()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x6203220)
    }
}
