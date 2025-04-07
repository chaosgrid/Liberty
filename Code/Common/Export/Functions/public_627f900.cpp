#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dbb0);
CLANG_FORWARD_PROC_SYMBOL(public_627f900);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627f918 _public_627f918

PROC_DECLARE(0x627f900, internal_627f900, public_627f900);
extern "C" NAKED register_t __cdecl internal_627f900()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_627dbb0
        test byte ptr ss : [esp+8], 1
        je public_627f918
        push esi
        call public_6391d5a
        add esp, 4
        public_627f918 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x627f900)
    }
}

#undef public_627f918
