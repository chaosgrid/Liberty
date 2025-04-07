#include "Common-PCH.h"

PROC_DECLARE(0x62959e0, internal_62959e0, public_62959e0);
extern "C" NAKED register_t __cdecl internal_62959e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ce34]
        mov dword ptr ds : [public_63fc148], eax
        ret 
        UNREACHABLE_TRAP(0x62959e0)
    }
}
