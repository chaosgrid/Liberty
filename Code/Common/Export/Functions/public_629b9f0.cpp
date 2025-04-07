#include "Common-PCH.h"

PROC_DECLARE(0x629b9f0, internal_629b9f0, public_629b9f0);
extern "C" NAKED register_t __cdecl internal_629b9f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d500]
        mov dword ptr ds : [public_63fc1f8], eax
        ret 
        UNREACHABLE_TRAP(0x629b9f0)
    }
}
