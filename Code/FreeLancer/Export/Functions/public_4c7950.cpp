#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7950);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4c796b _public_4c796b

PROC_DECLARE(0x4c7950, internal_4c7950, public_4c7950);
extern "C" NAKED register_t __cdecl internal_4c7950()
{
    __asm
    {
        call public_54baf0
        push eax
        call dword ptr ds : [public_5c6470]
        add esp, 4
        test eax, eax
        je public_4c796b
        mov ecx, eax
        jmp dword ptr ds : [public_5c6474]
        public_4c796b : nop
        ret 
        UNREACHABLE_TRAP(0x4c7950)
    }
}

#undef public_4c796b
