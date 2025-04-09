#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58ca00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_58c9f8 _public_58c9f8

PROC_DECLARE(0x58c9e0, internal_58c9e0, public_58c9e0);
extern "C" NAKED register_t __cdecl internal_58c9e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_58ca00
        test byte ptr ss : [esp+8], 1
        je public_58c9f8
        push esi
        call public_5b7e1d
        add esp, 4
        public_58c9f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x58c9e0)
    }
}

#undef public_58c9f8
