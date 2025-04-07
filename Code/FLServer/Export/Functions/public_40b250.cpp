#include "FLServer-PCH.h"

PROC_DECLARE(0x40b250, internal_40b250, public_40b250);
extern "C" NAKED register_t __cdecl internal_40b250()
{
    __asm
    {
        ret 
        UNREACHABLE_TRAP(0x40b250)
    }
}
