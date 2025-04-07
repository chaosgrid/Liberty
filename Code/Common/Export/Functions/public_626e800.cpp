#include "Common-PCH.h"

PROC_DECLARE(0x626e800, internal_626e800, public_626e800);
extern "C" NAKED register_t __cdecl internal_626e800()
{
    __asm
    {
        mov eax, 0x10
        ret 
        UNREACHABLE_TRAP(0x626e800)
    }
}
