#include "Common-PCH.h"

PROC_DECLARE(0x62681f0, internal_62681f0, public_62681f0);
extern "C" NAKED register_t __cdecl internal_62681f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        add eax, 8
        ret 
        UNREACHABLE_TRAP(0x62681f0)
    }
}
