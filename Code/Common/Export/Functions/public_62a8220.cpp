#include "Common-PCH.h"

PROC_DECLARE(0x62a8220, internal_62a8220, public_62a8220);
extern "C" NAKED register_t __cdecl internal_62a8220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639dff8]
        mov dword ptr ds : [public_63fc2c0], eax
        ret 
        UNREACHABLE_TRAP(0x62a8220)
    }
}
