#include "Freelancer-PCH.h"

PROC_DECLARE(0x443a80, internal_443a80, public_443a80);
extern "C" NAKED register_t __cdecl internal_443a80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cb910]
        mov dword ptr ds : [public_668a6c], eax
        ret 
        UNREACHABLE_TRAP(0x443a80)
    }
}
