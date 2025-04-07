#include "Movie-PCH.h"


#define public_6ad32bd _public_6ad32bd
#define public_6ad32c4 _public_6ad32c4

PROC_DECLARE(0x6ad329d, internal_6ad329d, public_6ad329d);
extern "C" NAKED register_t __cdecl internal_6ad329d()
{
    __asm
    {
        fxch 
        fstp tbyte ptr ss : [ebp-0x9E]
        fld tbyte ptr ss : [ebp-0x9E]
        test byte ptr ss : [ebp-0x97], 0x40
        je public_6ad32bd
        mov byte ptr ss : [ebp-0x90], 7
        jmp public_6ad32c4
        public_6ad32bd : nop
        mov byte ptr ss : [ebp-0x90], 1
        public_6ad32c4 : nop
        faddp 
        ret 
        UNREACHABLE_TRAP(0x6ad329d)
    }
}

#undef public_6ad32bd
#undef public_6ad32c4
