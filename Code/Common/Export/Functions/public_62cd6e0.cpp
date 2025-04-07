#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cd700);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62cd6f8 _public_62cd6f8

PROC_DECLARE(0x62cd6e0, internal_62cd6e0, public_62cd6e0);
extern "C" NAKED register_t __cdecl internal_62cd6e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62cd700
        test byte ptr ss : [esp+8], 1
        je public_62cd6f8
        push esi
        call public_6391d5a
        add esp, 4
        public_62cd6f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62cd6e0)
    }
}

#undef public_62cd6f8
