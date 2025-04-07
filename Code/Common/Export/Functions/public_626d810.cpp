#include "Common-PCH.h"

PROC_DECLARE(0x626d810, internal_626d810, public_626d810);
extern "C" NAKED register_t __cdecl internal_626d810()
{
    __asm
    {
        mov eax, 0x19
        ret 
        UNREACHABLE_TRAP(0x626d810)
    }
}
