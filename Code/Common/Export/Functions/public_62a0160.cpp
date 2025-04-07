#include "Common-PCH.h"

PROC_DECLARE(0x62a0160, internal_62a0160, public_62a0160);
extern "C" NAKED register_t __cdecl internal_62a0160()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        ret 
        UNREACHABLE_TRAP(0x62a0160)
    }
}
