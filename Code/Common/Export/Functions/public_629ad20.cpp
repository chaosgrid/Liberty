#include "Common-PCH.h"

PROC_DECLARE(0x629ad20, internal_629ad20, public_629ad20);
extern "C" NAKED register_t __cdecl internal_629ad20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1B4]
        ret 
        UNREACHABLE_TRAP(0x629ad20)
    }
}
