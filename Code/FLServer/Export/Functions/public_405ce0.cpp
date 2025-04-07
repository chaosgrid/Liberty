#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405ce0);
CLANG_FORWARD_PROC_SYMBOL(public_405d00);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_405cf8 _public_405cf8

PROC_DECLARE(0x405ce0, internal_405ce0, public_405ce0);
extern "C" NAKED register_t __cdecl internal_405ce0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_405d00
        test byte ptr ss : [esp+8], 1
        je public_405cf8
        push esi
        call public_418978
        add esp, 4
        public_405cf8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x405ce0)
    }
}

#undef public_405cf8
