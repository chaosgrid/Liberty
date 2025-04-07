#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c95e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62c95d8 _public_62c95d8

PROC_DECLARE(0x62c95c0, internal_62c95c0, public_62c95c0);
extern "C" NAKED register_t __cdecl internal_62c95c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62c95e0
        test byte ptr ss : [esp+8], 1
        je public_62c95d8
        push esi
        call public_6391d5a
        add esp, 4
        public_62c95d8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c95c0)
    }
}

#undef public_62c95d8
