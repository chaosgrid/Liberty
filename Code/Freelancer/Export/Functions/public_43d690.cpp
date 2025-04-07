#include "Freelancer-PCH.h"

PROC_DECLARE(0x43d690, internal_43d690, public_43d690);
extern "C" NAKED register_t __cdecl internal_43d690()
{
    __asm
    {
        mov dword ptr ds : [public_6687e0], 0
        mov dword ptr ds : [public_6687e4], 0xBECCCCCD
        mov dword ptr ds : [public_6687e8], 0
        ret 
        UNREACHABLE_TRAP(0x43d690)
    }
}
