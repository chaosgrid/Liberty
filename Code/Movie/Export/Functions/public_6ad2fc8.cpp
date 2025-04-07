#include "Movie-PCH.h"

PROC_DECLARE(0x6ad2fc8, internal_6ad2fc8, public_6ad2fc8);
extern "C" NAKED register_t __cdecl internal_6ad2fc8()
{
    __asm
    {
        fstp st(0)
        fstp st(0)
        fld tbyte ptr ds : [public_6addb80]
        mov byte ptr ss : [ebp-0x90], 2
        ret 
        UNREACHABLE_TRAP(0x6ad2fc8)
    }
}
