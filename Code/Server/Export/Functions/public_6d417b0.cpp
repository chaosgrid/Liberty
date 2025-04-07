#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3cd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d417b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d417c8 _public_6d417c8

PROC_DECLARE(0x6d417b0, internal_6d417b0, public_6d417b0);
extern "C" NAKED register_t __cdecl internal_6d417b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d3cd20
        test byte ptr ss : [esp+8], 1
        je public_6d417c8
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d417c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d417b0)
    }
}

#undef public_6d417c8
