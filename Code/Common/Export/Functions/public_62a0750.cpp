#include "Common-PCH.h"

PROC_DECLARE(0x62a0750, internal_62a0750, public_62a0750);
extern "C" NAKED register_t __cdecl internal_62a0750()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        add eax, 0x4C
        ret 
        UNREACHABLE_TRAP(0x62a0750)
    }
}
