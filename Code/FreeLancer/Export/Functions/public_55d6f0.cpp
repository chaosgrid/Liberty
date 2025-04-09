#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55d710);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_55d708 _public_55d708

PROC_DECLARE(0x55d6f0, internal_55d6f0, public_55d6f0);
extern "C" NAKED register_t __cdecl internal_55d6f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_55d710
        test byte ptr ss : [esp+8], 1
        je public_55d708
        push esi
        call public_5b7e1d
        add esp, 4
        public_55d708 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x55d6f0)
    }
}

#undef public_55d708
