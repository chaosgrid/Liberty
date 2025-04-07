#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6710);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce66fe _public_6ce66fe

PROC_DECLARE(0x6ce66e0, internal_6ce66e0, public_6ce66e0);
extern "C" NAKED register_t __cdecl internal_6ce66e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ce6710
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_6ce66fe
        push eax
        call public_6d5ffb0
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_6ce66fe : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ce66e0)
    }
}

#undef public_6ce66fe
