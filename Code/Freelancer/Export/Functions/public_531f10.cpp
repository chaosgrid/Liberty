#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531f30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_531f28 _public_531f28

PROC_DECLARE(0x531f10, internal_531f10, public_531f10);
extern "C" NAKED register_t __cdecl internal_531f10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_531f30
        test byte ptr ss : [esp+8], 1
        je public_531f28
        push esi
        call public_5b7e1d
        add esp, 4
        public_531f28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x531f10)
    }
}

#undef public_531f28
