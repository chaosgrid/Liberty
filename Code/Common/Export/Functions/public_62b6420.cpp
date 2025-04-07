#include "Common-PCH.h"

PROC_DECLARE(0x62b6420, internal_62b6420, public_62b6420);
extern "C" NAKED register_t __cdecl internal_62b6420()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e7c0]
        mov dword ptr ds : [public_63fc474], eax
        ret 
        UNREACHABLE_TRAP(0x62b6420)
    }
}
