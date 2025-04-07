#include "Common-PCH.h"

PROC_DECLARE(0x62e15d0, internal_62e15d0, public_62e15d0);
extern "C" NAKED register_t __cdecl internal_62e15d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        lea eax, ds:[eax+ecx-1]
        ret 
        UNREACHABLE_TRAP(0x62e15d0)
    }
}
