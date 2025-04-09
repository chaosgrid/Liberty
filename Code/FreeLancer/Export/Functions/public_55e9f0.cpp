#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55ea10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_55ea08 _public_55ea08

PROC_DECLARE(0x55e9f0, internal_55e9f0, public_55e9f0);
extern "C" NAKED register_t __cdecl internal_55e9f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_55ea10
        test byte ptr ss : [esp+8], 1
        je public_55ea08
        push esi
        call public_5b7e1d
        add esp, 4
        public_55ea08 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x55e9f0)
    }
}

#undef public_55ea08
