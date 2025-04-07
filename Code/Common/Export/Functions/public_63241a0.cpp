#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63221f0);
CLANG_FORWARD_PROC_SYMBOL(public_63241a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63241b8 _public_63241b8

PROC_DECLARE(0x63241a0, internal_63241a0, public_63241a0);
extern "C" NAKED register_t __cdecl internal_63241a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_63221f0
        test byte ptr ss : [esp+8], 1
        je public_63241b8
        push esi
        call public_6391d5a
        add esp, 4
        public_63241b8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63241a0)
    }
}

#undef public_63241b8
