#include "Movie-PCH.h"

PROC_DECLARE(0x6ad3059, internal_6ad3059, public_6ad3059);
extern "C" NAKED register_t __cdecl internal_6ad3059()
{
    __asm
    {
        fstp st(0)
        UNREACHABLE_TRAP(0x6ad3059)
    }
}
