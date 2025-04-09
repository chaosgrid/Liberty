#include "Freelancer-PCH.h"

PROC_DECLARE(0x438bf0, internal_438bf0, public_438bf0);
extern "C" NAKED register_t __cdecl internal_438bf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5caef4]
        mov dword ptr ds : [public_668764], eax
        ret 
        UNREACHABLE_TRAP(0x438bf0)
    }
}
