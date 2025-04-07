#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);

#define public_48af24 _public_48af24

PROC_DECLARE(0x48af10, internal_48af10, public_48af10);
extern "C" NAKED register_t __cdecl internal_48af10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_41dd90
        test al, al
        je public_48af24
        mov ecx, esi
        pop esi
        jmp public_5a0760
        public_48af24 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x48af10)
    }
}

#undef public_48af24
