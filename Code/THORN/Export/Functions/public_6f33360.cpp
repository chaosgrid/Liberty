#include "THORN-PCH.h"

PROC_DECLARE(0x6f33360, internal_6f33360, public_6f33360);
extern "C" NAKED register_t __cdecl internal_6f33360()
{
    __asm
    {
        mov eax, offset public_6f5f7c4
        ret 
        UNREACHABLE_TRAP(0x6f33360)
    }
}
