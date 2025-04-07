#include "Common-PCH.h"

PROC_DECLARE(0x62db380, internal_62db380, public_62db380);
extern "C" NAKED register_t __cdecl internal_62db380()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a05ac]
        mov dword ptr ds : [public_63fc990], eax
        ret 
        UNREACHABLE_TRAP(0x62db380)
    }
}
