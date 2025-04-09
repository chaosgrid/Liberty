#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45e070, internal_45e070, public_45e070);
extern "C" NAKED register_t __cdecl internal_45e070()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d9c5]
        and eax, 0xFF52EAF5
        or eax, 0x52EAF5
        mov byte ptr ds : [public_66d9c4], 6
        mov dword ptr ds : [public_66d9c5], eax
        ret 
        UNREACHABLE_TRAP(0x45e070)
    }
}
