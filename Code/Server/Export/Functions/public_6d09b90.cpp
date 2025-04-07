#include "Server-PCH.h"

PROC_DECLARE(0x6d09b90, internal_6d09b90, public_6d09b90);
extern "C" NAKED register_t __cdecl internal_6d09b90()
{
    __asm
    {
        mov eax, 0x2000000
        ret 
        UNREACHABLE_TRAP(0x6d09b90)
    }
}
