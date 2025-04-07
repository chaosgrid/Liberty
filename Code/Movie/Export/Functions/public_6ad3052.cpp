#include "Movie-PCH.h"

PROC_DECLARE(0x6ad3052, internal_6ad3052, public_6ad3052);
extern "C" NAKED register_t __cdecl internal_6ad3052()
{
    __asm
    {
        fstp st(0)
        UNREACHABLE_TRAP(0x6ad3052)
    }
}
