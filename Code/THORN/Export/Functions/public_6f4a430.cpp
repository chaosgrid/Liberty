#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a430, internal_6f4a430, public_6f4a430);
extern "C" NAKED register_t __cdecl internal_6f4a430()
{
    __asm
    {
        mov eax, offset public_6f5e6c8
        ret 
        UNREACHABLE_TRAP(0x6f4a430)
    }
}
