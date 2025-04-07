#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c9f);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

PROC_DECLARE(0x6ed0ccb, internal_6ed0ccb, public_6ed0ccb);
extern "C" NAKED register_t __cdecl internal_6ed0ccb()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6ed0c9f
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6ed0ccb)
    }
}
