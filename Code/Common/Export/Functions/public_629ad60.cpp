#include "Common-PCH.h"

PROC_DECLARE(0x629ad60, internal_629ad60, public_629ad60);
extern "C" NAKED register_t __cdecl internal_629ad60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1DC]
        ret 
        UNREACHABLE_TRAP(0x629ad60)
    }
}
