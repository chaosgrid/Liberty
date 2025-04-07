#include "FLServer-PCH.h"

PROC_DECLARE(0x4104d0, internal_4104d0, public_4104d0);
extern "C" NAKED register_t __cdecl internal_4104d0()
{
    __asm
    {
        mov eax, offset public_41daf4
        ret 
        UNREACHABLE_TRAP(0x4104d0)
    }
}
