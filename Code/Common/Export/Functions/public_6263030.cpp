#include "Common-PCH.h"

PROC_DECLARE(0x6263030, internal_6263030, public_6263030);
extern "C" NAKED register_t __cdecl internal_6263030()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x24]
        ret 
        UNREACHABLE_TRAP(0x6263030)
    }
}
