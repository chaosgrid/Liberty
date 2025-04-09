#include "Freelancer-PCH.h"

PROC_DECLARE(0x412610, internal_412610, public_412610);
extern "C" NAKED register_t __cdecl internal_412610()
{
    __asm
    {
        mov dword ptr ds : [public_616680], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x412610)
    }
}
