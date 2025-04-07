#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9b33);
CLANG_FORWARD_PROC_SYMBOL(public_65dceab);

PROC_DECLARE(0x65d9b33, internal_65d9b33, public_65d9b33);
extern "C" NAKED register_t __cdecl internal_65d9b33()
{
    __asm
    {
        push 0xD
        call public_65dceab
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65d9b33)
    }
}
