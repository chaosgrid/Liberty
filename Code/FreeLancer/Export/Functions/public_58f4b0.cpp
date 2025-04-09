#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58f4d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_58f4c8 _public_58f4c8

PROC_DECLARE(0x58f4b0, internal_58f4b0, public_58f4b0);
extern "C" NAKED register_t __cdecl internal_58f4b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_58f4d0
        test byte ptr ss : [esp+8], 1
        je public_58f4c8
        push esi
        call public_5b7e1d
        add esp, 4
        public_58f4c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x58f4b0)
    }
}

#undef public_58f4c8
