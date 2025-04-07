#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b390);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);

PROC_DECLARE(0x6f50190, internal_6f50190, public_6f50190);
extern "C" NAKED register_t __cdecl internal_6f50190()
{
    __asm
    {
        push 0
        push 1
        call public_6f4f5e0
        push eax
        call public_6f4b390
        push eax
        call public_6f4b900
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f50190)
    }
}
