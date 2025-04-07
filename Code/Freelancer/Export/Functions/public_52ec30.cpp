#include "Freelancer-PCH.h"

PROC_DECLARE(0x52ec30, internal_52ec30, public_52ec30);
extern "C" NAKED register_t __cdecl internal_52ec30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddb64]
        mov dword ptr ds : [public_675484], eax
        ret 
        UNREACHABLE_TRAP(0x52ec30)
    }
}
