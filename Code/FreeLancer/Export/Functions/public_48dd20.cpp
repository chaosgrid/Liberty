#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_48dd38 _public_48dd38

PROC_DECLARE(0x48dd20, internal_48dd20, public_48dd20);
extern "C" NAKED register_t __cdecl internal_48dd20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_59ef20
        test byte ptr ss : [esp+8], 1
        je public_48dd38
        push esi
        call public_5b7e1d
        add esp, 4
        public_48dd38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x48dd20)
    }
}

#undef public_48dd38
