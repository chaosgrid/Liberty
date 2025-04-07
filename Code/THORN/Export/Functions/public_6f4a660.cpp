#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a660, internal_6f4a660, public_6f4a660);
extern "C" NAKED register_t __cdecl internal_6f4a660()
{
    __asm
    {
        mov eax, offset public_6f602b4
        ret 
        UNREACHABLE_TRAP(0x6f4a660)
    }
}
