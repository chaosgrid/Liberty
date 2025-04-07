#include "Common-PCH.h"

PROC_DECLARE(0x62811a0, internal_62811a0, public_62811a0);
extern "C" NAKED register_t __cdecl internal_62811a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xAC]
        ret 
        UNREACHABLE_TRAP(0x62811a0)
    }
}
