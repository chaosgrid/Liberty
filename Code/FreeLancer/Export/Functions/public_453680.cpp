#include "Freelancer-PCH.h"

PROC_DECLARE(0x453680, internal_453680, public_453680);
extern "C" NAKED register_t __cdecl internal_453680()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cd794]
        mov dword ptr ds : [public_66d280], eax
        ret 
        UNREACHABLE_TRAP(0x453680)
    }
}
