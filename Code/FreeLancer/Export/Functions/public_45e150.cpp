#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45e150, internal_45e150, public_45e150);
extern "C" NAKED register_t __cdecl internal_45e150()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d98d]
        and eax, 0xFFE0C387
        or eax, 0xE0C387
        mov byte ptr ds : [public_66d98c], 0
        mov dword ptr ds : [public_66d98d], eax
        ret 
        UNREACHABLE_TRAP(0x45e150)
    }
}
