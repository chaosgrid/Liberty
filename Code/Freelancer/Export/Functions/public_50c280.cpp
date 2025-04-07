#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428f80);
CLANG_FORWARD_PROC_SYMBOL(public_50c2a0);

#define public_50c295 _public_50c295

PROC_DECLARE(0x50c280, internal_50c280, public_50c280);
extern "C" NAKED register_t __cdecl internal_50c280()
{
    __asm
    {
        push 0x30
        call public_428f80
        add esp, 4
        test eax, eax
        je public_50c295
        mov ecx, eax
        jmp public_50c2a0
        public_50c295 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x50c280)
    }
}

#undef public_50c295
