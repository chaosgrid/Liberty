#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285a80);
CLANG_FORWARD_PROC_SYMBOL(public_6285aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6285a98 _public_6285a98

PROC_DECLARE(0x6285a80, internal_6285a80, public_6285a80);
extern "C" NAKED register_t __cdecl internal_6285a80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6285aa0
        test byte ptr ss : [esp+8], 1
        je public_6285a98
        push esi
        call public_6391d5a
        add esp, 4
        public_6285a98 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6285a80)
    }
}

#undef public_6285a98
