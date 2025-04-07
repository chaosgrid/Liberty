#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f05990);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f05988 _public_6f05988

PROC_DECLARE(0x6f05970, internal_6f05970, public_6f05970);
extern "C" NAKED register_t __cdecl internal_6f05970()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f05990
        test byte ptr ss : [esp+8], 1
        je public_6f05988
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f05988 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f05970)
    }
}

#undef public_6f05988
