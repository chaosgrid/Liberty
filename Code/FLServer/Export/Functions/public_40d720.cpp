#include "FLServer-PCH.h"

PROC_DECLARE(0x40d720, internal_40d720, public_40d720);
extern "C" NAKED register_t __cdecl internal_40d720()
{
    __asm
    {
        mov eax, offset public_41d338
        ret 
        UNREACHABLE_TRAP(0x40d720)
    }
}
