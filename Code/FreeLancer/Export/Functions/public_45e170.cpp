#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45e170, internal_45e170, public_45e170);
extern "C" NAKED register_t __cdecl internal_45e170()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d985]
        and eax, 0xFF52EAF5
        or eax, 0x52EAF5
        mov byte ptr ds : [public_66d984], 0
        mov dword ptr ds : [public_66d985], eax
        ret 
        UNREACHABLE_TRAP(0x45e170)
    }
}
