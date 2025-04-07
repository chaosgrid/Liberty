#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b9800);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4b97f8 _public_4b97f8

PROC_DECLARE(0x4b97e0, internal_4b97e0, public_4b97e0);
extern "C" NAKED register_t __cdecl internal_4b97e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4b9800
        test byte ptr ss : [esp+8], 1
        je public_4b97f8
        push esi
        call public_5b7e1d
        add esp, 4
        public_4b97f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4b97e0)
    }
}

#undef public_4b97f8
