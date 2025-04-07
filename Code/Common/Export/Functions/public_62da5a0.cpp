#include "Common-PCH.h"

PROC_DECLARE(0x62da5a0, internal_62da5a0, public_62da5a0);
extern "C" NAKED register_t __cdecl internal_62da5a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a05a0]
        mov dword ptr ds : [public_63fc97c], eax
        ret 
        UNREACHABLE_TRAP(0x62da5a0)
    }
}
