#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5af660);
CLANG_FORWARD_PROC_SYMBOL(public_5af7f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5af678 _public_5af678

PROC_DECLARE(0x5af660, internal_5af660, public_5af660);
extern "C" NAKED register_t __cdecl internal_5af660()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5af7f0
        test byte ptr ss : [esp+8], 1
        je public_5af678
        push esi
        call public_5b7e1d
        add esp, 4
        public_5af678 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5af660)
    }
}

#undef public_5af678
