#include "Common-PCH.h"

PROC_DECLARE(0x62a2b40, internal_62a2b40, public_62a2b40);
extern "C" NAKED register_t __cdecl internal_62a2b40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639dcd4]
        mov dword ptr ds : [public_63fc2b0], eax
        ret 
        UNREACHABLE_TRAP(0x62a2b40)
    }
}
