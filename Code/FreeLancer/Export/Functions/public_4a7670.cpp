#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_42d6f0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7670);

PROC_DECLARE(0x4a7670, internal_4a7670, public_4a7670);
extern "C" NAKED register_t __cdecl internal_4a7670()
{
    __asm
    {
        push ebx
        push 1
        call public_42d6f0
        call public_41dd90
        push 1
        mov bl, al
        call public_41dda0
        add esp, 8
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4a7670)
    }
}
