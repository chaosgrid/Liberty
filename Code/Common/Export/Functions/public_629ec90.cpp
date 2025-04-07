#include "Common-PCH.h"

PROC_DECLARE(0x629ec90, internal_629ec90, public_629ec90);
extern "C" NAKED register_t __cdecl internal_629ec90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d920]
        mov dword ptr ds : [public_63fc230], eax
        ret 
        UNREACHABLE_TRAP(0x629ec90)
    }
}
