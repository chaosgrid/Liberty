#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d95bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6da21d0);

PROC_DECLARE(0x6d95bc0, internal_6d95bc0, public_6d95bc0);
extern "C" NAKED register_t __cdecl internal_6d95bc0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6db3de0
        jmp public_6da21d0
        UNREACHABLE_TRAP(0x6d95bc0)
    }
}
