#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db20e4);

PROC_DECLARE(0x6db1dc2, internal_6db1dc2, public_6db1dc2);
extern "C" NAKED register_t __cdecl internal_6db1dc2()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6db20e4
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6db1dc2)
    }
}
