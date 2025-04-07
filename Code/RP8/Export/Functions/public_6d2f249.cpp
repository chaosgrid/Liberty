#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2be);

PROC_DECLARE(0x6d2f249, internal_6d2f249, public_6d2f249);
extern "C" NAKED register_t __cdecl internal_6d2f249()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6d2f2be
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d2f249)
    }
}
