#include "Freelancer-PCH.h"

PROC_DECLARE(0x4bd660, internal_4bd660, public_4bd660);
extern "C" NAKED register_t __cdecl internal_4bd660()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d5f70]
        mov dword ptr ds : [public_67243c], eax
        ret 
        UNREACHABLE_TRAP(0x4bd660)
    }
}
