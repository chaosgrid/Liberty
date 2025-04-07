#include "Movie-PCH.h"


#define public_6ad32fc _public_6ad32fc
#define public_6ad3303 _public_6ad3303

PROC_DECLARE(0x6ad32c7, internal_6ad32c7, public_6ad32c7);
extern "C" NAKED register_t __cdecl internal_6ad32c7()
{
    __asm
    {
        fstp tbyte ptr ss : [ebp-0x9E]
        fld tbyte ptr ss : [ebp-0x9E]
        test byte ptr ss : [ebp-0x97], 0x40
        je public_6ad32fc
        fxch 
        fstp tbyte ptr ss : [ebp-0x9E]
        fld tbyte ptr ss : [ebp-0x9E]
        test byte ptr ss : [ebp-0x97], 0x40
        je public_6ad32fc
        mov byte ptr ss : [ebp-0x90], 7
        jmp public_6ad3303
        public_6ad32fc : nop
        mov byte ptr ss : [ebp-0x90], 1
        public_6ad3303 : nop
        faddp 
        ret 
        UNREACHABLE_TRAP(0x6ad32c7)
    }
}

#undef public_6ad32fc
#undef public_6ad3303
