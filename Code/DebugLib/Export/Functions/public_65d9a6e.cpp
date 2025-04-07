#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9a6e);
CLANG_FORWARD_PROC_SYMBOL(public_65d9a8e);

PROC_DECLARE(0x65d9a6e, internal_65d9a6e, public_65d9a6e);
extern "C" NAKED register_t __cdecl internal_65d9a6e()
{
    __asm
    {
        push 0
        push 1
        push dword ptr ss : [esp+0xC]
        call public_65d9a8e
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x65d9a6e)
    }
}
