#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cec7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cec7d8 _public_6cec7d8

PROC_DECLARE(0x6cec7c0, internal_6cec7c0, public_6cec7c0);
extern "C" NAKED register_t __cdecl internal_6cec7c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6cec7e0
        test byte ptr ss : [esp+8], 1
        je public_6cec7d8
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6cec7d8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cec7c0)
    }
}

#undef public_6cec7d8
