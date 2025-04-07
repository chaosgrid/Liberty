#include "FLServer-PCH.h"

PROC_DECLARE(0x40dcd0, internal_40dcd0, public_40dcd0);
extern "C" NAKED register_t __cdecl internal_40dcd0()
{
    __asm
    {
        mov eax, offset public_41d49c
        ret 
        UNREACHABLE_TRAP(0x40dcd0)
    }
}
