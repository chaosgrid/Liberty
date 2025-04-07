#include "Common-PCH.h"

PROC_DECLARE(0x62a82e0, internal_62a82e0, public_62a82e0);
extern "C" NAKED register_t __cdecl internal_62a82e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+4]
        ret 
        UNREACHABLE_TRAP(0x62a82e0)
    }
}
