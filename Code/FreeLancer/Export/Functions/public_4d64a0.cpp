#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d64a0);
CLANG_FORWARD_PROC_SYMBOL(public_4d64c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4d64b8 _public_4d64b8

PROC_DECLARE(0x4d64a0, internal_4d64a0, public_4d64a0);
extern "C" NAKED register_t __cdecl internal_4d64a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4d64c0
        test byte ptr ss : [esp+8], 1
        je public_4d64b8
        push esi
        call public_5b7e1d
        add esp, 4
        public_4d64b8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4d64a0)
    }
}

#undef public_4d64b8
