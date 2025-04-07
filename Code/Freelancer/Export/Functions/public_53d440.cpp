#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53d470);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_53d45e _public_53d45e

PROC_DECLARE(0x53d440, internal_53d440, public_53d440);
extern "C" NAKED register_t __cdecl internal_53d440()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_53d470
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_53d45e
        push eax
        call public_5b7e1d
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_53d45e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x53d440)
    }
}

#undef public_53d45e
