#include "Common-PCH.h"

PROC_DECLARE(0x626e1b0, internal_626e1b0, public_626e1b0);
extern "C" NAKED register_t __cdecl internal_626e1b0()
{
    __asm
    {
        mov eax, 0xD
        ret 
        UNREACHABLE_TRAP(0x626e1b0)
    }
}
