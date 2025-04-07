#include "THORN-PCH.h"

PROC_DECLARE(0x6f32e90, internal_6f32e90, public_6f32e90);
extern "C" NAKED register_t __cdecl internal_6f32e90()
{
    __asm
    {
        mov eax, offset public_6f5fc68
        ret 
        UNREACHABLE_TRAP(0x6f32e90)
    }
}
