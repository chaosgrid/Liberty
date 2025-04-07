#include "EngBase-PCH.h"

PROC_DECLARE(0x6626cf0, internal_6626cf0, public_6626cf0);
extern "C" NAKED register_t __cdecl internal_6626cf0()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0x10
        UNREACHABLE_TRAP(0x6626cf0)
    }
}
