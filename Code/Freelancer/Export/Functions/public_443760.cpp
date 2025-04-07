#include "Freelancer-PCH.h"

PROC_DECLARE(0x443760, internal_443760, public_443760);
extern "C" NAKED register_t __cdecl internal_443760()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cb8c8]
        mov dword ptr ds : [public_668834], eax
        ret 
        UNREACHABLE_TRAP(0x443760)
    }
}
