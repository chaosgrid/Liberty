#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5394b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_53949e _public_53949e

PROC_DECLARE(0x539480, internal_539480, public_539480);
extern "C" NAKED register_t __cdecl internal_539480()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5394b0
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_53949e
        push eax
        call public_5b7e1d
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_53949e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x539480)
    }
}

#undef public_53949e
