#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457930);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_457928 _public_457928

PROC_DECLARE(0x457910, internal_457910, public_457910);
extern "C" NAKED register_t __cdecl internal_457910()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_457930
        test byte ptr ss : [esp+8], 1
        je public_457928
        push esi
        call public_5b7e1d
        add esp, 4
        public_457928 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x457910)
    }
}

#undef public_457928
