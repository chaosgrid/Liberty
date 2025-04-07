#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5af10);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d5af28 _public_6d5af28

PROC_DECLARE(0x6d5af10, internal_6d5af10, public_6d5af10);
extern "C" NAKED register_t __cdecl internal_6d5af10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ce36f0
        test byte ptr ss : [esp+8], 1
        je public_6d5af28
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d5af28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d5af10)
    }
}

#undef public_6d5af28
