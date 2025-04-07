#include "Freelancer-PCH.h"

PROC_DECLARE(0x52ec10, internal_52ec10, public_52ec10);
extern "C" NAKED register_t __cdecl internal_52ec10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddb60]
        mov dword ptr ds : [public_67548c], eax
        ret 
        UNREACHABLE_TRAP(0x52ec10)
    }
}
