#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5a820);

PROC_DECLARE(0x6ece7d0, internal_6ece7d0, public_6ece7d0);
extern "C" NAKED register_t __cdecl internal_6ece7d0()
{
    __asm
    {
        xor eax, eax
        mov al, byte ptr ds : [ecx+0xC]
        push eax
        call public_6f5a820
        add esp, 4
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ece7d0)
    }
}
