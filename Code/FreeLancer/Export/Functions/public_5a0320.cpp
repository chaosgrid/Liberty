#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d960);

#define public_5a0338 _public_5a0338

PROC_DECLARE(0x5a0320, internal_5a0320, public_5a0320);
extern "C" NAKED register_t __cdecl internal_5a0320()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x2D0]
        test al, al
        je public_5a0338
        push ecx
        mov byte ptr ds : [ecx+0x2D0], 0
        call public_59d960
        pop ecx
        public_5a0338 : nop
        ret 
        UNREACHABLE_TRAP(0x5a0320)
    }
}

#undef public_5a0338
