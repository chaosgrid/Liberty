#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428fc0);
CLANG_FORWARD_PROC_SYMBOL(public_527b20);

#define public_527b1a _public_527b1a

PROC_DECLARE(0x527b00, internal_527b00, public_527b00);
extern "C" NAKED register_t __cdecl internal_527b00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_527b20
        test byte ptr ss : [esp+8], 1
        je public_527b1a
        push 0x68
        push esi
        call public_428fc0
        add esp, 8
        public_527b1a : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x527b00)
    }
}

#undef public_527b1a
