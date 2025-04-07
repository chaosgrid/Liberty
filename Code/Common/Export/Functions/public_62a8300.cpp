#include "Common-PCH.h"

PROC_DECLARE(0x62a8300, internal_62a8300, public_62a8300);
extern "C" NAKED register_t __cdecl internal_62a8300()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e008]
        mov dword ptr ds : [public_63fc2d0], eax
        ret 
        UNREACHABLE_TRAP(0x62a8300)
    }
}
