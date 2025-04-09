#include "Freelancer-PCH.h"

PROC_DECLARE(0x443a60, internal_443a60, public_443a60);
extern "C" NAKED register_t __cdecl internal_443a60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cb90c]
        mov dword ptr ds : [public_668a74], eax
        ret 
        UNREACHABLE_TRAP(0x443a60)
    }
}
