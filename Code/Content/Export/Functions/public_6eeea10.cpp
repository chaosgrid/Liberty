#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeea10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eeea28 _public_6eeea28

PROC_DECLARE(0x6eeea10, internal_6eeea10, public_6eeea10);
extern "C" NAKED register_t __cdecl internal_6eeea10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6eec9b0
        test byte ptr ss : [esp+8], 1
        je public_6eeea28
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6eeea28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eeea10)
    }
}

#undef public_6eeea28
