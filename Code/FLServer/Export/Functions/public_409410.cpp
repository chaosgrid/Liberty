#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418c7e);

PROC_DECLARE(0x409410, internal_409410, public_409410);
extern "C" NAKED register_t __cdecl internal_409410()
{
    __asm
    {
        push 1
        add ecx, 0x140
        call public_418c7e
        ret 
        UNREACHABLE_TRAP(0x409410)
    }
}
