#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a460, internal_6f4a460, public_6f4a460);
extern "C" NAKED register_t __cdecl internal_6f4a460()
{
    __asm
    {
        mov eax, offset public_6f5e5a0
        ret 
        UNREACHABLE_TRAP(0x6f4a460)
    }
}
