#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316470);
CLANG_FORWARD_PROC_SYMBOL(public_631a6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631a6f8 _public_631a6f8

PROC_DECLARE(0x631a6e0, internal_631a6e0, public_631a6e0);
extern "C" NAKED register_t __cdecl internal_631a6e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6316470
        test byte ptr ss : [esp+8], 1
        je public_631a6f8
        push esi
        call public_6391d5a
        add esp, 4
        public_631a6f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x631a6e0)
    }
}

#undef public_631a6f8
