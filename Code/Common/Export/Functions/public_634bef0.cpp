#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bf10);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634bf08 _public_634bf08

PROC_DECLARE(0x634bef0, internal_634bef0, public_634bef0);
extern "C" NAKED register_t __cdecl internal_634bef0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_634bf10
        test byte ptr ss : [esp+8], 1
        je public_634bf08
        push esi
        call public_6391d5a
        add esp, 4
        public_634bf08 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634bef0)
    }
}

#undef public_634bf08
