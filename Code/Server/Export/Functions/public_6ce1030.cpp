#include "Server-PCH.h"

PROC_DECLARE(0x6ce1030, internal_6ce1030, public_6ce1030);
extern "C" NAKED register_t __cdecl internal_6ce1030()
{
    __asm
    {
        ret 0x10
        UNREACHABLE_TRAP(0x6ce1030)
    }
}
