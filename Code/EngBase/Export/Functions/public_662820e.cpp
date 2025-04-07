#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66281e2);
CLANG_FORWARD_PROC_SYMBOL(public_662820e);

PROC_DECLARE(0x662820e, internal_662820e, public_662820e);
extern "C" NAKED register_t __cdecl internal_662820e()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_66281e2
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x662820e)
    }
}
