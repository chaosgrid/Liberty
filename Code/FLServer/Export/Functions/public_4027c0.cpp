#include "FLServer-PCH.h"

PROC_DECLARE(0x4027c0, internal_4027c0, public_4027c0);
extern "C" NAKED register_t __cdecl internal_4027c0()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x4027c0)
    }
}
