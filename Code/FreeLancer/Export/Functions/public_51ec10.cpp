#include "Freelancer-PCH.h"

PROC_DECLARE(0x51ec10, internal_51ec10, public_51ec10);
extern "C" NAKED register_t __cdecl internal_51ec10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc358]
        mov dword ptr ds : [public_67536c], eax
        ret 
        UNREACHABLE_TRAP(0x51ec10)
    }
}
