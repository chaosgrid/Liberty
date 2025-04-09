#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59cf50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_59cdf8 _public_59cdf8

PROC_DECLARE(0x59cde0, internal_59cde0, public_59cde0);
extern "C" NAKED register_t __cdecl internal_59cde0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_59cf50
        test byte ptr ss : [esp+8], 1
        je public_59cdf8
        push esi
        call public_5b7e1d
        add esp, 4
        public_59cdf8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x59cde0)
    }
}

#undef public_59cdf8
