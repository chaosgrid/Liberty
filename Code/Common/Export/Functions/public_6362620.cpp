#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6362640);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6362638 _public_6362638

PROC_DECLARE(0x6362620, internal_6362620, public_6362620);
extern "C" NAKED register_t __cdecl internal_6362620()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6362640
        test byte ptr ss : [esp+8], 1
        je public_6362638
        push esi
        call public_6391d5a
        add esp, 4
        public_6362638 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6362620)
    }
}

#undef public_6362638
