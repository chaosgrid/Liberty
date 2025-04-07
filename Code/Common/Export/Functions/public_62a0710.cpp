#include "Common-PCH.h"

PROC_DECLARE(0x62a0710, internal_62a0710, public_62a0710);
extern "C" NAKED register_t __cdecl internal_62a0710()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        add eax, 0x38
        ret 
        UNREACHABLE_TRAP(0x62a0710)
    }
}
