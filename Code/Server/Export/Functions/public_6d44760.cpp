#include "Server-PCH.h"

PROC_DECLARE(0x6d44760, internal_6d44760, public_6d44760);
extern "C" NAKED register_t __cdecl internal_6d44760()
{
    __asm
    {
        mov eax, offset public_6d8facc
        ret 
        UNREACHABLE_TRAP(0x6d44760)
    }
}
