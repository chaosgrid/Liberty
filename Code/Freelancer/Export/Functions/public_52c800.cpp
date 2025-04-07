#include "Freelancer-PCH.h"

PROC_DECLARE(0x52c800, internal_52c800, public_52c800);
extern "C" NAKED register_t __cdecl internal_52c800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dd424]
        mov dword ptr ds : [public_675454], eax
        ret 
        UNREACHABLE_TRAP(0x52c800)
    }
}
