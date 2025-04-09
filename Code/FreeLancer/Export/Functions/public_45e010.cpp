#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45e010, internal_45e010, public_45e010);
extern "C" NAKED register_t __cdecl internal_45e010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d9dd]
        and eax, 0xFF1D1DBF
        or eax, 0x1D1DBF
        mov byte ptr ds : [public_66d9dc], 1
        mov dword ptr ds : [public_66d9dd], eax
        ret 
        UNREACHABLE_TRAP(0x45e010)
    }
}
