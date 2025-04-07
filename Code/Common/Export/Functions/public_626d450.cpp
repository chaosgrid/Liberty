#include "Common-PCH.h"

PROC_DECLARE(0x626d450, internal_626d450, public_626d450);
extern "C" NAKED register_t __cdecl internal_626d450()
{
    __asm
    {
        mov eax, 0xB
        ret 
        UNREACHABLE_TRAP(0x626d450)
    }
}
