#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40dd70);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40dd68 _public_40dd68

PROC_DECLARE(0x40dd50, internal_40dd50, public_40dd50);
extern "C" NAKED register_t __cdecl internal_40dd50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_40dd70
        test byte ptr ss : [esp+8], 1
        je public_40dd68
        push esi
        call public_418978
        add esp, 4
        public_40dd68 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40dd50)
    }
}

#undef public_40dd68
