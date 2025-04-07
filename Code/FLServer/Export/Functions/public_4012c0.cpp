#include "FLServer-PCH.h"

PROC_DECLARE(0x4012c0, internal_4012c0, public_4012c0);
extern "C" NAKED register_t __cdecl internal_4012c0()
{
    __asm
    {
        ret 
        UNREACHABLE_TRAP(0x4012c0)
    }
}
