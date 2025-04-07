#include "Freelancer-PCH.h"

PROC_DECLARE(0x509660, internal_509660, public_509660);
extern "C" NAKED register_t __cdecl internal_509660()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x2AC]
        ret 
        UNREACHABLE_TRAP(0x509660)
    }
}
