#include "Freelancer-PCH.h"

PROC_DECLARE(0x4ceea0, internal_4ceea0, public_4ceea0);
extern "C" NAKED register_t __cdecl internal_4ceea0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d7958]
        mov dword ptr ds : [public_67493c], eax
        ret 
        UNREACHABLE_TRAP(0x4ceea0)
    }
}
