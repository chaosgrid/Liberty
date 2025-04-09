#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51e070, internal_51e070, public_51e070);
extern "C" NAKED register_t __cdecl internal_51e070()
{
    __asm
    {
        mov eax, offset public_5dc1e4
        ret 
        UNREACHABLE_TRAP(0x51e070)
    }
}
