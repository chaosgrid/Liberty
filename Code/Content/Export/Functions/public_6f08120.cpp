#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f08390);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f08138 _public_6f08138

PROC_DECLARE(0x6f08120, internal_6f08120, public_6f08120);
extern "C" NAKED register_t __cdecl internal_6f08120()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f08390
        test byte ptr ss : [esp+8], 1
        je public_6f08138
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f08138 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f08120)
    }
}

#undef public_6f08138
