#include "Common-PCH.h"

PROC_DECLARE(0x62bee60, internal_62bee60, public_62bee60);
extern "C" NAKED register_t __cdecl internal_62bee60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ef54]
        mov dword ptr ds : [public_63fc4e4], eax
        ret 
        UNREACHABLE_TRAP(0x62bee60)
    }
}
