#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b270);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f730);

PROC_DECLARE(0x6f50270, internal_6f50270, public_6f50270);
extern "C" NAKED register_t __cdecl internal_6f50270()
{
    __asm
    {
        push 1
        call public_6f4f730
        push eax
        call public_6f4b900
        push 2
        call public_6f4f730
        push eax
        call public_6f4b900
        call public_6f4b270
        push eax
        call public_6f4b900
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f50270)
    }
}
