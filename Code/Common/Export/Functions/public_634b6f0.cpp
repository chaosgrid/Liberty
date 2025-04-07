#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634b710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634b708 _public_634b708

PROC_DECLARE(0x634b6f0, internal_634b6f0, public_634b6f0);
extern "C" NAKED register_t __cdecl internal_634b6f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_634b710
        test byte ptr ss : [esp+8], 1
        je public_634b708
        push esi
        call public_6391d5a
        add esp, 4
        public_634b708 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634b6f0)
    }
}

#undef public_634b708
