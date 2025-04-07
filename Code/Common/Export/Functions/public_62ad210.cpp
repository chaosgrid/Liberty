#include "Common-PCH.h"

PROC_DECLARE(0x62ad210, internal_62ad210, public_62ad210);
extern "C" NAKED register_t __cdecl internal_62ad210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e514]
        mov dword ptr ds : [public_63fc318], eax
        ret 
        UNREACHABLE_TRAP(0x62ad210)
    }
}
