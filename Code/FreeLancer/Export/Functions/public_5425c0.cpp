#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5425f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5425de _public_5425de

PROC_DECLARE(0x5425c0, internal_5425c0, public_5425c0);
extern "C" NAKED register_t __cdecl internal_5425c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5425f0
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_5425de
        push eax
        call public_5b7e1d
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_5425de : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5425c0)
    }
}

#undef public_5425de
