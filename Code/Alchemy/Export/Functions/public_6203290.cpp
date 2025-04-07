#include "Alchemy-PCH.h"

PROC_DECLARE(0x6203290, internal_6203290, public_6203290);
extern "C" NAKED register_t __cdecl internal_6203290()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x6203290)
    }
}
