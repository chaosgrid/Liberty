#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552c50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_552c48 _public_552c48

PROC_DECLARE(0x552c30, internal_552c30, public_552c30);
extern "C" NAKED register_t __cdecl internal_552c30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_552c50
        test byte ptr ss : [esp+8], 1
        je public_552c48
        push esi
        call public_5b7e1d
        add esp, 4
        public_552c48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x552c30)
    }
}

#undef public_552c48
