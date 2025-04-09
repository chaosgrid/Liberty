#include "Freelancer-PCH.h"

PROC_DECLARE(0x46ed60, internal_46ed60, public_46ed60);
extern "C" NAKED register_t __cdecl internal_46ed60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d0090]
        mov dword ptr ds : [public_66daf8], eax
        ret 
        UNREACHABLE_TRAP(0x46ed60)
    }
}
