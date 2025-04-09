#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45e030, internal_45e030, public_45e030);
extern "C" NAKED register_t __cdecl internal_45e030()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d9d5]
        and eax, 0xFFFD7EFF
        or eax, 0xFD7EFF
        mov byte ptr ds : [public_66d9d4], 0
        mov dword ptr ds : [public_66d9d5], eax
        ret 
        UNREACHABLE_TRAP(0x45e030)
    }
}
