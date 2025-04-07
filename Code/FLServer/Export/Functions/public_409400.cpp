#include "FLServer-PCH.h"

PROC_DECLARE(0x409400, internal_409400, public_409400);
extern "C" NAKED register_t __cdecl internal_409400()
{
    __asm
    {
        mov eax, offset public_41cc00
        ret 
        UNREACHABLE_TRAP(0x409400)
    }
}
