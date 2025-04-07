#include "Common-PCH.h"

PROC_DECLARE(0x63275e0, internal_63275e0, public_63275e0);
extern "C" NAKED register_t __cdecl internal_63275e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x38]
        ret 
        UNREACHABLE_TRAP(0x63275e0)
    }
}
