#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6311a90);
CLANG_FORWARD_PROC_SYMBOL(public_6312780);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6312798 _public_6312798

PROC_DECLARE(0x6312780, internal_6312780, public_6312780);
extern "C" NAKED register_t __cdecl internal_6312780()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6311a90
        test byte ptr ss : [esp+8], 1
        je public_6312798
        push esi
        call public_6391d5a
        add esp, 4
        public_6312798 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6312780)
    }
}

#undef public_6312798
