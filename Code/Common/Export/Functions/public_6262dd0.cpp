#include "Common-PCH.h"

PROC_DECLARE(0x6262dd0, internal_6262dd0, public_6262dd0);
extern "C" NAKED register_t __cdecl internal_6262dd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        ret 
        UNREACHABLE_TRAP(0x6262dd0)
    }
}
