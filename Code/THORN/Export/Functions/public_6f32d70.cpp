#include "THORN-PCH.h"

PROC_DECLARE(0x6f32d70, internal_6f32d70, public_6f32d70);
extern "C" NAKED register_t __cdecl internal_6f32d70()
{
    __asm
    {
        mov eax, offset public_6f5fd10
        ret 
        UNREACHABLE_TRAP(0x6f32d70)
    }
}
