#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564700);

#define public_5664ef _public_5664ef

PROC_DECLARE(0x5664e0, internal_5664e0, public_5664e0);
extern "C" NAKED register_t __cdecl internal_5664e0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xE6]
        test al, al
        je public_5664ef
        call public_564700
        public_5664ef : nop
        ret 4
        UNREACHABLE_TRAP(0x5664e0)
    }
}

#undef public_5664ef
