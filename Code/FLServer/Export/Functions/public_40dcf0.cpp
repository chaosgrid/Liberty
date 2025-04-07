#include "FLServer-PCH.h"

PROC_DECLARE(0x40dcf0, internal_40dcf0, public_40dcf0);
extern "C" NAKED register_t __cdecl internal_40dcf0()
{
    __asm
    {
        mov eax, offset public_41d548
        ret 
        UNREACHABLE_TRAP(0x40dcf0)
    }
}
