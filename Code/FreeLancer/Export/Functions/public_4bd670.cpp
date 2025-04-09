#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bd690);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4bd688 _public_4bd688

PROC_DECLARE(0x4bd670, internal_4bd670, public_4bd670);
extern "C" NAKED register_t __cdecl internal_4bd670()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4bd690
        test byte ptr ss : [esp+8], 1
        je public_4bd688
        push esi
        call public_5b7e1d
        add esp, 4
        public_4bd688 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4bd670)
    }
}

#undef public_4bd688
