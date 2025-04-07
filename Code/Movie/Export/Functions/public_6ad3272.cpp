#include "Movie-PCH.h"


#define public_6ad328f _public_6ad328f

PROC_DECLARE(0x6ad3272, internal_6ad3272, public_6ad3272);
extern "C" NAKED register_t __cdecl internal_6ad3272()
{
    __asm
    {
        fstp tbyte ptr ss : [ebp-0x9E]
        fld tbyte ptr ss : [ebp-0x9E]
        test byte ptr ss : [ebp-0x97], 0x40
        je public_6ad328f
        mov byte ptr ss : [ebp-0x90], 7
        ret 
        public_6ad328f : nop
        mov byte ptr ss : [ebp-0x90], 1
        fadd qword ptr ds : [public_6addbf4]
        ret 
        UNREACHABLE_TRAP(0x6ad3272)
    }
}

#undef public_6ad328f
