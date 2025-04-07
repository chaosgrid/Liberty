#include "Common-PCH.h"

PROC_DECLARE(0x629b9e0, internal_629b9e0, public_629b9e0);
extern "C" NAKED register_t __cdecl internal_629b9e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d4fc]
        mov dword ptr ds : [public_63fc1fc], eax
        ret 
        UNREACHABLE_TRAP(0x629b9e0)
    }
}
