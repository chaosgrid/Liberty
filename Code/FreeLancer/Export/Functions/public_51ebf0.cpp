#include "Freelancer-PCH.h"

PROC_DECLARE(0x51ebf0, internal_51ebf0, public_51ebf0);
extern "C" NAKED register_t __cdecl internal_51ebf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc354]
        mov dword ptr ds : [public_675374], eax
        ret 
        UNREACHABLE_TRAP(0x51ebf0)
    }
}
