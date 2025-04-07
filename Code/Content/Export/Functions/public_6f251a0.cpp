#include "Content-PCH.h"

PROC_DECLARE(0x6f251a0, internal_6f251a0, public_6f251a0);
extern "C" NAKED register_t __cdecl internal_6f251a0()
{
    __asm
    {
        mov eax, 0x16
        ret 
        UNREACHABLE_TRAP(0x6f251a0)
    }
}
