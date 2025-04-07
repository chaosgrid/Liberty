#include "Common-PCH.h"

PROC_DECLARE(0x62a06d0, internal_62a06d0, public_62a06d0);
extern "C" NAKED register_t __cdecl internal_62a06d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov al, byte ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x62a06d0)
    }
}
