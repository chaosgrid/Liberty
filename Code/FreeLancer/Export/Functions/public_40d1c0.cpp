#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d1e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_40d1d8 _public_40d1d8

PROC_DECLARE(0x40d1c0, internal_40d1c0, public_40d1c0);
extern "C" NAKED register_t __cdecl internal_40d1c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_40d1e0
        test byte ptr ss : [esp+8], 1
        je public_40d1d8
        push esi
        call public_5b7e1d
        add esp, 4
        public_40d1d8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40d1c0)
    }
}

#undef public_40d1d8
