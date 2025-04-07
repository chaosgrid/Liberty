#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3054);

PROC_DECLARE(0x6ad30a1, internal_6ad30a1, public_6ad30a1);
extern "C" NAKED register_t __cdecl internal_6ad30a1()
{
    __asm
    {
        or cl, cl
        jne public_6ad3054
        fstp st(0)
        fld tbyte ptr ds : [public_6addb80]
        ret 
        UNREACHABLE_TRAP(0x6ad30a1)
    }
}
