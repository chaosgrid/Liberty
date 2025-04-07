#include "EngBase-PCH.h"

PROC_DECLARE(0x6626ce0, internal_6626ce0, public_6626ce0);
extern "C" NAKED register_t __cdecl internal_6626ce0()
{
    __asm
    {
        ret 0xC
        UNREACHABLE_TRAP(0x6626ce0)
    }
}
