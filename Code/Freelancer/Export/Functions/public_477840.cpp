#include "Freelancer-PCH.h"

PROC_DECLARE(0x477840, internal_477840, public_477840);
extern "C" NAKED register_t __cdecl internal_477840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d0e20]
        mov dword ptr ds : [public_671cd8], eax
        ret 
        UNREACHABLE_TRAP(0x477840)
    }
}
