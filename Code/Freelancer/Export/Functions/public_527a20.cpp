#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_522480);
CLANG_FORWARD_PROC_SYMBOL(public_527a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_527a38 _public_527a38

PROC_DECLARE(0x527a20, internal_527a20, public_527a20);
extern "C" NAKED register_t __cdecl internal_527a20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_522480
        test byte ptr ss : [esp+8], 1
        je public_527a38
        push esi
        call public_5b7e1d
        add esp, 4
        public_527a38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x527a20)
    }
}

#undef public_527a38
