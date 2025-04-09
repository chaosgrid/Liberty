#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_532d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_54748e _public_54748e

PROC_DECLARE(0x547470, internal_547470, public_547470);
extern "C" NAKED register_t __cdecl internal_547470()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_532d30
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_54748e
        push eax
        call public_5b7e1d
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_54748e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x547470)
    }
}

#undef public_54748e
