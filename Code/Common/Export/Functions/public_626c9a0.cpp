#include "Common-PCH.h"

PROC_DECLARE(0x626c9a0, internal_626c9a0, public_626c9a0);
extern "C" NAKED register_t __cdecl internal_626c9a0()
{
    __asm
    {
        mov eax, 3
        ret 
        UNREACHABLE_TRAP(0x626c9a0)
    }
}
