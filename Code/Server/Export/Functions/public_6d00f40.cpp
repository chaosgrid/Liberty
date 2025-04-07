#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00f70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d00f5e _public_6d00f5e

PROC_DECLARE(0x6d00f40, internal_6d00f40, public_6d00f40);
extern "C" NAKED register_t __cdecl internal_6d00f40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d00f70
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_6d00f5e
        push eax
        call public_6d5ffb0
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_6d00f5e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d00f40)
    }
}

#undef public_6d00f5e
