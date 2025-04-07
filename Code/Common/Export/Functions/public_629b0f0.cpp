#include "Common-PCH.h"

PROC_DECLARE(0x629b0f0, internal_629b0f0, public_629b0f0);
extern "C" NAKED register_t __cdecl internal_629b0f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d4f4]
        mov dword ptr ds : [public_63fc1ec], eax
        ret 
        UNREACHABLE_TRAP(0x629b0f0)
    }
}
