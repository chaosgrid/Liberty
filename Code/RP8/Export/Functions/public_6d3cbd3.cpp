#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3cbd3, internal_6d3cbd3, public_6d3cbd3);
extern "C" NAKED register_t __cdecl internal_6d3cbd3()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 1
        call public_6d404a2
        pop ebp
        jmp dword ptr ds : [public_6d6ca7c]
        UNREACHABLE_TRAP(0x6d3cbd3)
    }
}
