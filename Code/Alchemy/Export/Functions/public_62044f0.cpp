#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204520);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6204508 _public_6204508

PROC_DECLARE(0x62044f0, internal_62044f0, public_62044f0);
extern "C" NAKED register_t __cdecl internal_62044f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6204520
        test byte ptr ss : [esp+8], 1
        je public_6204508
        push esi
        call public_62460e0
        add esp, 4
        public_6204508 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62044f0)
    }
}

#undef public_6204508
