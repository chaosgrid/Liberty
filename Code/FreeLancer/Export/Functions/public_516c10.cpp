#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_516bb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_516c28 _public_516c28

PROC_DECLARE(0x516c10, internal_516c10, public_516c10);
extern "C" NAKED register_t __cdecl internal_516c10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_516bb0
        test byte ptr ss : [esp+8], 1
        je public_516c28
        push esi
        call public_5b7e1d
        add esp, 4
        public_516c28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x516c10)
    }
}

#undef public_516c28
