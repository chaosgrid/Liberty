#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45e0b0, internal_45e0b0, public_45e0b0);
extern "C" NAKED register_t __cdecl internal_45e0b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d9b5]
        and eax, 0xFFE0C387
        or eax, 0xE0C387
        mov byte ptr ds : [public_66d9b4], 8
        mov dword ptr ds : [public_66d9b5], eax
        ret 
        UNREACHABLE_TRAP(0x45e0b0)
    }
}
