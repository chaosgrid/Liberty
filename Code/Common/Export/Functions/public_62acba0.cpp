#include "Common-PCH.h"

PROC_DECLARE(0x62acba0, internal_62acba0, public_62acba0);
extern "C" NAKED register_t __cdecl internal_62acba0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e508]
        mov dword ptr ds : [public_63fc310], eax
        ret 
        UNREACHABLE_TRAP(0x62acba0)
    }
}
