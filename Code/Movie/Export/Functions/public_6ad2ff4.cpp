#include "Movie-PCH.h"

PROC_DECLARE(0x6ad2ff4, internal_6ad2ff4, public_6ad2ff4);
extern "C" NAKED register_t __cdecl internal_6ad2ff4()
{
    __asm
    {
        mov byte ptr ss : [ebp-0x90], 2
        fstp st(0)
        fld tbyte ptr ds : [public_6addb8a]
        ret 
        UNREACHABLE_TRAP(0x6ad2ff4)
    }
}
