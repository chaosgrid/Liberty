#include "Common-PCH.h"

PROC_DECLARE(0x62670a0, internal_62670a0, public_62670a0);
extern "C" NAKED register_t __cdecl internal_62670a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        sub eax, 2
        ret 
        UNREACHABLE_TRAP(0x62670a0)
    }
}
