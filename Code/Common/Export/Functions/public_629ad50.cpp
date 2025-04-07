#include "Common-PCH.h"

PROC_DECLARE(0x629ad50, internal_629ad50, public_629ad50);
extern "C" NAKED register_t __cdecl internal_629ad50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1D8]
        ret 
        UNREACHABLE_TRAP(0x629ad50)
    }
}
