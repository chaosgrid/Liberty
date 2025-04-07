#include "Common-PCH.h"

PROC_DECLARE(0x626fe80, internal_626fe80, public_626fe80);
extern "C" NAKED register_t __cdecl internal_626fe80()
{
    __asm
    {
        mov eax, 5
        ret 
        UNREACHABLE_TRAP(0x626fe80)
    }
}
