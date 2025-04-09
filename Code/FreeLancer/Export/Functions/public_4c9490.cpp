#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c9490);
CLANG_FORWARD_PROC_SYMBOL(public_4c94b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c94a8 _public_4c94a8

PROC_DECLARE(0x4c9490, internal_4c9490, public_4c9490);
extern "C" NAKED register_t __cdecl internal_4c9490()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4c94b0
        test byte ptr ss : [esp+8], 1
        je public_4c94a8
        push esi
        call public_5b7e1d
        add esp, 4
        public_4c94a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4c9490)
    }
}

#undef public_4c94a8
