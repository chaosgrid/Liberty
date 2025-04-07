#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b6270, internal_5b6270, public_5b6270);
extern "C" NAKED register_t __cdecl internal_5b6270()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e715c]
        mov dword ptr ds : [public_67ed50], eax
        ret 
        UNREACHABLE_TRAP(0x5b6270)
    }
}
