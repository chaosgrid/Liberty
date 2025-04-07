#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee9630);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ee9688 _public_6ee9688

PROC_DECLARE(0x6ee9670, internal_6ee9670, public_6ee9670);
extern "C" NAKED register_t __cdecl internal_6ee9670()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ee9630
        test byte ptr ss : [esp+8], 1
        je public_6ee9688
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ee9688 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ee9670)
    }
}

#undef public_6ee9688
