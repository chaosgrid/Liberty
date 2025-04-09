#include "Freelancer-PCH.h"

PROC_DECLARE(0x512bd0, internal_512bd0, public_512bd0);
extern "C" NAKED register_t __cdecl internal_512bd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db6f0]
        mov dword ptr ds : [public_6751a4], eax
        ret 
        UNREACHABLE_TRAP(0x512bd0)
    }
}
