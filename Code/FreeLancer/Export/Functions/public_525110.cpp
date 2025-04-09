#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_525140);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_52512e _public_52512e

PROC_DECLARE(0x525110, internal_525110, public_525110);
extern "C" NAKED register_t __cdecl internal_525110()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_525140
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_52512e
        push eax
        call public_5b7e1d
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_52512e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x525110)
    }
}

#undef public_52512e
