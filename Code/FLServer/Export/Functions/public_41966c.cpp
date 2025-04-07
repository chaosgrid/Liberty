#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41949c);
CLANG_FORWARD_PROC_SYMBOL(public_41966c);

PROC_DECLARE(0x41966c, internal_41966c, public_41966c);
extern "C" NAKED register_t __cdecl internal_41966c()
{
    __asm
    {
        push 0x30000
        push 0x10000
        call public_41949c
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x41966c)
    }
}
