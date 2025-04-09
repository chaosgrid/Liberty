#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45abb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_45aba8 _public_45aba8

PROC_DECLARE(0x45ab90, internal_45ab90, public_45ab90);
extern "C" NAKED register_t __cdecl internal_45ab90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_45abb0
        test byte ptr ss : [esp+8], 1
        je public_45aba8
        push esi
        call public_5b7e1d
        add esp, 4
        public_45aba8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x45ab90)
    }
}

#undef public_45aba8
