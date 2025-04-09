#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52edc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_52edb8 _public_52edb8

PROC_DECLARE(0x52eda0, internal_52eda0, public_52eda0);
extern "C" NAKED register_t __cdecl internal_52eda0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_52edc0
        test byte ptr ss : [esp+8], 1
        je public_52edb8
        push esi
        call public_5b7e1d
        add esp, 4
        public_52edb8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52eda0)
    }
}

#undef public_52edb8
