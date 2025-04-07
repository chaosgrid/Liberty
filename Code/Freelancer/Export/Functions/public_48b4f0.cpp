#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48b510);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_48b508 _public_48b508

PROC_DECLARE(0x48b4f0, internal_48b4f0, public_48b4f0);
extern "C" NAKED register_t __cdecl internal_48b4f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_48b510
        test byte ptr ss : [esp+8], 1
        je public_48b508
        push esi
        call public_5b7e1d
        add esp, 4
        public_48b508 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x48b4f0)
    }
}

#undef public_48b508
