#include "Common-PCH.h"

PROC_DECLARE(0x62a0780, internal_62a0780, public_62a0780);
extern "C" NAKED register_t __cdecl internal_62a0780()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+0x68]
        ret 
        UNREACHABLE_TRAP(0x62a0780)
    }
}
