#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad2fa6);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2fb8);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2fc3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad30f1);

PROC_DECLARE(0x6ad2fa6, internal_6ad2fa6, public_6ad2fa6);
extern "C" NAKED register_t __cdecl internal_6ad2fa6()
{
    __asm
    {
        call public_6ad30f1
        or eax, eax
        je public_6ad2fc3
        xor ch, ch
        cmp eax, 2
        je public_6ad2fb8
        not ch
        UNREACHABLE_TRAP(0x6ad2fa6)
    }
}
