#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634dd60);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634dd58 _public_634dd58

PROC_DECLARE(0x634dd40, internal_634dd40, public_634dd40);
extern "C" NAKED register_t __cdecl internal_634dd40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_634dd60
        test byte ptr ss : [esp+8], 1
        je public_634dd58
        push esi
        call public_6391d5a
        add esp, 4
        public_634dd58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634dd40)
    }
}

#undef public_634dd58
