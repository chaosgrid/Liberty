#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f18d20);
CLANG_FORWARD_PROC_SYMBOL(public_6f229e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f229f8 _public_6f229f8

PROC_DECLARE(0x6f229e0, internal_6f229e0, public_6f229e0);
extern "C" NAKED register_t __cdecl internal_6f229e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f18d20
        test byte ptr ss : [esp+8], 1
        je public_6f229f8
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f229f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f229e0)
    }
}

#undef public_6f229f8
