#include "Common-PCH.h"

PROC_DECLARE(0x626f2c0, internal_626f2c0, public_626f2c0);
extern "C" NAKED register_t __cdecl internal_626f2c0()
{
    __asm
    {
        mov eax, 0x1F
        ret 
        UNREACHABLE_TRAP(0x626f2c0)
    }
}
