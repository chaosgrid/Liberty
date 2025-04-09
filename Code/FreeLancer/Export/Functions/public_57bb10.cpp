#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_57bb28 _public_57bb28

PROC_DECLARE(0x57bb10, internal_57bb10, public_57bb10);
extern "C" NAKED register_t __cdecl internal_57bb10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_57bbf0
        test byte ptr ss : [esp+8], 1
        je public_57bb28
        push esi
        call public_5b7e1d
        add esp, 4
        public_57bb28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x57bb10)
    }
}

#undef public_57bb28
