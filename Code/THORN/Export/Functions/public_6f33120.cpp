#include "THORN-PCH.h"

PROC_DECLARE(0x6f33120, internal_6f33120, public_6f33120);
extern "C" NAKED register_t __cdecl internal_6f33120()
{
    __asm
    {
        mov eax, offset public_6f5fb68
        ret 
        UNREACHABLE_TRAP(0x6f33120)
    }
}
