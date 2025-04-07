#include "Common-PCH.h"

PROC_DECLARE(0x62ad440, internal_62ad440, public_62ad440);
extern "C" NAKED register_t __cdecl internal_62ad440()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e520]
        mov dword ptr ds : [public_63fc410], eax
        ret 
        UNREACHABLE_TRAP(0x62ad440)
    }
}
