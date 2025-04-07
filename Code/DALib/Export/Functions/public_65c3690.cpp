#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c2500);
CLANG_FORWARD_PROC_SYMBOL(public_65c3690);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c36a8 _public_65c36a8

PROC_DECLARE(0x65c3690, internal_65c3690, public_65c3690);
extern "C" NAKED register_t __cdecl internal_65c3690()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_65c2500
        test byte ptr ss : [esp+8], 1
        je public_65c36a8
        push esi
        call public_65c6a60
        add esp, 4
        public_65c36a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65c3690)
    }
}

#undef public_65c36a8
