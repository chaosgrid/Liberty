#include "Common-PCH.h"

PROC_DECLARE(0x62a02f0, internal_62a02f0, public_62a02f0);
extern "C" NAKED register_t __cdecl internal_62a02f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [ecx+0x1C], 0
        ret 
        UNREACHABLE_TRAP(0x62a02f0)
    }
}
