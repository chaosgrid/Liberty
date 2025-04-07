#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_583c30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_583b88 _public_583b88

PROC_DECLARE(0x583b70, internal_583b70, public_583b70);
extern "C" NAKED register_t __cdecl internal_583b70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_583c30
        test byte ptr ss : [esp+8], 1
        je public_583b88
        push esi
        call public_5b7e1d
        add esp, 4
        public_583b88 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x583b70)
    }
}

#undef public_583b88
