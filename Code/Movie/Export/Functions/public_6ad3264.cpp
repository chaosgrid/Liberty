#include "Movie-PCH.h"

PROC_DECLARE(0x6ad3264, internal_6ad3264, public_6ad3264);
extern "C" NAKED register_t __cdecl internal_6ad3264()
{
    __asm
    {
        fstp st(0)
        UNREACHABLE_TRAP(0x6ad3264)
    }
}
