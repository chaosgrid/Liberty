#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f730);

PROC_DECLARE(0x6f50110, internal_6f50110, public_6f50110);
extern "C" NAKED register_t __cdecl internal_6f50110()
{
    __asm
    {
        push esi
        push edi
        push 0
        push 1
        call public_6f4f5e0
        push 2
        mov edi, eax
        call public_6f4f730
        mov esi, eax
        push esi
        call public_6f4b900
        push edi
        call public_6f4b3b0
        push esi
        call public_6f4b900
        add esp, 0x18
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f50110)
    }
}
