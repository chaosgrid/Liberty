#include "Common-PCH.h"

PROC_DECLARE(0x629d880, internal_629d880, public_629d880);
extern "C" NAKED register_t __cdecl internal_629d880()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        ret 
        UNREACHABLE_TRAP(0x629d880)
    }
}
