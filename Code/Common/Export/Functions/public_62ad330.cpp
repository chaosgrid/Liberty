#include "Common-PCH.h"

PROC_DECLARE(0x62ad330, internal_62ad330, public_62ad330);
extern "C" NAKED register_t __cdecl internal_62ad330()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x28]
        ret 
        UNREACHABLE_TRAP(0x62ad330)
    }
}
