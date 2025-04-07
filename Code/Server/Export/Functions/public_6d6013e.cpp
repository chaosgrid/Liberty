#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60112);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6d6013e, internal_6d6013e, public_6d6013e);
extern "C" NAKED register_t __cdecl internal_6d6013e()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6d60112
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6d6013e)
    }
}
