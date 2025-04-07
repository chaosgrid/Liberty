#include "FLServer-PCH.h"

PROC_DECLARE(0x407040, internal_407040, public_407040);
extern "C" NAKED register_t __cdecl internal_407040()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x407040)
    }
}
