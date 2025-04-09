#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45e190, internal_45e190, public_45e190);
extern "C" NAKED register_t __cdecl internal_45e190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d97d]
        and eax, 0xFFB6B6B6
        or eax, 0xB6B6B6
        mov byte ptr ds : [public_66d97c], 0
        mov dword ptr ds : [public_66d97d], eax
        ret 
        UNREACHABLE_TRAP(0x45e190)
    }
}
