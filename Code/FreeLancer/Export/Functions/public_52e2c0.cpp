#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52e2e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_52e2d8 _public_52e2d8

PROC_DECLARE(0x52e2c0, internal_52e2c0, public_52e2c0);
extern "C" NAKED register_t __cdecl internal_52e2c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_52e2e0
        test byte ptr ss : [esp+8], 1
        je public_52e2d8
        push esi
        call public_5b7e1d
        add esp, 4
        public_52e2d8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52e2c0)
    }
}

#undef public_52e2d8
