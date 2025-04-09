#include "FreeLancer-PCH.h"

PROC_DECLARE(0x579300, internal_579300, public_579300);
extern "C" NAKED register_t __cdecl internal_579300()
{
    __asm
    {
        mov dword ptr ds : [public_67c470], 0
        ret 
        UNREACHABLE_TRAP(0x579300)
    }
}
