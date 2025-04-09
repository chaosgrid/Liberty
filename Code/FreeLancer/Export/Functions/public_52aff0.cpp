#include "Freelancer-PCH.h"

PROC_DECLARE(0x52aff0, internal_52aff0, public_52aff0);
extern "C" NAKED register_t __cdecl internal_52aff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dd330]
        mov dword ptr ds : [public_67542c], eax
        ret 
        UNREACHABLE_TRAP(0x52aff0)
    }
}
