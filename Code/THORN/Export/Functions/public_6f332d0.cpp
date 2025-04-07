#include "THORN-PCH.h"

PROC_DECLARE(0x6f332d0, internal_6f332d0, public_6f332d0);
extern "C" NAKED register_t __cdecl internal_6f332d0()
{
    __asm
    {
        mov eax, offset public_6f5ff1c
        ret 
        UNREACHABLE_TRAP(0x6f332d0)
    }
}
