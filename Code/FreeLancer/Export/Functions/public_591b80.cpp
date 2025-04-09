#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_591b80);
CLANG_FORWARD_PROC_SYMBOL(public_591ba0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_591b98 _public_591b98

PROC_DECLARE(0x591b80, internal_591b80, public_591b80);
extern "C" NAKED register_t __cdecl internal_591b80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_591ba0
        test byte ptr ss : [esp+8], 1
        je public_591b98
        push esi
        call public_5b7e1d
        add esp, 4
        public_591b98 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x591b80)
    }
}

#undef public_591b98
