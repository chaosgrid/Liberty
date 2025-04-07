#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634dca0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634dc98 _public_634dc98

PROC_DECLARE(0x634dc80, internal_634dc80, public_634dc80);
extern "C" NAKED register_t __cdecl internal_634dc80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_634dca0
        test byte ptr ss : [esp+8], 1
        je public_634dc98
        push esi
        call public_6391d5a
        add esp, 4
        public_634dc98 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634dc80)
    }
}

#undef public_634dc98
