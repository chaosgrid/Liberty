#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a500, internal_6f4a500, public_6f4a500);
extern "C" NAKED register_t __cdecl internal_6f4a500()
{
    __asm
    {
        mov eax, offset public_6f6024c
        ret 
        UNREACHABLE_TRAP(0x6f4a500)
    }
}
