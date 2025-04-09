#include "FreeLancer-PCH.h"

PROC_DECLARE(0x453990, internal_453990, public_453990);
extern "C" NAKED register_t __cdecl internal_453990()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cdad8]
        mov dword ptr ds : [public_66d290], eax
        ret 
        UNREACHABLE_TRAP(0x453990)
    }
}
