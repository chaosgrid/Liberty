#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91670);
CLANG_FORWARD_PROC_SYMBOL(public_6da21d0);

PROC_DECLARE(0x6d91670, internal_6d91670, public_6d91670);
extern "C" NAKED register_t __cdecl internal_6d91670()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6db3d10
        jmp public_6da21d0
        UNREACHABLE_TRAP(0x6d91670)
    }
}
