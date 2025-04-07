#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55560);
CLANG_FORWARD_PROC_SYMBOL(public_6f55630);

PROC_DECLARE(0x6f55540, internal_6f55540, public_6f55540);
extern "C" NAKED register_t __cdecl internal_6f55540()
{
    __asm
    {
        push 2
        call public_6f55560
        push eax
        call public_6f55630
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f55540)
    }
}
