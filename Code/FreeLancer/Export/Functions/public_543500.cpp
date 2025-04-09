#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5444a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_54351e _public_54351e

PROC_DECLARE(0x543500, internal_543500, public_543500);
extern "C" NAKED register_t __cdecl internal_543500()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5444a0
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_54351e
        push eax
        call public_5b7e1d
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_54351e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x543500)
    }
}

#undef public_54351e
