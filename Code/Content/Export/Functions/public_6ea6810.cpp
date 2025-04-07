#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea6fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ea6828 _public_6ea6828

PROC_DECLARE(0x6ea6810, internal_6ea6810, public_6ea6810);
extern "C" NAKED register_t __cdecl internal_6ea6810()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ea6fe0
        test byte ptr ss : [esp+8], 1
        je public_6ea6828
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ea6828 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ea6810)
    }
}

#undef public_6ea6828
