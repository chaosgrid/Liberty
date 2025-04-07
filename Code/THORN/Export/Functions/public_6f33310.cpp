#include "THORN-PCH.h"

PROC_DECLARE(0x6f33310, internal_6f33310, public_6f33310);
extern "C" NAKED register_t __cdecl internal_6f33310()
{
    __asm
    {
        mov eax, offset public_6f5f870
        ret 
        UNREACHABLE_TRAP(0x6f33310)
    }
}
