#include "Common-PCH.h"

PROC_DECLARE(0x629ba60, internal_629ba60, public_629ba60);
extern "C" NAKED register_t __cdecl internal_629ba60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x70]
        ret 
        UNREACHABLE_TRAP(0x629ba60)
    }
}
