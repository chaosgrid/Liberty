#include "Common-PCH.h"

PROC_DECLARE(0x629b0e0, internal_629b0e0, public_629b0e0);
extern "C" NAKED register_t __cdecl internal_629b0e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d4f4]
        mov dword ptr ds : [public_63fc1f0], eax
        ret 
        UNREACHABLE_TRAP(0x629b0e0)
    }
}
