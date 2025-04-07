#include "Common-PCH.h"

PROC_DECLARE(0x62a2b80, internal_62a2b80, public_62a2b80);
extern "C" NAKED register_t __cdecl internal_62a2b80()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx+0x18]
        ret 4
        UNREACHABLE_TRAP(0x62a2b80)
    }
}
