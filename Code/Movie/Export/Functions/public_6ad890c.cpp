#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad890c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8915);

PROC_DECLARE(0x6ad890c, internal_6ad890c, public_6ad890c);
extern "C" NAKED register_t __cdecl internal_6ad890c()
{
    __asm
    {
        push 1
        call public_6ad8915
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ad890c)
    }
}
