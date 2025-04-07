#include "Common-PCH.h"

PROC_DECLARE(0x62629f0, internal_62629f0, public_62629f0);
extern "C" NAKED register_t __cdecl internal_62629f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        cmp eax, dword ptr ds : [ecx+0x1C]
        sbb eax, eax
        inc eax
        ret 
        UNREACHABLE_TRAP(0x62629f0)
    }
}
