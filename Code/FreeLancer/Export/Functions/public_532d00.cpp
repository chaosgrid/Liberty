#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_532d40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_532d1e _public_532d1e

PROC_DECLARE(0x532d00, internal_532d00, public_532d00);
extern "C" NAKED register_t __cdecl internal_532d00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_532d40
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_532d1e
        push eax
        call public_5b7e1d
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_532d1e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x532d00)
    }
}

#undef public_532d1e
