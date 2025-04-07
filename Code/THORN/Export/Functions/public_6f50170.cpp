#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b370);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);

PROC_DECLARE(0x6f50170, internal_6f50170, public_6f50170);
extern "C" NAKED register_t __cdecl internal_6f50170()
{
    __asm
    {
        push 0
        push 1
        call public_6f4f5e0
        push eax
        call public_6f4b370
        push eax
        call public_6f4b900
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f50170)
    }
}
