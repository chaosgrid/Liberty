#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2c01a);
CLANG_FORWARD_PROC_SYMBOL(public_6d2c12b);

PROC_DECLARE(0x6d2c00b, internal_6d2c00b, public_6d2c00b);
extern "C" NAKED register_t __cdecl internal_6d2c00b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        call public_6d2c01a
        call public_6d2c12b
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2c00b)
    }
}
