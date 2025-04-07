#include "Common-PCH.h"

PROC_DECLARE(0x62a0740, internal_62a0740, public_62a0740);
extern "C" NAKED register_t __cdecl internal_62a0740()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        add eax, 0x40
        ret 
        UNREACHABLE_TRAP(0x62a0740)
    }
}
