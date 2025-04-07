#include "Common-PCH.h"

PROC_DECLARE(0x629d470, internal_629d470, public_629d470);
extern "C" NAKED register_t __cdecl internal_629d470()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xE4]
        ret 
        UNREACHABLE_TRAP(0x629d470)
    }
}
