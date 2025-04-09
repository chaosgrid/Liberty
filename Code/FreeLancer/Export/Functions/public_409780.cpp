#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4097a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_409798 _public_409798

PROC_DECLARE(0x409780, internal_409780, public_409780);
extern "C" NAKED register_t __cdecl internal_409780()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4097a0
        test byte ptr ss : [esp+8], 1
        je public_409798
        push esi
        call public_5b7e1d
        add esp, 4
        public_409798 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x409780)
    }
}

#undef public_409798
