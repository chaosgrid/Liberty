#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea5b40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ea1b58 _public_6ea1b58

PROC_DECLARE(0x6ea1b40, internal_6ea1b40, public_6ea1b40);
extern "C" NAKED register_t __cdecl internal_6ea1b40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ea5b40
        test byte ptr ss : [esp+8], 1
        je public_6ea1b58
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ea1b58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ea1b40)
    }
}

#undef public_6ea1b58
