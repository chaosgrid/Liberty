#include "FLServer-PCH.h"

PROC_DECLARE(0x4157b0, internal_4157b0, public_4157b0);
extern "C" NAKED register_t __cdecl internal_4157b0()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x4157b0)
    }
}
