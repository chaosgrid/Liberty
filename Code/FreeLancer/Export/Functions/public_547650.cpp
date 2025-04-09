#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_547680);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_54766e _public_54766e

PROC_DECLARE(0x547650, internal_547650, public_547650);
extern "C" NAKED register_t __cdecl internal_547650()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_547680
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_54766e
        push eax
        call public_5b7e1d
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_54766e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x547650)
    }
}

#undef public_54766e
