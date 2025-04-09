#include "FreeLancer-PCH.h"

PROC_DECLARE(0x504bf0, internal_504bf0, public_504bf0);
extern "C" NAKED register_t __cdecl internal_504bf0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x2C4]
        ret 
        UNREACHABLE_TRAP(0x504bf0)
    }
}
