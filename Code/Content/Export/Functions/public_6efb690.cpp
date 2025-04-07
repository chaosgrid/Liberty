#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb710);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6efb6a8 _public_6efb6a8

PROC_DECLARE(0x6efb690, internal_6efb690, public_6efb690);
extern "C" NAKED register_t __cdecl internal_6efb690()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6efb710
        test byte ptr ss : [esp+8], 1
        je public_6efb6a8
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6efb6a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6efb690)
    }
}

#undef public_6efb6a8
