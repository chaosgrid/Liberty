#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d84230);
CLANG_FORWARD_PROC_SYMBOL(public_6d843b0);

PROC_DECLARE(0x6d84230, internal_6d84230, public_6d84230);
extern "C" NAKED register_t __cdecl internal_6d84230()
{
    __asm
    {
        mov ecx, offset public_6dbb838
        jmp public_6d843b0
        UNREACHABLE_TRAP(0x6d84230)
    }
}
