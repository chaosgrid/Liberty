#include "Freelancer-PCH.h"

PROC_DECLARE(0x45b610, internal_45b610, public_45b610);
extern "C" NAKED register_t __cdecl internal_45b610()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cea08]
        mov dword ptr ds : [public_66d3e0], eax
        ret 
        UNREACHABLE_TRAP(0x45b610)
    }
}
