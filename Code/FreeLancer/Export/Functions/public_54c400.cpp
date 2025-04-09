#include "Freelancer-PCH.h"

PROC_DECLARE(0x54c400, internal_54c400, public_54c400);
extern "C" NAKED register_t __cdecl internal_54c400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0950]
        mov dword ptr ds : [public_679858], eax
        ret 
        UNREACHABLE_TRAP(0x54c400)
    }
}
