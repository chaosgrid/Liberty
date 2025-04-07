#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418f24);

PROC_DECLARE(0x40d7f0, internal_40d7f0, public_40d7f0);
extern "C" NAKED register_t __cdecl internal_40d7f0()
{
    __asm
    {
        call public_418f24
        neg eax
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x40d7f0)
    }
}
