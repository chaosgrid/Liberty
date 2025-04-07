#include "Alchemy-PCH.h"

PROC_DECLARE(0x62032b0, internal_62032b0, public_62032b0);
extern "C" NAKED register_t __cdecl internal_62032b0()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x62032b0)
    }
}
