#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42edb0);
CLANG_FORWARD_PROC_SYMBOL(public_430770);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_430788 _public_430788

PROC_DECLARE(0x430770, internal_430770, public_430770);
extern "C" NAKED register_t __cdecl internal_430770()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_42edb0
        test byte ptr ss : [esp+8], 1
        je public_430788
        push esi
        call public_5b7e1d
        add esp, 4
        public_430788 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x430770)
    }
}

#undef public_430788
