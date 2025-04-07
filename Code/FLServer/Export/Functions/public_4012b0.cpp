#include "FLServer-PCH.h"

PROC_DECLARE(0x4012b0, internal_4012b0, public_4012b0);
extern "C" NAKED register_t __cdecl internal_4012b0()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x4012b0)
    }
}
