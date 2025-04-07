#include "FLServer-PCH.h"

PROC_DECLARE(0x40d8a0, internal_40d8a0, public_40d8a0);
extern "C" NAKED register_t __cdecl internal_40d8a0()
{
    __asm
    {
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x40d8a0)
    }
}
