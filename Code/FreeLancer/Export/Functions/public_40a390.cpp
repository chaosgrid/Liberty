#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40aa80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_40a3a8 _public_40a3a8

PROC_DECLARE(0x40a390, internal_40a390, public_40a390);
extern "C" NAKED register_t __cdecl internal_40a390()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_40aa80
        test byte ptr ss : [esp+8], 1
        je public_40a3a8
        push esi
        call public_5b7e1d
        add esp, 4
        public_40a3a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40a390)
    }
}

#undef public_40a3a8
