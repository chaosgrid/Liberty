#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52caa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_52ca98 _public_52ca98

PROC_DECLARE(0x52ca80, internal_52ca80, public_52ca80);
extern "C" NAKED register_t __cdecl internal_52ca80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_52caa0
        test byte ptr ss : [esp+8], 1
        je public_52ca98
        push esi
        call public_5b7e1d
        add esp, 4
        public_52ca98 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52ca80)
    }
}

#undef public_52ca98
