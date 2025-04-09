#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b0860, internal_5b0860, public_5b0860);
extern "C" NAKED register_t __cdecl internal_5b0860()
{
    __asm
    {
        mov eax, offset public_67ea64
        ret 
        UNREACHABLE_TRAP(0x5b0860)
    }
}
