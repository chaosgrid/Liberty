#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d5d20);
CLANG_FORWARD_PROC_SYMBOL(public_4d5d40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4d5d38 _public_4d5d38

PROC_DECLARE(0x4d5d20, internal_4d5d20, public_4d5d20);
extern "C" NAKED register_t __cdecl internal_4d5d20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4d5d40
        test byte ptr ss : [esp+8], 1
        je public_4d5d38
        push esi
        call public_5b7e1d
        add esp, 4
        public_4d5d38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4d5d20)
    }
}

#undef public_4d5d38
