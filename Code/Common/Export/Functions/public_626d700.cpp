#include "Common-PCH.h"

PROC_DECLARE(0x626d700, internal_626d700, public_626d700);
extern "C" NAKED register_t __cdecl internal_626d700()
{
    __asm
    {
        mov eax, 0x16
        ret 
        UNREACHABLE_TRAP(0x626d700)
    }
}
