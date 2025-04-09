#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51a2a0, internal_51a2a0, public_51a2a0);
extern "C" NAKED register_t __cdecl internal_51a2a0()
{
    __asm
    {
        mov eax, offset public_5dbd44
        ret 
        UNREACHABLE_TRAP(0x51a2a0)
    }
}
