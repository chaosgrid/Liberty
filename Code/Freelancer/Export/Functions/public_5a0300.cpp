#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d8d0);

#define public_5a0318 _public_5a0318

PROC_DECLARE(0x5a0300, internal_5a0300, public_5a0300);
extern "C" NAKED register_t __cdecl internal_5a0300()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x2D0]
        test al, al
        jne public_5a0318
        push ecx
        mov byte ptr ds : [ecx+0x2D0], 1
        call public_59d8d0
        pop ecx
        public_5a0318 : nop
        ret 
        UNREACHABLE_TRAP(0x5a0300)
    }
}

#undef public_5a0318
