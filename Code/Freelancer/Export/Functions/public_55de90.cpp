#include "Freelancer-PCH.h"

PROC_DECLARE(0x55de90, internal_55de90, public_55de90);
extern "C" NAKED register_t __cdecl internal_55de90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e18ec]
        mov dword ptr ds : [public_679b0c], eax
        ret 
        UNREACHABLE_TRAP(0x55de90)
    }
}
