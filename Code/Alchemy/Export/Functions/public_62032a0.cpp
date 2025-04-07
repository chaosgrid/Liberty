#include "Alchemy-PCH.h"

PROC_DECLARE(0x62032a0, internal_62032a0, public_62032a0);
extern "C" NAKED register_t __cdecl internal_62032a0()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x62032a0)
    }
}
