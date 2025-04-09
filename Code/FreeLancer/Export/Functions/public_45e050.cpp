#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45e050, internal_45e050, public_45e050);
extern "C" NAKED register_t __cdecl internal_45e050()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d9cd]
        and eax, 0xFF52EAF5
        or eax, 0x52EAF5
        mov byte ptr ds : [public_66d9cc], 1
        mov dword ptr ds : [public_66d9cd], eax
        ret 
        UNREACHABLE_TRAP(0x45e050)
    }
}
