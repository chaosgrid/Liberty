#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_506f00);
CLANG_FORWARD_PROC_SYMBOL(public_5501e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_506f18 _public_506f18

PROC_DECLARE(0x506f00, internal_506f00, public_506f00);
extern "C" NAKED register_t __cdecl internal_506f00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5501e0
        test byte ptr ss : [esp+8], 1
        je public_506f18
        push esi
        call public_5b7e1d
        add esp, 4
        public_506f18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x506f00)
    }
}

#undef public_506f18
