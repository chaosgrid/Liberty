#include "Common-PCH.h"

PROC_DECLARE(0x62a22b0, internal_62a22b0, public_62a22b0);
extern "C" NAKED register_t __cdecl internal_62a22b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xE8]
        ret 
        UNREACHABLE_TRAP(0x62a22b0)
    }
}
