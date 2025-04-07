#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a400, internal_6f4a400, public_6f4a400);
extern "C" NAKED register_t __cdecl internal_6f4a400()
{
    __asm
    {
        mov eax, offset public_6f60230
        ret 
        UNREACHABLE_TRAP(0x6f4a400)
    }
}
