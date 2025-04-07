#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6369b30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6369b68 _public_6369b68

PROC_DECLARE(0x6369b50, internal_6369b50, public_6369b50);
extern "C" NAKED register_t __cdecl internal_6369b50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6369b30
        test byte ptr ss : [esp+8], 1
        je public_6369b68
        push esi
        call public_6391d5a
        add esp, 4
        public_6369b68 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6369b50)
    }
}

#undef public_6369b68
