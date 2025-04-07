#include "Freelancer-PCH.h"

PROC_DECLARE(0x437b40, internal_437b40, public_437b40);
extern "C" NAKED register_t __cdecl internal_437b40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5caedc]
        mov dword ptr ds : [public_668700], eax
        ret 
        UNREACHABLE_TRAP(0x437b40)
    }
}
