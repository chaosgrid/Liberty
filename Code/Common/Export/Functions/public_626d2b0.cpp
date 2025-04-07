#include "Common-PCH.h"

PROC_DECLARE(0x626d2b0, internal_626d2b0, public_626d2b0);
extern "C" NAKED register_t __cdecl internal_626d2b0()
{
    __asm
    {
        mov eax, 6
        ret 
        UNREACHABLE_TRAP(0x626d2b0)
    }
}
