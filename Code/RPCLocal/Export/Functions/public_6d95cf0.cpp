#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d95cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6da21d0);

PROC_DECLARE(0x6d95cf0, internal_6d95cf0, public_6d95cf0);
extern "C" NAKED register_t __cdecl internal_6d95cf0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6db3dfc
        jmp public_6da21d0
        UNREACHABLE_TRAP(0x6d95cf0)
    }
}
