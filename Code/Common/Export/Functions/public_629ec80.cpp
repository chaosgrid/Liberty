#include "Common-PCH.h"

PROC_DECLARE(0x629ec80, internal_629ec80, public_629ec80);
extern "C" NAKED register_t __cdecl internal_629ec80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d91c]
        mov dword ptr ds : [public_63fc234], eax
        ret 
        UNREACHABLE_TRAP(0x629ec80)
    }
}
