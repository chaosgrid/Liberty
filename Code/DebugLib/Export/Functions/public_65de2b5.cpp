#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de2b5);
CLANG_FORWARD_PROC_SYMBOL(public_65de2cc);

PROC_DECLARE(0x65de2b5, internal_65de2b5, public_65de2b5);
extern "C" NAKED register_t __cdecl internal_65de2b5()
{
    __asm
    {
        push 0
        push dword ptr ss : [esp+0x10]
        push dword ptr ss : [esp+0x10]
        push dword ptr ss : [esp+0x10]
        call public_65de2cc
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x65de2b5)
    }
}
