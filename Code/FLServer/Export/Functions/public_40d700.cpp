#include "FLServer-PCH.h"

PROC_DECLARE(0x40d700, internal_40d700, public_40d700);
extern "C" NAKED register_t __cdecl internal_40d700()
{
    __asm
    {
        mov eax, offset public_41d2bc
        ret 
        UNREACHABLE_TRAP(0x40d700)
    }
}
