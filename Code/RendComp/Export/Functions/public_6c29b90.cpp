#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a970);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c29bae _public_6c29bae

PROC_DECLARE(0x6c29b90, internal_6c29b90, public_6c29b90);
extern "C" NAKED register_t __cdecl internal_6c29b90()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, 0xFFFFFFFF
        je public_6c29bae
        test esi, esi
        je public_6c29bae
        mov ecx, esi
        call public_6c2a970
        push esi
        call public_6c34ea0
        add esp, 4
        public_6c29bae : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c29b90)
    }
}

#undef public_6c29bae
