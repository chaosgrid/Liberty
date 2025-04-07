#include "Server-PCH.h"

PROC_DECLARE(0x6ce1040, internal_6ce1040, public_6ce1040);
extern "C" NAKED register_t __cdecl internal_6ce1040()
{
    __asm
    {
        ret 0x14
        UNREACHABLE_TRAP(0x6ce1040)
    }
}
