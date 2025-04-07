#include "Common-PCH.h"

PROC_DECLARE(0x62afa80, internal_62afa80, public_62afa80);
extern "C" NAKED register_t __cdecl internal_62afa80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e544]
        mov dword ptr ds : [public_63fc444], eax
        ret 
        UNREACHABLE_TRAP(0x62afa80)
    }
}
