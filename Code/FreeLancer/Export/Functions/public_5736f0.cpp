#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5736f0);
CLANG_FORWARD_PROC_SYMBOL(public_573710);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_573708 _public_573708

PROC_DECLARE(0x5736f0, internal_5736f0, public_5736f0);
extern "C" NAKED register_t __cdecl internal_5736f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_573710
        test byte ptr ss : [esp+8], 1
        je public_573708
        push esi
        call public_5b7e1d
        add esp, 4
        public_573708 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5736f0)
    }
}

#undef public_573708
