#include "Alchemy-PCH.h"

PROC_DECLARE(0x6218dd0, internal_6218dd0, public_6218dd0);
extern "C" NAKED register_t __cdecl internal_6218dd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x8C]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x6218dd0)
    }
}
