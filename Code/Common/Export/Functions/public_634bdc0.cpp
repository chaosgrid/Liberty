#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634bdd9 _public_634bdd9

PROC_DECLARE(0x634bdc0, internal_634bdc0, public_634bdc0);
extern "C" NAKED register_t __cdecl internal_634bdc0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_63a551c
        je public_634bdd9
        push esi
        call public_6391d5a
        add esp, 4
        public_634bdd9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634bdc0)
    }
}

#undef public_634bdd9
