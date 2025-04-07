#include "zlib-PCH.h"

PROC_DECLARE(0x1000a3a0, internal_1000a3a0, public_1000a3a0);
extern "C" NAKED register_t __cdecl internal_1000a3a0()
{
    __asm
    {
        mov eax, offset public_1000b068
        ret 
        UNREACHABLE_TRAP(0x1000a3a0)
    }
}
