#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04c00);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d04bee _public_6d04bee

PROC_DECLARE(0x6d04bd0, internal_6d04bd0, public_6d04bd0);
extern "C" NAKED register_t __cdecl internal_6d04bd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d04c00
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_6d04bee
        push eax
        call public_6d5ffb0
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_6d04bee : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d04bd0)
    }
}

#undef public_6d04bee
