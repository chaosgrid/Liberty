#include "Freelancer-PCH.h"

PROC_DECLARE(0x509670, internal_509670, public_509670);
extern "C" NAKED register_t __cdecl internal_509670()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x2B0]
        ret 
        UNREACHABLE_TRAP(0x509670)
    }
}
