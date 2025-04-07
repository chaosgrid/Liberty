#include "THORN-PCH.h"

PROC_DECLARE(0x6f33200, internal_6f33200, public_6f33200);
extern "C" NAKED register_t __cdecl internal_6f33200()
{
    __asm
    {
        mov eax, offset public_6f5ff14
        ret 
        UNREACHABLE_TRAP(0x6f33200)
    }
}
