#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6369cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6369ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6369cd8 _public_6369cd8

PROC_DECLARE(0x6369cc0, internal_6369cc0, public_6369cc0);
extern "C" NAKED register_t __cdecl internal_6369cc0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6369ce0
        test byte ptr ss : [esp+8], 1
        je public_6369cd8
        push esi
        call public_6391d5a
        add esp, 4
        public_6369cd8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6369cc0)
    }
}

#undef public_6369cd8
