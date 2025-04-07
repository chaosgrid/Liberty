#include "Common-PCH.h"

PROC_DECLARE(0x62da580, internal_62da580, public_62da580);
extern "C" NAKED register_t __cdecl internal_62da580()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a059c]
        mov dword ptr ds : [public_63fc984], eax
        ret 
        UNREACHABLE_TRAP(0x62da580)
    }
}
