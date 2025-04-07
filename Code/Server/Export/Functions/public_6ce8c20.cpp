#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce8c40);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce8c38 _public_6ce8c38

PROC_DECLARE(0x6ce8c20, internal_6ce8c20, public_6ce8c20);
extern "C" NAKED register_t __cdecl internal_6ce8c20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ce8c40
        test byte ptr ss : [esp+8], 1
        je public_6ce8c38
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6ce8c38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ce8c20)
    }
}

#undef public_6ce8c38
