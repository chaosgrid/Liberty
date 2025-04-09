#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_471790);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_471788 _public_471788

PROC_DECLARE(0x471770, internal_471770, public_471770);
extern "C" NAKED register_t __cdecl internal_471770()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_471790
        test byte ptr ss : [esp+8], 1
        je public_471788
        push esi
        call public_5b7e1d
        add esp, 4
        public_471788 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x471770)
    }
}

#undef public_471788
