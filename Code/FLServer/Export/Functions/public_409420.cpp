#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418c7e);

PROC_DECLARE(0x409420, internal_409420, public_409420);
extern "C" NAKED register_t __cdecl internal_409420()
{
    __asm
    {
        push 0
        add ecx, 0x140
        call public_418c7e
        ret 
        UNREACHABLE_TRAP(0x409420)
    }
}
