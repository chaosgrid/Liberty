#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ece490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ece488 _public_6ece488

PROC_DECLARE(0x6ece470, internal_6ece470, public_6ece470);
extern "C" NAKED register_t __cdecl internal_6ece470()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ece490
        test byte ptr ss : [esp+8], 1
        je public_6ece488
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ece488 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ece470)
    }
}

#undef public_6ece488
