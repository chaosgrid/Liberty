#include "Movie-PCH.h"

PROC_DECLARE(0x6ad308f, internal_6ad308f, public_6ad308f);
extern "C" NAKED register_t __cdecl internal_6ad308f()
{
    __asm
    {
        fstp st(0)
        UNREACHABLE_TRAP(0x6ad308f)
    }
}
