#include "Common-PCH.h"

PROC_DECLARE(0x62bee90, internal_62bee90, public_62bee90);
extern "C" NAKED register_t __cdecl internal_62bee90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        inc eax
        mov dword ptr ds : [ecx+0xC], eax
        ret 
        UNREACHABLE_TRAP(0x62bee90)
    }
}
