#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cee48e _public_6cee48e

PROC_DECLARE(0x6cee470, internal_6cee470, public_6cee470);
extern "C" NAKED register_t __cdecl internal_6cee470()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6cee4a0
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_6cee48e
        push eax
        call public_6d5ffb0
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_6cee48e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cee470)
    }
}

#undef public_6cee48e
