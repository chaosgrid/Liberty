#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6201190);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6202548 _public_6202548

PROC_DECLARE(0x6202530, internal_6202530, public_6202530);
extern "C" NAKED register_t __cdecl internal_6202530()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6201190
        test byte ptr ss : [esp+8], 1
        je public_6202548
        push esi
        call public_62460e0
        add esp, 4
        public_6202548 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6202530)
    }
}

#undef public_6202548
