#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b740);
CLANG_FORWARD_PROC_SYMBOL(public_6f554c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55530);
CLANG_FORWARD_PROC_SYMBOL(public_6f56b70);

PROC_DECLARE(0x6f56b70, internal_6f56b70, public_6f56b70);
extern "C" NAKED register_t __cdecl internal_6f56b70()
{
    __asm
    {
        call public_6f554c0
        push eax
        call public_6f55530
        push eax
        call public_6f4b740
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f56b70)
    }
}
