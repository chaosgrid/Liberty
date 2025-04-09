#include "Freelancer-PCH.h"

PROC_DECLARE(0x5300e0, internal_5300e0, public_5300e0);
extern "C" NAKED register_t __cdecl internal_5300e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddd44]
        mov dword ptr ds : [public_675508], eax
        ret 
        UNREACHABLE_TRAP(0x5300e0)
    }
}
