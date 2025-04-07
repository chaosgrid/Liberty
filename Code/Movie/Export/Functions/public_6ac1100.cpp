#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1120);
CLANG_FORWARD_PROC_SYMBOL(public_6acf3d0);

#define public_6ac1118 _public_6ac1118

PROC_DECLARE(0x6ac1100, internal_6ac1100, public_6ac1100);
extern "C" NAKED register_t __cdecl internal_6ac1100()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ac1120
        test byte ptr ss : [esp+8], 1
        je public_6ac1118
        push esi
        call public_6acf3d0
        add esp, 4
        public_6ac1118 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ac1100)
    }
}

#undef public_6ac1118
