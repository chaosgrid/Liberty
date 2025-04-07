#include "Common-PCH.h"

PROC_DECLARE(0x626d9c0, internal_626d9c0, public_626d9c0);
extern "C" NAKED register_t __cdecl internal_626d9c0()
{
    __asm
    {
        mov eax, 0x18
        ret 
        UNREACHABLE_TRAP(0x626d9c0)
    }
}
