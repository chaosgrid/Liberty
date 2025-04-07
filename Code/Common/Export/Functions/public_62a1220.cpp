#include "Common-PCH.h"

PROC_DECLARE(0x62a1220, internal_62a1220, public_62a1220);
extern "C" NAKED register_t __cdecl internal_62a1220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d9d8]
        mov dword ptr ds : [public_63fc270], eax
        ret 
        UNREACHABLE_TRAP(0x62a1220)
    }
}
