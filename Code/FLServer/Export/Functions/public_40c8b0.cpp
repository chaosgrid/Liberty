#include "FLServer-PCH.h"

PROC_DECLARE(0x40c8b0, internal_40c8b0, public_40c8b0);
extern "C" NAKED register_t __cdecl internal_40c8b0()
{
    __asm
    {
        mov eax, offset public_41d018
        ret 
        UNREACHABLE_TRAP(0x40c8b0)
    }
}
