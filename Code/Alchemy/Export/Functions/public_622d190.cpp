#include "Alchemy-PCH.h"

PROC_DECLARE(0x622d190, internal_622d190, public_622d190);
extern "C" NAKED register_t __cdecl internal_622d190()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x622d190)
    }
}
