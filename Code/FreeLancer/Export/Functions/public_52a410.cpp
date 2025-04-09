#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52a250);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_52a428 _public_52a428

PROC_DECLARE(0x52a410, internal_52a410, public_52a410);
extern "C" NAKED register_t __cdecl internal_52a410()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_52a250
        test byte ptr ss : [esp+8], 1
        je public_52a428
        push esi
        call public_5b7e1d
        add esp, 4
        public_52a428 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52a410)
    }
}

#undef public_52a428
