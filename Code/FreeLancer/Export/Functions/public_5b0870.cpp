#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b0870, internal_5b0870, public_5b0870);
extern "C" NAKED register_t __cdecl internal_5b0870()
{
    __asm
    {
        mov eax, offset public_67ea68
        ret 
        UNREACHABLE_TRAP(0x5b0870)
    }
}
