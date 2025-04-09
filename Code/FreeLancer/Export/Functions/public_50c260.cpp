#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79a0);
CLANG_FORWARD_PROC_SYMBOL(public_50c310);

#define public_50c278 _public_50c278

PROC_DECLARE(0x50c260, internal_50c260, public_50c260);
extern "C" NAKED register_t __cdecl internal_50c260()
{
    __asm
    {
        push 0x84
        call public_4f79a0
        add esp, 4
        test eax, eax
        je public_50c278
        mov ecx, eax
        jmp public_50c310
        public_50c278 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x50c260)
    }
}

#undef public_50c278
