#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52ec20, internal_52ec20, public_52ec20);
extern "C" NAKED register_t __cdecl internal_52ec20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddb60]
        mov dword ptr ds : [public_675488], eax
        ret 
        UNREACHABLE_TRAP(0x52ec20)
    }
}
