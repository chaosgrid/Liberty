#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f810);
CLANG_FORWARD_PROC_SYMBOL(public_6da21d0);

PROC_DECLARE(0x6d8f810, internal_6d8f810, public_6d8f810);
extern "C" NAKED register_t __cdecl internal_6d8f810()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6db3c70
        jmp public_6da21d0
        UNREACHABLE_TRAP(0x6d8f810)
    }
}
