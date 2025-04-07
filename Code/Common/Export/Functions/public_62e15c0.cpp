#include "Common-PCH.h"

PROC_DECLARE(0x62e15c0, internal_62e15c0, public_62e15c0);
extern "C" NAKED register_t __cdecl internal_62e15c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        lea eax, ds:[eax+ecx-1]
        ret 
        UNREACHABLE_TRAP(0x62e15c0)
    }
}
