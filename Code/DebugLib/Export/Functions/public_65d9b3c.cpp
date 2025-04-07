#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9b3c);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);

PROC_DECLARE(0x65d9b3c, internal_65d9b3c, public_65d9b3c);
extern "C" NAKED register_t __cdecl internal_65d9b3c()
{
    __asm
    {
        push 0xD
        call public_65dcf0c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65d9b3c)
    }
}
