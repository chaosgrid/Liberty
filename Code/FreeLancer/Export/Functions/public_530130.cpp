#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_530160);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_53014e _public_53014e

PROC_DECLARE(0x530130, internal_530130, public_530130);
extern "C" NAKED register_t __cdecl internal_530130()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_530160
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_53014e
        push eax
        call public_5b7e1d
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_53014e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x530130)
    }
}

#undef public_53014e
