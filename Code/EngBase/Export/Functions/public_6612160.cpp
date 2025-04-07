#include "EngBase-PCH.h"

PROC_DECLARE(0x6612160, internal_6612160, public_6612160);
extern "C" NAKED register_t __cdecl internal_6612160()
{
    __asm
    {
        ret 8
        UNREACHABLE_TRAP(0x6612160)
    }
}
