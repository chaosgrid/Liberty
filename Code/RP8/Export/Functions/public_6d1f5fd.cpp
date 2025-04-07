#include "RP8-PCH.h"

PROC_DECLARE(0x6d1f5fd, internal_6d1f5fd, public_6d1f5fd);
extern "C" NAKED register_t __cdecl internal_6d1f5fd()
{
    __asm
    {
        push ebp
        mov ebp, esp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1f5fd)
    }
}
