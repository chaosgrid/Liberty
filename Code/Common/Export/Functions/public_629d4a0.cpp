#include "Common-PCH.h"

PROC_DECLARE(0x629d4a0, internal_629d4a0, public_629d4a0);
extern "C" NAKED register_t __cdecl internal_629d4a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xF0]
        ret 
        UNREACHABLE_TRAP(0x629d4a0)
    }
}
