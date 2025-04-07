#include "Common-PCH.h"

PROC_DECLARE(0x62a88e0, internal_62a88e0, public_62a88e0);
extern "C" NAKED register_t __cdecl internal_62a88e0()
{
    __asm
    {
        ret 0x14
        UNREACHABLE_TRAP(0x62a88e0)
    }
}
