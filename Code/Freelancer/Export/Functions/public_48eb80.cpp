#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48dd40);
CLANG_FORWARD_PROC_SYMBOL(public_48eb80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_48eb98 _public_48eb98

PROC_DECLARE(0x48eb80, internal_48eb80, public_48eb80);
extern "C" NAKED register_t __cdecl internal_48eb80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_48dd40
        test byte ptr ss : [esp+8], 1
        je public_48eb98
        push esi
        call public_5b7e1d
        add esp, 4
        public_48eb98 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x48eb80)
    }
}

#undef public_48eb98
