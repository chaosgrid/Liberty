#include "FLServer-PCH.h"

PROC_DECLARE(0x401330, internal_401330, public_401330);
extern "C" NAKED register_t __cdecl internal_401330()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x401330)
    }
}
