#include "Common-PCH.h"

PROC_DECLARE(0x626d8f0, internal_626d8f0, public_626d8f0);
extern "C" NAKED register_t __cdecl internal_626d8f0()
{
    __asm
    {
        mov eax, 0x1B
        ret 
        UNREACHABLE_TRAP(0x626d8f0)
    }
}
