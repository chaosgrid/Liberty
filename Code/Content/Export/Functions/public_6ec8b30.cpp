#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5cf60);

PROC_DECLARE(0x6ec8b30, internal_6ec8b30, public_6ec8b30);
extern "C" NAKED register_t __cdecl internal_6ec8b30()
{
    __asm
    {
        xor eax, eax
        mov al, byte ptr ds : [ecx+0xC]
        push eax
        call public_6f5cf60
        add esp, 4
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ec8b30)
    }
}
