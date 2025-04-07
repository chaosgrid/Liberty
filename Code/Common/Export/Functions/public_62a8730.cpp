#include "Common-PCH.h"

PROC_DECLARE(0x62a8730, internal_62a8730, public_62a8730);
extern "C" NAKED register_t __cdecl internal_62a8730()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e0c4]
        mov dword ptr ds : [public_63fc2d8], eax
        ret 
        UNREACHABLE_TRAP(0x62a8730)
    }
}
