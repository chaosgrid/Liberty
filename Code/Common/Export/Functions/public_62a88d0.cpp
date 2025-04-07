#include "Common-PCH.h"

PROC_DECLARE(0x62a88d0, internal_62a88d0, public_62a88d0);
extern "C" NAKED register_t __cdecl internal_62a88d0()
{
    __asm
    {
        ret 0x10
        UNREACHABLE_TRAP(0x62a88d0)
    }
}
