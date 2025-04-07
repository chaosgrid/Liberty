#include "Common-PCH.h"

PROC_DECLARE(0x629b9d0, internal_629b9d0, public_629b9d0);
extern "C" NAKED register_t __cdecl internal_629b9d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d4fc]
        mov dword ptr ds : [public_63fc200], eax
        ret 
        UNREACHABLE_TRAP(0x629b9d0)
    }
}
