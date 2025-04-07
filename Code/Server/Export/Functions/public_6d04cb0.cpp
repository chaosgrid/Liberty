#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d04cce _public_6d04cce

PROC_DECLARE(0x6d04cb0, internal_6d04cb0, public_6d04cb0);
extern "C" NAKED register_t __cdecl internal_6d04cb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d04ce0
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_6d04cce
        push eax
        call public_6d5ffb0
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_6d04cce : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d04cb0)
    }
}

#undef public_6d04cce
