#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf52d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cf52c8 _public_6cf52c8

PROC_DECLARE(0x6cf52b0, internal_6cf52b0, public_6cf52b0);
extern "C" NAKED register_t __cdecl internal_6cf52b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6cf52d0
        test byte ptr ss : [esp+8], 1
        je public_6cf52c8
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6cf52c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cf52b0)
    }
}

#undef public_6cf52c8
