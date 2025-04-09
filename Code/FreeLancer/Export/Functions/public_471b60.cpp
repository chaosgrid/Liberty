#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_45a9f0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);

#define public_471b76 _public_471b76

PROC_DECLARE(0x471b60, internal_471b60, public_471b60);
extern "C" NAKED register_t __cdecl internal_471b60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_41dd90
        test al, al
        jne public_471b76
        push 1
        call public_41dda0
        add esp, 4
        public_471b76 : nop
        call public_45a9f0
        mov ecx, esi
        pop esi
        jmp public_5a0760
        UNREACHABLE_TRAP(0x471b60)
    }
}

#undef public_471b76
