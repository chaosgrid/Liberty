#include "FLServer-PCH.h"

PROC_DECLARE(0x4012d0, internal_4012d0, public_4012d0);
extern "C" NAKED register_t __cdecl internal_4012d0()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x4012d0)
    }
}
