#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_524ec0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_524eae _public_524eae

PROC_DECLARE(0x524e90, internal_524e90, public_524e90);
extern "C" NAKED register_t __cdecl internal_524e90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_524ec0
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_524eae
        push eax
        call public_5b7e1d
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_524eae : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x524e90)
    }
}

#undef public_524eae
