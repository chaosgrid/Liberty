#include "Common-PCH.h"

PROC_DECLARE(0x626f6f0, internal_626f6f0, public_626f6f0);
extern "C" NAKED register_t __cdecl internal_626f6f0()
{
    __asm
    {
        mov eax, 0x21
        ret 
        UNREACHABLE_TRAP(0x626f6f0)
    }
}
