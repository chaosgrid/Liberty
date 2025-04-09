#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53f1e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_52e15e _public_52e15e

PROC_DECLARE(0x52e140, internal_52e140, public_52e140);
extern "C" NAKED register_t __cdecl internal_52e140()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_53f1e0
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_52e15e
        push eax
        call public_5b7e1d
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_52e15e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52e140)
    }
}

#undef public_52e15e
