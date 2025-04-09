#include "FreeLancer-PCH.h"

PROC_DECLARE(0x541d50, internal_541d50, public_541d50);
extern "C" NAKED register_t __cdecl internal_541d50()
{
    __asm
    {
        mov dword ptr ds : [public_678a2c], offset public_5df8ac
        ret 
        UNREACHABLE_TRAP(0x541d50)
    }
}
