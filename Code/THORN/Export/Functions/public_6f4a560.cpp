#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a560, internal_6f4a560, public_6f4a560);
extern "C" NAKED register_t __cdecl internal_6f4a560()
{
    __asm
    {
        mov eax, offset public_6f60270
        ret 
        UNREACHABLE_TRAP(0x6f4a560)
    }
}
