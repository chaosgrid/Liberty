#include "Freelancer-PCH.h"

PROC_DECLARE(0x559790, internal_559790, public_559790);
extern "C" NAKED register_t __cdecl internal_559790()
{
    __asm
    {
        mov dword ptr ds : [public_679ad8], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x559790)
    }
}
