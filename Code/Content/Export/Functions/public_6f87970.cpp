#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f87970);
CLANG_FORWARD_PROC_SYMBOL(public_6f87990);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f87988 _public_6f87988

PROC_DECLARE(0x6f87970, internal_6f87970, public_6f87970);
extern "C" NAKED register_t __cdecl internal_6f87970()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f87990
        test byte ptr ss : [esp+8], 1
        je public_6f87988
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f87988 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f87970)
    }
}

#undef public_6f87988
