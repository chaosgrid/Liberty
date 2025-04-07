#include "FLServer-PCH.h"

PROC_DECLARE(0x403920, internal_403920, public_403920);
extern "C" NAKED register_t __cdecl internal_403920()
{
    __asm
    {
        mov eax, offset public_41c1e8
        ret 
        UNREACHABLE_TRAP(0x403920)
    }
}
