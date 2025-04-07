#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a630, internal_6f4a630, public_6f4a630);
extern "C" NAKED register_t __cdecl internal_6f4a630()
{
    __asm
    {
        mov eax, offset public_6f602a4
        ret 
        UNREACHABLE_TRAP(0x6f4a630)
    }
}
