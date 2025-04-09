#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5594a8 _public_5594a8

PROC_DECLARE(0x559490, internal_559490, public_559490);
extern "C" NAKED register_t __cdecl internal_559490()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5594b0
        test byte ptr ss : [esp+8], 1
        je public_5594a8
        push esi
        call public_5b7e1d
        add esp, 4
        public_5594a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x559490)
    }
}

#undef public_5594a8
