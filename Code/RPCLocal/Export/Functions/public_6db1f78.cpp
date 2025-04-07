#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1f4c);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f78);

PROC_DECLARE(0x6db1f78, internal_6db1f78, public_6db1f78);
extern "C" NAKED register_t __cdecl internal_6db1f78()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6db1f4c
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6db1f78)
    }
}
