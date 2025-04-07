#include "Common-PCH.h"

PROC_DECLARE(0x62bd000, internal_62bd000, public_62bd000);
extern "C" NAKED register_t __cdecl internal_62bd000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639eef4]
        mov dword ptr ds : [public_63fc4d4], eax
        ret 
        UNREACHABLE_TRAP(0x62bd000)
    }
}
