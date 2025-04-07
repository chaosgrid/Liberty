#include "Common-PCH.h"

PROC_DECLARE(0x629a7d0, internal_629a7d0, public_629a7d0);
extern "C" NAKED register_t __cdecl internal_629a7d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d3b8]
        mov dword ptr ds : [public_63fc1dc], eax
        ret 
        UNREACHABLE_TRAP(0x629a7d0)
    }
}
