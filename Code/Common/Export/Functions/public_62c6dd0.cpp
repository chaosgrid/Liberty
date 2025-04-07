#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c6df0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62c6de8 _public_62c6de8

PROC_DECLARE(0x62c6dd0, internal_62c6dd0, public_62c6dd0);
extern "C" NAKED register_t __cdecl internal_62c6dd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62c6df0
        test byte ptr ss : [esp+8], 1
        je public_62c6de8
        push esi
        call public_6391d5a
        add esp, 4
        public_62c6de8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c6dd0)
    }
}

#undef public_62c6de8
