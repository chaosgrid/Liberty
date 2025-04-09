#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552480);

#define public_552490 _public_552490
#define public_552497 _public_552497

PROC_DECLARE(0x552480, internal_552480, public_552480);
extern "C" NAKED register_t __cdecl internal_552480()
{
    __asm
    {
        mov cl, byte ptr ss : [esp+4]
        xor eax, eax
        test cl, 0x40
        je public_552490
        mov eax, 4
        public_552490 : nop
        test cl, cl
        jns public_552497
        add eax, 4
        public_552497 : nop
        ret 
        UNREACHABLE_TRAP(0x552480)
    }
}

#undef public_552490
#undef public_552497
