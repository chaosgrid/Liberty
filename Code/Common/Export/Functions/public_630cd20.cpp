#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630bfe0);
CLANG_FORWARD_PROC_SYMBOL(public_630cd20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630cd38 _public_630cd38

PROC_DECLARE(0x630cd20, internal_630cd20, public_630cd20);
extern "C" NAKED register_t __cdecl internal_630cd20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_630bfe0
        test byte ptr ss : [esp+8], 1
        je public_630cd38
        push esi
        call public_6391d5a
        add esp, 4
        public_630cd38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630cd20)
    }
}

#undef public_630cd38
