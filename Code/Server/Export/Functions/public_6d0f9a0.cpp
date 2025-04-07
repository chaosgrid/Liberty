#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d0f9b3 _public_6d0f9b3

PROC_DECLARE(0x6d0f9a0, internal_6d0f9a0, public_6d0f9a0);
extern "C" NAKED register_t __cdecl internal_6d0f9a0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        je public_6d0f9b3
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d0f9b3 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d0f9a0)
    }
}

#undef public_6d0f9b3
