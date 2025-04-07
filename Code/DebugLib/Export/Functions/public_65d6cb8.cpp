#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);

PROC_DECLARE(0x65d6cb8, internal_65d6cb8, public_65d6cb8);
extern "C" NAKED register_t __cdecl internal_65d6cb8()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_65d7f23
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65d6cb8)
    }
}
