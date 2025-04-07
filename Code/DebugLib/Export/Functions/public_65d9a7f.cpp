#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9a7f);
CLANG_FORWARD_PROC_SYMBOL(public_65d9a8e);

PROC_DECLARE(0x65d9a7f, internal_65d9a7f, public_65d9a7f);
extern "C" NAKED register_t __cdecl internal_65d9a7f()
{
    __asm
    {
        push 1
        push 0
        push 0
        call public_65d9a8e
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x65d9a7f)
    }
}
