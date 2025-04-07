#include "Alchemy-PCH.h"

PROC_DECLARE(0x62032e0, internal_62032e0, public_62032e0);
extern "C" NAKED register_t __cdecl internal_62032e0()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0x20
        UNREACHABLE_TRAP(0x62032e0)
    }
}
