#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48a440);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_48a438 _public_48a438

PROC_DECLARE(0x48a420, internal_48a420, public_48a420);
extern "C" NAKED register_t __cdecl internal_48a420()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_48a440
        test byte ptr ss : [esp+8], 1
        je public_48a438
        push esi
        call public_5b7e1d
        add esp, 4
        public_48a438 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x48a420)
    }
}

#undef public_48a438
