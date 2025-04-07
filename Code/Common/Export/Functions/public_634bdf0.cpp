#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bde0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634be08 _public_634be08

PROC_DECLARE(0x634bdf0, internal_634bdf0, public_634bdf0);
extern "C" NAKED register_t __cdecl internal_634bdf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_634bde0
        test byte ptr ss : [esp+8], 1
        je public_634be08
        push esi
        call public_6391d5a
        add esp, 4
        public_634be08 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634bdf0)
    }
}

#undef public_634be08
