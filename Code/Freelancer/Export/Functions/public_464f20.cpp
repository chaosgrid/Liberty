#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_464f40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_464f38 _public_464f38

PROC_DECLARE(0x464f20, internal_464f20, public_464f20);
extern "C" NAKED register_t __cdecl internal_464f20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_464f40
        test byte ptr ss : [esp+8], 1
        je public_464f38
        push esi
        call public_5b7e1d
        add esp, 4
        public_464f38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x464f20)
    }
}

#undef public_464f38
