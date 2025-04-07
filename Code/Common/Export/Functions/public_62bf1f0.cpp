#include "Common-PCH.h"

PROC_DECLARE(0x62bf1f0, internal_62bf1f0, public_62bf1f0);
extern "C" NAKED register_t __cdecl internal_62bf1f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        add eax, 8
        ret 
        UNREACHABLE_TRAP(0x62bf1f0)
    }
}
