#include "Common-PCH.h"

PROC_DECLARE(0x62a2b60, internal_62a2b60, public_62a2b60);
extern "C" NAKED register_t __cdecl internal_62a2b60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639dcd8]
        mov dword ptr ds : [public_63fc2a8], eax
        ret 
        UNREACHABLE_TRAP(0x62a2b60)
    }
}
