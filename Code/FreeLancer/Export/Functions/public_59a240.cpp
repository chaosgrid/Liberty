#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564700);

#define public_59a24f _public_59a24f

PROC_DECLARE(0x59a240, internal_59a240, public_59a240);
extern "C" NAKED register_t __cdecl internal_59a240()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x498]
        test al, al
        je public_59a24f
        call public_564700
        public_59a24f : nop
        ret 4
        UNREACHABLE_TRAP(0x59a240)
    }
}

#undef public_59a24f
