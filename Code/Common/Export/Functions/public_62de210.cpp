#include "Common-PCH.h"

PROC_DECLARE(0x62de210, internal_62de210, public_62de210);
extern "C" NAKED register_t __cdecl internal_62de210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a05d8]
        mov dword ptr ds : [public_63fca04], eax
        ret 
        UNREACHABLE_TRAP(0x62de210)
    }
}
