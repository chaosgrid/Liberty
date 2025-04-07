#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6341590);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63415a8 _public_63415a8

PROC_DECLARE(0x6341590, internal_6341590, public_6341590);
extern "C" NAKED register_t __cdecl internal_6341590()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_633bbb0
        test byte ptr ss : [esp+8], 1
        je public_63415a8
        push esi
        call public_6391d5a
        add esp, 4
        public_63415a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6341590)
    }
}

#undef public_63415a8
