#include "FLServer-PCH.h"

PROC_DECLARE(0x411d60, internal_411d60, public_411d60);
extern "C" NAKED register_t __cdecl internal_411d60()
{
    __asm
    {
        mov eax, offset public_41dda0
        ret 
        UNREACHABLE_TRAP(0x411d60)
    }
}
