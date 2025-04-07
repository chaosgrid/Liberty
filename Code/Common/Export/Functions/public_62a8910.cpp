#include "Common-PCH.h"

PROC_DECLARE(0x62a8910, internal_62a8910, public_62a8910);
extern "C" NAKED register_t __cdecl internal_62a8910()
{
    __asm
    {
        ret 0xC
        UNREACHABLE_TRAP(0x62a8910)
    }
}
