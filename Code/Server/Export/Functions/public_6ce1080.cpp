#include "Server-PCH.h"

PROC_DECLARE(0x6ce1080, internal_6ce1080, public_6ce1080);
extern "C" NAKED register_t __cdecl internal_6ce1080()
{
    __asm
    {
        ret 0xC
        UNREACHABLE_TRAP(0x6ce1080)
    }
}
