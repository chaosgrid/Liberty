#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79a0);
CLANG_FORWARD_PROC_SYMBOL(public_5134a0);

#define public_513458 _public_513458

PROC_DECLARE(0x513440, internal_513440, public_513440);
extern "C" NAKED register_t __cdecl internal_513440()
{
    __asm
    {
        push 0x84
        call public_4f79a0
        add esp, 4
        test eax, eax
        je public_513458
        mov ecx, eax
        jmp public_5134a0
        public_513458 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x513440)
    }
}

#undef public_513458
