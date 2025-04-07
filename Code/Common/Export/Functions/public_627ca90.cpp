#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627ca90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627caa3 _public_627caa3

PROC_DECLARE(0x627ca90, internal_627ca90, public_627ca90);
extern "C" NAKED register_t __cdecl internal_627ca90()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        je public_627caa3
        push esi
        call public_6391d5a
        add esp, 4
        public_627caa3 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x627ca90)
    }
}

#undef public_627caa3
