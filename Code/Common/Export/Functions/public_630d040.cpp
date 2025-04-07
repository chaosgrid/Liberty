#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630d05a _public_630d05a
#define public_630d063 _public_630d063

PROC_DECLARE(0x630d040, internal_630d040, public_630d040);
extern "C" NAKED register_t __cdecl internal_630d040()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_63fcf68]
        test esi, esi
        je public_630d063
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_630d05a
        push eax
        call public_6391d5a
        add esp, 4
        public_630d05a : nop
        push esi
        call public_6391d5a
        add esp, 4
        public_630d063 : nop
        mov dword ptr ds : [public_63fcf68], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x630d040)
    }
}

#undef public_630d05a
#undef public_630d063
