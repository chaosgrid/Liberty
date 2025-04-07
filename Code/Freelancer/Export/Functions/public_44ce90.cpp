#include "Freelancer-PCH.h"

PROC_DECLARE(0x44ce90, internal_44ce90, public_44ce90);
extern "C" NAKED register_t __cdecl internal_44ce90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cbfd8]
        mov dword ptr ds : [public_668ac8], eax
        ret 
        UNREACHABLE_TRAP(0x44ce90)
    }
}
