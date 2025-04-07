#include "Common-PCH.h"

PROC_DECLARE(0x629a7e0, internal_629a7e0, public_629a7e0);
extern "C" NAKED register_t __cdecl internal_629a7e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d3bc]
        mov dword ptr ds : [public_63fc1d8], eax
        ret 
        UNREACHABLE_TRAP(0x629a7e0)
    }
}
