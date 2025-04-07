#include "Freelancer-PCH.h"

PROC_DECLARE(0x446bb0, internal_446bb0, public_446bb0);
extern "C" NAKED register_t __cdecl internal_446bb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cbd6c]
        mov dword ptr ds : [public_668a94], eax
        ret 
        UNREACHABLE_TRAP(0x446bb0)
    }
}
