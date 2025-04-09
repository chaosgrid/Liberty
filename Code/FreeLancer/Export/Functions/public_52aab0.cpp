#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52aad0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_52aac8 _public_52aac8

PROC_DECLARE(0x52aab0, internal_52aab0, public_52aab0);
extern "C" NAKED register_t __cdecl internal_52aab0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_52aad0
        test byte ptr ss : [esp+8], 1
        je public_52aac8
        push esi
        call public_5b7e1d
        add esp, 4
        public_52aac8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52aab0)
    }
}

#undef public_52aac8
