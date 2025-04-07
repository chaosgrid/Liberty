#include "Common-PCH.h"

PROC_DECLARE(0x62a6690, internal_62a6690, public_62a6690);
extern "C" NAKED register_t __cdecl internal_62a6690()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x40]
        ret 
        UNREACHABLE_TRAP(0x62a6690)
    }
}
