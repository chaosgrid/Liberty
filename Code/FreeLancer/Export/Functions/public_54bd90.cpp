#include "Freelancer-PCH.h"

PROC_DECLARE(0x54bd90, internal_54bd90, public_54bd90);
extern "C" NAKED register_t __cdecl internal_54bd90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0870]
        mov dword ptr ds : [public_679798], eax
        ret 
        UNREACHABLE_TRAP(0x54bd90)
    }
}
