#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91310);
CLANG_FORWARD_PROC_SYMBOL(public_6da21d0);

PROC_DECLARE(0x6d91310, internal_6d91310, public_6d91310);
extern "C" NAKED register_t __cdecl internal_6d91310()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6db3cf0
        jmp public_6da21d0
        UNREACHABLE_TRAP(0x6d91310)
    }
}
