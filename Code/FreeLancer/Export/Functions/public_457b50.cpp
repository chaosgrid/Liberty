#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457b70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_457b68 _public_457b68

PROC_DECLARE(0x457b50, internal_457b50, public_457b50);
extern "C" NAKED register_t __cdecl internal_457b50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_457b70
        test byte ptr ss : [esp+8], 1
        je public_457b68
        push esi
        call public_5b7e1d
        add esp, 4
        public_457b68 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x457b50)
    }
}

#undef public_457b68
