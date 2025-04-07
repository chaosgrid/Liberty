#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2be);
CLANG_FORWARD_PROC_SYMBOL(public_6d49931);

PROC_DECLARE(0x6d49931, internal_6d49931, public_6d49931);
extern "C" NAKED register_t __cdecl internal_6d49931()
{
    __asm
    {
        push dword ptr ss : [esp+8]
        call public_6d2f2be
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d49931)
    }
}
