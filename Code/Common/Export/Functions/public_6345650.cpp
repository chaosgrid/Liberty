#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63456b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6345668 _public_6345668

PROC_DECLARE(0x6345650, internal_6345650, public_6345650);
extern "C" NAKED register_t __cdecl internal_6345650()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_63456b0
        test byte ptr ss : [esp+8], 1
        je public_6345668
        push esi
        call public_6391d5a
        add esp, 4
        public_6345668 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6345650)
    }
}

#undef public_6345668
