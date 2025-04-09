#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45e1f0, internal_45e1f0, public_45e1f0);
extern "C" NAKED register_t __cdecl internal_45e1f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d965]
        and eax, 0xFFB6B6B6
        or eax, 0xB6B6B6
        mov byte ptr ds : [public_66d964], 8
        mov dword ptr ds : [public_66d965], eax
        ret 
        UNREACHABLE_TRAP(0x45e1f0)
    }
}
