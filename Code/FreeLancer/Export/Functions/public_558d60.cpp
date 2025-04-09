#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a140);
CLANG_FORWARD_PROC_SYMBOL(public_41a3d0);
CLANG_FORWARD_PROC_SYMBOL(public_438c90);
CLANG_FORWARD_PROC_SYMBOL(public_558d60);

#define public_558d7c _public_558d7c

PROC_DECLARE(0x558d60, internal_558d60, public_558d60);
extern "C" NAKED register_t __cdecl internal_558d60()
{
    __asm
    {
        push esi
        call public_438c90
        mov esi, eax
        test esi, esi
        je public_558d7c
        call public_41a3d0
        push 0
        push esi
        call public_41a140
        add esp, 8
        public_558d7c : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x558d60)
    }
}

#undef public_558d7c
