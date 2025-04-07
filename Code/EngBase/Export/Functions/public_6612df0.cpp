#include "EngBase-PCH.h"

PROC_DECLARE(0x6612df0, internal_6612df0, public_6612df0);
extern "C" NAKED register_t __cdecl internal_6612df0()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x6612df0)
    }
}
