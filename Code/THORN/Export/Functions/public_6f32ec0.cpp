#include "THORN-PCH.h"

PROC_DECLARE(0x6f32ec0, internal_6f32ec0, public_6f32ec0);
extern "C" NAKED register_t __cdecl internal_6f32ec0()
{
    __asm
    {
        mov eax, offset public_6f5fedc
        ret 
        UNREACHABLE_TRAP(0x6f32ec0)
    }
}
