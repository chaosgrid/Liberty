#include "Common-PCH.h"

PROC_DECLARE(0x62bf1a0, internal_62bf1a0, public_62bf1a0);
extern "C" NAKED register_t __cdecl internal_62bf1a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        add eax, 0x2C
        ret 
        UNREACHABLE_TRAP(0x62bf1a0)
    }
}
