#include "Freelancer-PCH.h"

PROC_DECLARE(0x443740, internal_443740, public_443740);
extern "C" NAKED register_t __cdecl internal_443740()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cb8c4]
        mov dword ptr ds : [public_66883c], eax
        ret 
        UNREACHABLE_TRAP(0x443740)
    }
}
