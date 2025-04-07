#include "Freelancer-PCH.h"

PROC_DECLARE(0x52fc10, internal_52fc10, public_52fc10);
extern "C" NAKED register_t __cdecl internal_52fc10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddd14]
        mov dword ptr ds : [public_6754ac], eax
        ret 
        UNREACHABLE_TRAP(0x52fc10)
    }
}
