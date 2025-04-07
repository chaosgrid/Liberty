#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279d70);
CLANG_FORWARD_PROC_SYMBOL(public_6279d90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6279d88 _public_6279d88

PROC_DECLARE(0x6279d70, internal_6279d70, public_6279d70);
extern "C" NAKED register_t __cdecl internal_6279d70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6279d90
        test byte ptr ss : [esp+8], 1
        je public_6279d88
        push esi
        call public_6391d5a
        add esp, 4
        public_6279d88 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6279d70)
    }
}

#undef public_6279d88
