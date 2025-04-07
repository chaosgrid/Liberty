#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272d90);
CLANG_FORWARD_PROC_SYMBOL(public_6272db0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6272da8 _public_6272da8

PROC_DECLARE(0x6272d90, internal_6272d90, public_6272d90);
extern "C" NAKED register_t __cdecl internal_6272d90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6272db0
        test byte ptr ss : [esp+8], 1
        je public_6272da8
        push esi
        call public_6391d5a
        add esp, 4
        public_6272da8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6272d90)
    }
}

#undef public_6272da8
