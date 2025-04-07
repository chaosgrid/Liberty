#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4185ac);
CLANG_FORWARD_PROC_SYMBOL(public_4185b2);

PROC_DECLARE(0x40b5f0, internal_40b5f0, public_40b5f0);
extern "C" NAKED register_t __cdecl internal_40b5f0()
{
    __asm
    {
        call public_4185b2
        push 0
        call public_4185ac
        add esp, 4
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x40b5f0)
    }
}
