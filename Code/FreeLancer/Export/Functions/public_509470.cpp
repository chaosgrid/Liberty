#include "Freelancer-PCH.h"

PROC_DECLARE(0x509470, internal_509470, public_509470);
extern "C" NAKED register_t __cdecl internal_509470()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x294]
        ret 
        UNREACHABLE_TRAP(0x509470)
    }
}
