#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53e4e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_53e4ce _public_53e4ce

PROC_DECLARE(0x53e4b0, internal_53e4b0, public_53e4b0);
extern "C" NAKED register_t __cdecl internal_53e4b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_53e4e0
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_53e4ce
        push eax
        call public_5b7e1d
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_53e4ce : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x53e4b0)
    }
}

#undef public_53e4ce
