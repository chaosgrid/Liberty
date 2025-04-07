#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bcb0);
CLANG_FORWARD_PROC_SYMBOL(public_63415b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63415c8 _public_63415c8

PROC_DECLARE(0x63415b0, internal_63415b0, public_63415b0);
extern "C" NAKED register_t __cdecl internal_63415b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_633bcb0
        test byte ptr ss : [esp+8], 1
        je public_63415c8
        push esi
        call public_6391d5a
        add esp, 4
        public_63415c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63415b0)
    }
}

#undef public_63415c8
