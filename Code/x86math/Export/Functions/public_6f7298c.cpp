#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f72960);
CLANG_FORWARD_PROC_SYMBOL(public_6f7298c);

PROC_DECLARE(0x6f7298c, internal_6f7298c, public_6f7298c);
extern "C" NAKED register_t __cdecl internal_6f7298c()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6f72960
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6f7298c)
    }
}
