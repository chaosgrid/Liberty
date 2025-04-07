#include "Common-PCH.h"

PROC_DECLARE(0x62a4610, internal_62a4610, public_62a4610);
extern "C" NAKED register_t __cdecl internal_62a4610()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        dec eax
        mov dword ptr ds : [ecx], eax
        ret 
        UNREACHABLE_TRAP(0x62a4610)
    }
}
