#include "Freelancer-PCH.h"

PROC_DECLARE(0x44ce80, internal_44ce80, public_44ce80);
extern "C" NAKED register_t __cdecl internal_44ce80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cbfd8]
        mov dword ptr ds : [public_668acc], eax
        ret 
        UNREACHABLE_TRAP(0x44ce80)
    }
}
