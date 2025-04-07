#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621ed80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_621ee28 _public_621ee28

PROC_DECLARE(0x621ee10, internal_621ee10, public_621ee10);
extern "C" NAKED register_t __cdecl internal_621ee10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_621ed80
        test byte ptr ss : [esp+8], 1
        je public_621ee28
        push esi
        call public_62460e0
        add esp, 4
        public_621ee28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x621ee10)
    }
}

#undef public_621ee28
