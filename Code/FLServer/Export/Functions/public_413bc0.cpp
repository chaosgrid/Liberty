#include "FLServer-PCH.h"

PROC_DECLARE(0x413bc0, internal_413bc0, public_413bc0);
extern "C" NAKED register_t __cdecl internal_413bc0()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x413bc0)
    }
}
