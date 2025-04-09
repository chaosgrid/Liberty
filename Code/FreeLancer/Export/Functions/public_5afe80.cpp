#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5afe80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5afe93 _public_5afe93

PROC_DECLARE(0x5afe80, internal_5afe80, public_5afe80);
extern "C" NAKED register_t __cdecl internal_5afe80()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        je public_5afe93
        push esi
        call public_5b7e1d
        add esp, 4
        public_5afe93 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5afe80)
    }
}

#undef public_5afe93
