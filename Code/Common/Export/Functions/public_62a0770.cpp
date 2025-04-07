#include "Common-PCH.h"

PROC_DECLARE(0x62a0770, internal_62a0770, public_62a0770);
extern "C" NAKED register_t __cdecl internal_62a0770()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+0x64]
        ret 
        UNREACHABLE_TRAP(0x62a0770)
    }
}
