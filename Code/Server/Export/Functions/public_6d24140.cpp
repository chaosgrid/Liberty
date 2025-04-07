#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d24160);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d24158 _public_6d24158

PROC_DECLARE(0x6d24140, internal_6d24140, public_6d24140);
extern "C" NAKED register_t __cdecl internal_6d24140()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d24160
        test byte ptr ss : [esp+8], 1
        je public_6d24158
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d24158 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d24140)
    }
}

#undef public_6d24158
