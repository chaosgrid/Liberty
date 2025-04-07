#include "FLServer-PCH.h"

PROC_DECLARE(0x40e750, internal_40e750, public_40e750);
extern "C" NAKED register_t __cdecl internal_40e750()
{
    __asm
    {
        mov eax, offset public_41d69c
        ret 
        UNREACHABLE_TRAP(0x40e750)
    }
}
