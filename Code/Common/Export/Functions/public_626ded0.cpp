#include "Common-PCH.h"

PROC_DECLARE(0x626ded0, internal_626ded0, public_626ded0);
extern "C" NAKED register_t __cdecl internal_626ded0()
{
    __asm
    {
        mov eax, 0xE
        ret 
        UNREACHABLE_TRAP(0x626ded0)
    }
}
