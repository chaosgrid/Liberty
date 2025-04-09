#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79a0);
CLANG_FORWARD_PROC_SYMBOL(public_50c440);

#define public_50c418 _public_50c418

PROC_DECLARE(0x50c400, internal_50c400, public_50c400);
extern "C" NAKED register_t __cdecl internal_50c400()
{
    __asm
    {
        push 0x84
        call public_4f79a0
        add esp, 4
        test eax, eax
        je public_50c418
        mov ecx, eax
        jmp public_50c440
        public_50c418 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x50c400)
    }
}

#undef public_50c418
