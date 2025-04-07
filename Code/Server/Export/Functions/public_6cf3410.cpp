#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf3410);
CLANG_FORWARD_PROC_SYMBOL(public_6cf3440);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cf342e _public_6cf342e

PROC_DECLARE(0x6cf3410, internal_6cf3410, public_6cf3410);
extern "C" NAKED register_t __cdecl internal_6cf3410()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6cf3440
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_6cf342e
        push eax
        call public_6d5ffb0
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_6cf342e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cf3410)
    }
}

#undef public_6cf342e
