#include "FreeLancer-PCH.h"

PROC_DECLARE(0x443860, internal_443860, public_443860);
extern "C" NAKED register_t __cdecl internal_443860()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x1C]
        ret 
        UNREACHABLE_TRAP(0x443860)
    }
}
