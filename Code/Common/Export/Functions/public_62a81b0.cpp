#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a5d70);
CLANG_FORWARD_PROC_SYMBOL(public_62a81b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a81c8 _public_62a81c8

PROC_DECLARE(0x62a81b0, internal_62a81b0, public_62a81b0);
extern "C" NAKED register_t __cdecl internal_62a81b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62a5d70
        test byte ptr ss : [esp+8], 1
        je public_62a81c8
        push esi
        call public_6391d5a
        add esp, 4
        public_62a81c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a81b0)
    }
}

#undef public_62a81c8
