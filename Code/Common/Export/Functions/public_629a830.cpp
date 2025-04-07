#include "Common-PCH.h"

PROC_DECLARE(0x629a830, internal_629a830, public_629a830);
extern "C" NAKED register_t __cdecl internal_629a830()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xE0]
        shr eax, 7
        and eax, 1
        ret 
        UNREACHABLE_TRAP(0x629a830)
    }
}
