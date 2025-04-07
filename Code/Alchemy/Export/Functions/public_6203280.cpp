#include "Alchemy-PCH.h"

PROC_DECLARE(0x6203280, internal_6203280, public_6203280);
extern "C" NAKED register_t __cdecl internal_6203280()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x6203280)
    }
}
