#include "Server-PCH.h"

PROC_DECLARE(0x6ce1050, internal_6ce1050, public_6ce1050);
extern "C" NAKED register_t __cdecl internal_6ce1050()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6ce1050)
    }
}
