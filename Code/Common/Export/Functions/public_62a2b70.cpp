#include "Common-PCH.h"

PROC_DECLARE(0x62a2b70, internal_62a2b70, public_62a2b70);
extern "C" NAKED register_t __cdecl internal_62a2b70()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx+0x14]
        ret 4
        UNREACHABLE_TRAP(0x62a2b70)
    }
}
