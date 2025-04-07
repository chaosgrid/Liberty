#include "Movie-PCH.h"

PROC_DECLARE(0x6ad3091, internal_6ad3091, public_6ad3091);
extern "C" NAKED register_t __cdecl internal_6ad3091()
{
    __asm
    {
        fstp st(0)
        fld tbyte ptr ds : [public_6addb80]
        UNREACHABLE_TRAP(0x6ad3091)
    }
}
