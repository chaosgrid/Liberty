#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3347);

#define public_6ad3460 _public_6ad3460
#define public_6ad3463 _public_6ad3463

PROC_DECLARE(0x6ad343b, internal_6ad343b, public_6ad343b);
extern "C" NAKED register_t __cdecl internal_6ad343b()
{
    __asm
    {
        mov ax, word ptr ss : [esp]
        cmp ax, 0x27F
        je public_6ad3463
        and ax, 0x20
        je public_6ad3460
        wait 
        fnstsw ax
        and ax, 0x20
        je public_6ad3460
        mov eax, 8
        call public_6ad3347
        pop edx
        ret 
        public_6ad3460 : nop
        fldcw word ptr ss : [esp]
        public_6ad3463 : nop
        pop edx
        ret 
        UNREACHABLE_TRAP(0x6ad343b)
    }
}

#undef public_6ad3460
#undef public_6ad3463
