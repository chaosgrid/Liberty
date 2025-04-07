#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d02bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d02bae _public_6d02bae

PROC_DECLARE(0x6d02b90, internal_6d02b90, public_6d02b90);
extern "C" NAKED register_t __cdecl internal_6d02b90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d02bc0
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_6d02bae
        push eax
        call public_6d5ffb0
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_6d02bae : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d02b90)
    }
}

#undef public_6d02bae
