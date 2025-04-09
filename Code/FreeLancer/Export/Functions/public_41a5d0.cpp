#include "FreeLancer-PCH.h"

PROC_DECLARE(0x41a5d0, internal_41a5d0, public_41a5d0);
extern "C" NAKED register_t __cdecl internal_41a5d0()
{
    __asm
    {
        ret 0x14
        UNREACHABLE_TRAP(0x41a5d0)
    }
}
