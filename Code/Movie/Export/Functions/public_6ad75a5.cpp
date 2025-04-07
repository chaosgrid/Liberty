#include "Movie-PCH.h"

PROC_DECLARE(0x6ad75a5, internal_6ad75a5, public_6ad75a5);
extern "C" NAKED register_t __cdecl internal_6ad75a5()
{
    __asm
    {
        fpatan 
        ret 
        UNREACHABLE_TRAP(0x6ad75a5)
    }
}
