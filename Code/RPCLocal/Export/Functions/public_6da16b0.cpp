#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1730);

PROC_DECLARE(0x6da16b0, internal_6da16b0, public_6da16b0);
extern "C" NAKED register_t __cdecl internal_6da16b0()
{
    __asm
    {
        lea eax, ss:[esp+4]
        push eax
        mov ecx, offset public_6dbbf4c
        call public_6da1730
        ret 
        UNREACHABLE_TRAP(0x6da16b0)
    }
}
