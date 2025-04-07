#include "Movie-PCH.h"

PROC_DECLARE(0x6ad326d, internal_6ad326d, public_6ad326d);
extern "C" NAKED register_t __cdecl internal_6ad326d()
{
    __asm
    {
        fstp st(0)
        fld1 
        ret 
        UNREACHABLE_TRAP(0x6ad326d)
    }
}
