#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5a800);

PROC_DECLARE(0x6ecdb50, internal_6ecdb50, public_6ecdb50);
extern "C" NAKED register_t __cdecl internal_6ecdb50()
{
    __asm
    {
        xor eax, eax
        mov al, byte ptr ds : [ecx+0xC]
        push eax
        call public_6f5a800
        add esp, 4
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ecdb50)
    }
}
