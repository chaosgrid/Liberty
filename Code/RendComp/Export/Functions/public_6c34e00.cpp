#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31e80);
CLANG_FORWARD_PROC_SYMBOL(public_6c34e00);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c34e1b _public_6c34e1b

PROC_DECLARE(0x6c34e00, internal_6c34e00, public_6c34e00);
extern "C" NAKED register_t __cdecl internal_6c34e00()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+4]
        call public_6c31e80
        test byte ptr ss : [esp+8], 1
        je public_6c34e1b
        push esi
        call public_6c34ea0
        add esp, 4
        public_6c34e1b : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c34e00)
    }
}

#undef public_6c34e1b
