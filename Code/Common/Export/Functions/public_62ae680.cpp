#include "Common-PCH.h"

PROC_DECLARE(0x62ae680, internal_62ae680, public_62ae680);
extern "C" NAKED register_t __cdecl internal_62ae680()
{
    __asm
    {
        mov dword ptr ds : [public_63fc328], 0
        ret 
        UNREACHABLE_TRAP(0x62ae680)
    }
}
