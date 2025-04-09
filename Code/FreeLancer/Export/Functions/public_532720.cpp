#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_532740);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_532738 _public_532738

PROC_DECLARE(0x532720, internal_532720, public_532720);
extern "C" NAKED register_t __cdecl internal_532720()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_532740
        test byte ptr ss : [esp+8], 1
        je public_532738
        push esi
        call public_5b7e1d
        add esp, 4
        public_532738 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x532720)
    }
}

#undef public_532738
