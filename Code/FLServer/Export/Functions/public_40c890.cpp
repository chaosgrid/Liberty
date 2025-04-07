#include "FLServer-PCH.h"

PROC_DECLARE(0x40c890, internal_40c890, public_40c890);
extern "C" NAKED register_t __cdecl internal_40c890()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x40c890)
    }
}
