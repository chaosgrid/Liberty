#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a690, internal_6f4a690, public_6f4a690);
extern "C" NAKED register_t __cdecl internal_6f4a690()
{
    __asm
    {
        mov eax, offset public_6f602c0
        ret 
        UNREACHABLE_TRAP(0x6f4a690)
    }
}
