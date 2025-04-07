#include "FLServer-PCH.h"

PROC_DECLARE(0x401350, internal_401350, public_401350);
extern "C" NAKED register_t __cdecl internal_401350()
{
    __asm
    {
        mov eax, offset public_41bc80
        ret 
        UNREACHABLE_TRAP(0x401350)
    }
}
