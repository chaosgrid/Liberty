#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

PROC_DECLARE(0x6f501e0, internal_6f501e0, public_6f501e0);
extern "C" NAKED register_t __cdecl internal_6f501e0()
{
    __asm
    {
        push esi
        push 1
        call public_6f4f6d0
        mov esi, eax
        push esi
        call public_6f4b900
        push 2
        call public_6f4f660
        call public_6f57f16
        push eax
        call public_6f4b9f0
        push esi
        call public_6f4b900
        add esp, 0x14
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f501e0)
    }
}
