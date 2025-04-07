#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712830);
CLANG_FORWARD_PROC_SYMBOL(public_6712db0);
CLANG_FORWARD_PROC_SYMBOL(public_6714550);

PROC_DECLARE(0x6712e70, internal_6712e70, public_6712e70);
extern "C" NAKED register_t __cdecl internal_6712e70()
{
    __asm
    {
        push esi
        push 1
        mov esi, ecx
        call public_6714550
        add esp, 4
        mov ecx, esi
        call public_6712830
        mov ecx, esi
        pop esi
        jmp public_6712db0
        UNREACHABLE_TRAP(0x6712e70)
    }
}
