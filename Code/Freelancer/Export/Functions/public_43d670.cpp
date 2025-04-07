#include "Freelancer-PCH.h"

PROC_DECLARE(0x43d670, internal_43d670, public_43d670);
extern "C" NAKED register_t __cdecl internal_43d670()
{
    __asm
    {
        mov dword ptr ds : [public_6687ec], 0
        mov dword ptr ds : [public_6687f0], 0xBECCCCCD
        mov dword ptr ds : [public_6687f4], 0
        ret 
        UNREACHABLE_TRAP(0x43d670)
    }
}
