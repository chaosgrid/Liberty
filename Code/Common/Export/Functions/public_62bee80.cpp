#include "Common-PCH.h"

PROC_DECLARE(0x62bee80, internal_62bee80, public_62bee80);
extern "C" NAKED register_t __cdecl internal_62bee80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ef58]
        mov dword ptr ds : [public_63fc4dc], eax
        ret 
        UNREACHABLE_TRAP(0x62bee80)
    }
}
