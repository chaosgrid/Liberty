#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_PROC_SYMBOL(public_65d8547);

PROC_DECLARE(0x65d6f71, internal_65d6f71, public_65d6f71);
extern "C" NAKED register_t __cdecl internal_65d6f71()
{
    __asm
    {
        push 1
        push dword ptr ss : [esp+8]
        call public_65d8547
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65d6f71)
    }
}
