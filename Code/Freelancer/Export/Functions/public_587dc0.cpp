#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_587dc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_587dd8 _public_587dd8

PROC_DECLARE(0x587dc0, internal_587dc0, public_587dc0);
extern "C" NAKED register_t __cdecl internal_587dc0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_455e90
        test byte ptr ss : [esp+8], 1
        je public_587dd8
        push esi
        call public_5b7e1d
        add esp, 4
        public_587dd8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x587dc0)
    }
}

#undef public_587dd8
