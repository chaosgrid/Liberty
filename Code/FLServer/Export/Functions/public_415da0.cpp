#include "FLServer-PCH.h"

PROC_DECLARE(0x415da0, internal_415da0, public_415da0);
extern "C" NAKED register_t __cdecl internal_415da0()
{
    __asm
    {
        ret 8
        UNREACHABLE_TRAP(0x415da0)
    }
}
