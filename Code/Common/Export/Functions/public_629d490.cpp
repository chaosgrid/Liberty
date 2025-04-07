#include "Common-PCH.h"

PROC_DECLARE(0x629d490, internal_629d490, public_629d490);
extern "C" NAKED register_t __cdecl internal_629d490()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xEC]
        ret 
        UNREACHABLE_TRAP(0x629d490)
    }
}
