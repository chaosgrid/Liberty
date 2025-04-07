#include "FLServer-PCH.h"

PROC_DECLARE(0x40aea0, internal_40aea0, public_40aea0);
extern "C" NAKED register_t __cdecl internal_40aea0()
{
    __asm
    {
        mov eax, offset public_41cff8
        ret 
        UNREACHABLE_TRAP(0x40aea0)
    }
}
