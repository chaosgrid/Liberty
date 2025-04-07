#include "ximage-PCH.h"

PROC_DECLARE(0x6f82640, internal_6f82640, public_6f82640);
extern "C" NAKED register_t __cdecl internal_6f82640()
{
    __asm
    {
        ret 0xC
        UNREACHABLE_TRAP(0x6f82640)
    }
}
