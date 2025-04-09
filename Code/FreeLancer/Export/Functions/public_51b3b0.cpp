#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51b3b0, internal_51b3b0, public_51b3b0);
extern "C" NAKED register_t __cdecl internal_51b3b0()
{
    __asm
    {
        mov eax, offset public_5dbfdc
        ret 
        UNREACHABLE_TRAP(0x51b3b0)
    }
}
