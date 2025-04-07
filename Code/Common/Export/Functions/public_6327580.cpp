#include "Common-PCH.h"

PROC_DECLARE(0x6327580, internal_6327580, public_6327580);
extern "C" NAKED register_t __cdecl internal_6327580()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        ret 
        UNREACHABLE_TRAP(0x6327580)
    }
}
