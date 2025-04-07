#include "Common-PCH.h"

PROC_DECLARE(0x62a8320, internal_62a8320, public_62a8320);
extern "C" NAKED register_t __cdecl internal_62a8320()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e00c]
        mov dword ptr ds : [public_63fc2c8], eax
        ret 
        UNREACHABLE_TRAP(0x62a8320)
    }
}
