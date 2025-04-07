#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee9aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ee99c8 _public_6ee99c8

PROC_DECLARE(0x6ee99b0, internal_6ee99b0, public_6ee99b0);
extern "C" NAKED register_t __cdecl internal_6ee99b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ee9aa0
        test byte ptr ss : [esp+8], 1
        je public_6ee99c8
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ee99c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ee99b0)
    }
}

#undef public_6ee99c8
