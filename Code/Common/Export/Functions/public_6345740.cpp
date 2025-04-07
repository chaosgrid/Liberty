#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345790);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6345758 _public_6345758

PROC_DECLARE(0x6345740, internal_6345740, public_6345740);
extern "C" NAKED register_t __cdecl internal_6345740()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6345790
        test byte ptr ss : [esp+8], 1
        je public_6345758
        push esi
        call public_6391d5a
        add esp, 4
        public_6345758 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6345740)
    }
}

#undef public_6345758
