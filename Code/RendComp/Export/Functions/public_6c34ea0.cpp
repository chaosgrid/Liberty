#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ef0);

PROC_DECLARE(0x6c34ea0, internal_6c34ea0, public_6c34ea0);
extern "C" NAKED register_t __cdecl internal_6c34ea0()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6c34ef0
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6c34ea0)
    }
}
