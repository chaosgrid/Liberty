#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a530, internal_6f4a530, public_6f4a530);
extern "C" NAKED register_t __cdecl internal_6f4a530()
{
    __asm
    {
        mov eax, offset public_6f6025c
        ret 
        UNREACHABLE_TRAP(0x6f4a530)
    }
}
