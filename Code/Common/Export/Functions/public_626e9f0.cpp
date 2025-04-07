#include "Common-PCH.h"

PROC_DECLARE(0x626e9f0, internal_626e9f0, public_626e9f0);
extern "C" NAKED register_t __cdecl internal_626e9f0()
{
    __asm
    {
        mov eax, 0x11
        ret 
        UNREACHABLE_TRAP(0x626e9f0)
    }
}
