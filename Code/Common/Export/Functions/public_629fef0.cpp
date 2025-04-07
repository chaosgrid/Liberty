#include "Common-PCH.h"

PROC_DECLARE(0x629fef0, internal_629fef0, public_629fef0);
extern "C" NAKED register_t __cdecl internal_629fef0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d9b8]
        mov dword ptr ds : [public_63fc254], eax
        ret 
        UNREACHABLE_TRAP(0x629fef0)
    }
}
