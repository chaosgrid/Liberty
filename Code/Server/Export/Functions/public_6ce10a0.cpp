#include "Server-PCH.h"

PROC_DECLARE(0x6ce10a0, internal_6ce10a0, public_6ce10a0);
extern "C" NAKED register_t __cdecl internal_6ce10a0()
{
    __asm
    {
        mov eax, 3
        ret 
        UNREACHABLE_TRAP(0x6ce10a0)
    }
}
