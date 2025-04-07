#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9f4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa58a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6fa58b8 _public_6fa58b8

PROC_DECLARE(0x6fa58a0, internal_6fa58a0, public_6fa58a0);
extern "C" NAKED register_t __cdecl internal_6fa58a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f9f4a0
        test byte ptr ss : [esp+8], 1
        je public_6fa58b8
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6fa58b8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6fa58a0)
    }
}

#undef public_6fa58b8
