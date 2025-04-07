#include "FLServer-PCH.h"

PROC_DECLARE(0x411d40, internal_411d40, public_411d40);
extern "C" NAKED register_t __cdecl internal_411d40()
{
    __asm
    {
        mov eax, offset public_41dd0c
        ret 
        UNREACHABLE_TRAP(0x411d40)
    }
}
