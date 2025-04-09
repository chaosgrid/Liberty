#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48e650);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_48e648 _public_48e648

PROC_DECLARE(0x48e630, internal_48e630, public_48e630);
extern "C" NAKED register_t __cdecl internal_48e630()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_48e650
        test byte ptr ss : [esp+8], 1
        je public_48e648
        push esi
        call public_5b7e1d
        add esp, 4
        public_48e648 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x48e630)
    }
}

#undef public_48e648
