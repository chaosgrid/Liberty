#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634b6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634b6c8 _public_634b6c8

PROC_DECLARE(0x634b6b0, internal_634b6b0, public_634b6b0);
extern "C" NAKED register_t __cdecl internal_634b6b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_634b6a0
        test byte ptr ss : [esp+8], 1
        je public_634b6c8
        push esi
        call public_6391d5a
        add esp, 4
        public_634b6c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634b6b0)
    }
}

#undef public_634b6c8
